In order to get correct answer by 100% from answer pool of (1~x), log_2(x)+1 times of guessing chances are required.
for 1 answer pool, 1 chance
for 2 answer pool, 2 chance
for 3 answer pool, 2 chance
for 4 answer pool, 3 chance
for 5 answer pool, 3 chance
for 6 answer pool, 3 chance
for 7 answer pool, 3 chance
for 8 answer pool, 4 chance (if 4 chosen, then divided into 3-answer-pool & 4-answer-pool question.)
for 15 answer pool, 4 chance
for 16 answer pool, 5 chance
for 31 answer pool, 5 chance
for 32 answer pool, 6 chance
for 

f ((n answer pool) middle (n answer pool)) = f(n answer pool) + 1 = f(2n)

from 1 to 50 (or 1 to 32 or 1 to 63),
we require 6 chances of asking

for example, 1?
32
16
8
4
2
1

for example, 1?
25
12
6
3
2
1

for example, 50?
32
41
45
48
49
50

