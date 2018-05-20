# https://www.youtube.com/watch?v=Obt-vMVdM8s
from threading import *
import time


def countdown(n):
    while n > 0:
        n -= 1

COUNT = 50000000

start = time.time()

countdown(COUNT)

print(time.time() - start)

t1 = Thread(target=countdown, args=(COUNT//2, ))
t2 = Thread(target=countdown, args=(COUNT//2, ))

start=time.time()
t1.start()
t2.start()

t1.join()
t2.join()

print(time.time() - start)

