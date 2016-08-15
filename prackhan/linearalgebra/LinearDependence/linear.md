If there is a 2x2 matrix (two 2-d vectors), these columns span 2d space, if they are linearly independent.

If there is a 2x3 matrix, these columns cannot be linearly independent. 
At best, at least one of them is dependent to other two columns.
Therefore, the matrix spans a 2d space.

Generalized: no matter how many columns a 2xk matrix has, it at most spans 2D.

If there is a 3x2 matrix (two 3-d vectors), these columns span 2d space, if they are linearly independent.

Generalized:
If there is a kx2 matrix which k is larger than 2, then no matter how large k is, the matrix only spans 2-d. 

Generalized:
- number of independent rows or columns = number of dimension
- If nxm matrix (n>=m) exists, its columns can only span at most m, where there exists m independent columns.
- If nxm matrix (n<=m) exists, its columns can only span at most n, where there exists n independent columns.
- The largest possible independent columns or rows 


In order to determine a nxn matrix has linearly independent columns, transforming its shape into rref is a good choice. If it becomes identity matrix, then its columns are *linearly independent*. Otherwise, at least one of them are dependent to others.



