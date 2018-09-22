import itertools
import functools

def main():
    """this is main function."""
    x = [ 1, 2, 3, 4 ]
    y = [ 5, 6, 7 ]
    z = [ 8, 9 ]

    '''
    for i,j,k in itertools.product(x, y, z):
        print(i, j, k)
    '''

    for i,j,k in product(x, y, z):
        print(i,j,k)

def product(*args, repeat=1):
    import web_pdb; web_pdb.set_trace()
    # product('ABCD', 'xy') --> Ax Ay Bx By Cx Cy Dx Dy
    # product(range(2), repeat=3) --> 000 001 010 011 100 101 110 111
    pools = [tuple(pool) for pool in args] * repeat
    result = [[]]
    for pool in pools:
        result = [x+[y] for x in result for y in pool]
    for prod in result:
        yield tuple(prod)

''' python 2
def product(*args, **kwds):
# product('ABCD', 'xy') --> Ax Ay Bx By Cx Cy Dx Dy
# product(range(2), repeat=3) --> 000 001 010 011 100 101 110 111
    pools = map(tuple, args) * kwds.get('repeat', 1)
    result = [[]]
    for pool in pools:
        result = [x+[y] for x in result for y in pool]
    for prod in result:
        yield tuple(prod)
'''


if __name__ == '__main__':
    main()
