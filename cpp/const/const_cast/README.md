# what is the usage of const_cast?

You are not allowded to const_cast variables that are actually const. This results in undefined behavior. const_cast is used to remove the const-ness from references and pointers that ultimately refer to something that is not const.

This is allowded:
```
int i = 0;
const int& ref = i;
const int *ptr = &i;

const_cast<int&>(ref) = 3;
*const_cast<int>(ptr) = 3;
```

and This is not allowded:
```
const int i = 0;
const int& ref = i;
const int *ptr = &i;

const_cast<int&>(ref) = 3;
*const_cast<int>(ptr) = 3;
```
END
