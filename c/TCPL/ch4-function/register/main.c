register int x;
register char c;

f(register unsigned m, register long n){
    register int i;
}

if (n>0){
    int i;
    for (i=0; i<n; i++)
        ;
 }

int x = 1;

In the most general case, before you read and write a file, you must inform the system of your intent to do so, a process called opening the file. If you are going to write on a file, it may also be necessary to create it or to discard its previous contents. The system checks your right to do so (Does the file exist? Do you have permission to access it?) and if all is well, returns to the program a small non-negative integer called a file descriptor. Whenever input or output is to be done on the file, the file descriptor is used instead of the name to identify the file. (A file descriptor is analogous to the file pointer)
