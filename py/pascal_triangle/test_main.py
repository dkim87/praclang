import unittest
import main

class TestMain(unittest.TestCase):
    def test_pascal_next_line(self):
        y = main.pascal_next_line([1, 2, 1])
        print(y)
        self.assertListEqual(y, [1, 3, 3, 1])

        y = main.pascal_next_line([1, 1])
        print(y)
        self.assertListEqual(y, [1, 2, 1])

        y = main.pascal_next_line([1])
        print(y)
        self.assertListEqual(y, [1, 1])

    def test_print_pascal_until_nth_line(self):
        main.print_pascal_until_nth_line(3)
        main.print_pascal_until_nth_line(5)


if __name__ == '__main__':
    unittest.main()
