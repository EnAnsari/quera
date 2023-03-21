# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/60135/

from bs4 import BeautifulSoup

def process(path):
   file = open(path)
   soup = BeautifulSoup(file)
   x = soup.find_all('a')
   return len(x)