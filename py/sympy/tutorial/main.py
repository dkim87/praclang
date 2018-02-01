"""sympy tutorial"""
# https://www.youtube.com/watch?v=br5NPhAtO18
import math

def main():
    """main function"""
    math.sqrt(8)

    import sympy as sym
    sym.sqrt(8)

    r_1 = sym.Rational(4, 5)
    r_2 = sym.Rational(5, 4)
    print("addition of these two rationals:")
    print(r_1 + r_2)

    print('Division of these two rationals:')
    print(r_1 / r_2)

    r_3 = r_1 / r_2
    type(r_3)

# Symbols
    x, y = sym.symbols('x y')
    expression_one = y + 2 * x
    expression_two = 2 * x + y

    print(expression_one)
    print(expression_two)

if __name__ == "__main__":
    main()
