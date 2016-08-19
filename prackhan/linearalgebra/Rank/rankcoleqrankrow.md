Proof: 

Let us presume there is an nxm matrix A.

A is gone through elimentary row operation and now maintains rref form.

Let us say it has k pivot entries (0000...1000 kinda appearance). We often define that as a rank of A.

Since it has been done through linear operation, pivot rows can express any vector that are present in A's rowspace, that is, those pivots are the great candidates for the basis. The number of them would determine the dimension of its rowspace, which is in fact, the rank.

Therefore 
rank(A) = dim(rowspace(A))

On the other hand, Since each pivot columns can express any vector that are present in A's colspace since it starts with 1 and the others are all 0. 

Therefore
rank(A) = dim(colspace(A))

Finally,

rank(A)=dim(colspace(A)) = dim(rowspace(A)) = dim(A)

##########

Error found

##########

Let us say there is mxn matrix A, where m > n.

A's dimension should be lower or equal to n. It can never be larger than n.

Let us say, its rref form has n pivot rows.

Then the dimension of its rowspace is n.

Which is the maximum possible dimension.


1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0 

A's row is the linear combination of its pivot rows, obviously.

However, is the columns of A also linearly dependent to its pivot columns? Not really. There are n+1...m rows that are not able to be expressed as a linear combination of its pivot columns. 

Then why does this shows that the columnspace's dimension also n?

I have no idea. 


Then, how about a matrix ixj B where i < j?

1 0 6 0 2 0 
0 1 3 0 0 0 
0 0 0 1 5 0
0 0 0 0 0 1

Obviously the dimension of the rowspace is i, 


So the proof is partial; it is only consistent when there is no zero row vector in the rref form of a matrix.


