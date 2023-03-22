import os
import pprint
import re
import subprocess
import sys
import unittest
from unittest.util import three_way_cmp

from selenium import webdriver
from selenium.webdriver.common.desired_capabilities import DesiredCapabilities
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time
def _cmp_test_names(x, y):
    m1 = re.match(r'test_(\d+)_.*', x)
    m2 = re.match(r'test_(\d+)_.*', y)
    if m1 and m2:
        return three_way_cmp(int(m1.group(1)), int(m2.group(1)))
    return three_way_cmp(x, y)


unittest.TestLoader.sortTestMethodsUsing = lambda _, x, y: _cmp_test_names(x, y)



DEBUG = 'PRODUCTION' not in os.environ

SRC_PATH = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


class SimpleTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        print('DEBUG = {}'.format(DEBUG), file=sys.stderr)
        cls.server = subprocess.Popen(['python3', '-m', 'http.server', '9988'], cwd=SRC_PATH, stderr=subprocess.DEVNULL)

        desired_capabilities = dict({'loggingPrefs': {'browser': 'ALL'}}, **DesiredCapabilities.CHROME)

        if DEBUG:
            cls.driver = webdriver.Chrome(executable_path="/home/mreza/chrome_exec_path/chromedriver_linux64/chromedriver", desired_capabilities=desired_capabilities)
        else:
            cls.driver = webdriver.Remote(
                command_executor='http://localhost:4444/wd/hub',
                desired_capabilities=desired_capabilities
            )

        cls.driver.implicitly_wait(1)
        cls.driver.get('http://127.0.0.1:9988/index.html')

    @staticmethod
    def normalizeWidth(width):
        return int(re.sub('[^0-9.]', '', width))

    def test_1(self):
        window_before = self.driver.window_handles[0]
        iframe_tag = self.driver.find_element_by_id("root")
        time.sleep(3)
        self.driver.switch_to.frame(self.driver.find_element_by_id("root"))
        elem = self.driver.find_element_by_id("test")
        self.driver.switch_to_window(window_before)




    @classmethod
    def tearDownClass(cls):
        console_logs = []
        for log_item in cls.driver.get_log('browser'):
            if log_item.get('source') == 'network' and 'favicon.ico - Failed to load' in log_item.get('message'):
                continue
            console_logs.append(log_item)
        if console_logs:
            print('\n--------------------\nBROWSER CONSOLE LOG:\n-----', file=sys.stderr)
            for log_item in console_logs[:10]:
                log_item['message'] = log_item['message'][:200]
                print(pprint.pformat(log_item), '-----', sep='\n', file=sys.stderr)
                cls.server.kill()
                cls.driver.close()


if __name__ == '__main__':
    unittest.main()
