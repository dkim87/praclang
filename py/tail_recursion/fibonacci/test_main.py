import unittest
import sys
from main import *
import logging

class TestMain(unittest.TestCase):
    def test_fib_tail(self):
        self.assertEqual( fib_tail(0), 0)
        self.assertEqual( fib_tail(1), 1)
        self.assertEqual( fib_tail(2), 1)
        self.assertEqual( fib_tail(3), 2)
        self.assertEqual( fib_tail(4), 3)
        self.assertEqual( fib_tail(5), 5)

    def test_fib_ter(self):
        self.assertEqual( fib_iter(0), 0)
        self.assertEqual( fib_iter(1), 1)
        self.assertEqual( fib_iter(2), 1)
        self.assertEqual( fib_iter(3), 2)
        self.assertEqual( fib_iter(4), 3)
        self.assertEqual( fib_iter(5), 5)




if __name__ == '__main__':
    unittest.main()


