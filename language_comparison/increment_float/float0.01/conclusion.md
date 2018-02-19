# incrment a double variable by 0.01

## unexpected result (bug)

if a=1 is incremented by 0.01 while a is smaller or equal to b = 2,
a does not reach 2 but stops at around 1.990000000..001 because of the loose nature of float type.
i.e. There exists a machine error.
Therefore, instead of looping through 101 times (which is expected), it only loops 100 times.

## results:
all tested languages such as:
- python
- java
- c
- julia
- matlab

showed the unexpected behavior (float type bug)

## desired feature
in order to correct for its behavior,
a = 1 + 0.01 must be exacted 1.01, instead of 1.01000...001

### solution
convert them into int
```
(int)(100*a) <= (int)(100*b)
```

