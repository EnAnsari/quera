# powered by Rahmat
# Email: Rahmat2022a@gmail.com
# Github: https://github.com/EnAnsari
# question link: https://quera.org/problemset/16396/

class Foo:
    def __init__(self):
        self._x = int(0)
      
    def get_age(self):
        return self._x
       
    def set_age(self, a):
      if a >= 0:
        self._x = int(abs(a) % 100)
      else:
        self._x = int(-1)
     
    x = property(get_age, set_age) 