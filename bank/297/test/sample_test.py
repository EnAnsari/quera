import unittest
import sys
sys.path.append('../Initial_project')
from solution import *


class Test(unittest.TestCase):
	
	def test_1(self):
		v = (
    		{'name':'apple', 'shape': 'sphere', 'mass': 350, 'volume': 120},
    		{'name':'mango', 'shape': 'square', 'mass': 150, 'volume': 120}, 
   			{'name':'lemon', 'shape': 'sphere', 'mass': 300, 'volume': 100},
    		{'name':'apple', 'shape': 'sphere', 'mass': 500, 'volume': 250}
		)
		solution = {'apple': 2, 'lemon': 1}
		self.assertEqual(fruits(v), solution)
  
  
if __name__ == '__main__':
    unittest.main()