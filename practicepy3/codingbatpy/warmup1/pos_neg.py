def pos_neg(a,b,negative):
    return ((is_neg(a)!=is_neg(b))and negative==False) or (is_neg(a) and is_neg(b) and negative)





    
def is_neg(c):
    return c<0


