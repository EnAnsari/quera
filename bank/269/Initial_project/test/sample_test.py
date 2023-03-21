import unittest
from bs4 import BeautifulSoup
import sys
sys.path.append('../Initial_project')
from solution import process


class Test(unittest.TestCase):
	def test_1(self):
		self.assertEqual(process("htmlsampletest1.html"), 1)

	def test_2(self):
		self.assertEqual(process("htmlsampletest2.html"), 4)
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									

if __name__ == '__main__':
    unittest.main()