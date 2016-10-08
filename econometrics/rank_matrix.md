The row rank and the column rank are always equal.

print(row_rank==column_rank) // True

The largest possible rank for a matrix is either the number of rows or the number of columns, whichever is smaller.

full_rank = min(row_num,column_num)

Whenever a rank of a matrix is of less than its largest possible value, 



