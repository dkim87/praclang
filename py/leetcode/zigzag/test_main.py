import unittest
import main


class TestMain(unittest.TestCase):
    def test_convert(self):
        sol = main.Solution.Solution()

        text = ""
        expt = ""
        resu = sol.convert(text, 1)
        self.assertEqual(expt, resu)

        text = ""
        expt = ""
        resu = sol.convert(text, 3)
        self.assertEqual(expt, resu)

        text = "P"
        expt = "P"
        resu = sol.convert(text, 3)
        self.assertEqual(expt, resu)

        text = "PA"
        expt = "PA"
        resu = sol.convert(text, 3)
        self.assertEqual(expt, resu)

        text = "PAY"
        expt = "PAY"
        resu = sol.convert(text, 3)
        self.assertEqual(expt, resu)

        text = "PAYP"
        expt = "PAPY"
        resu = sol.convert(text, 3)
        self.assertEqual(expt, resu)

        text = "PAYPA"
        expt = "PAAPY"
        resu = sol.convert(text, 3)
        self.assertEqual(expt, resu)

        text = "PAYPAL"
        expt = "PAAPLY"
        resu = sol.convert(text, 3)
        self.assertEqual(expt, resu)

        text = "PAYPALI"
        text = "PAYPALIS"
        text = "PAYPALISI"
        text = "PAYPALISHIRING"
        expt = "PAHNAPLSIIGYIR"
        resu = sol.convert(text, 3)
        self.assertEqual(expt, resu)
        print("success!")


if __name__ == '__main__':
    unittest.main()
