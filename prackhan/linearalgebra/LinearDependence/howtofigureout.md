1 0 3 0 0
0 1 6 0 0
0 0 0 1 0 

This case, they are linearly independent. As long as there is no zero row vector, the system is linearly independent.

1 0 2
0 1 5
0 0 1
0 0 0
0 0 0

This case, 2 among 5 equations are linearly dependent to others. 

Most easy way to figure out the dependency of a system is to change it into a bit modified rref form: row addition, scalar multiplication allowed but not the row exchange.

The final result would be like this:

1 0 0
0 0 1
0 0 0
0 1 0
0 0 0 

This shows that the third and the fifth row vectors are linearly dependent to others. 
