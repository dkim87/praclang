-- this is my first program

{- this is a multiline comment
 - lol
-}

import Data.List
import System.IO

-- Int -2^63 2^63

maxInt = maxBound :: Int

-- Double
bigFloat = 3.99999999 + 0.00000005

always5 :: Int
always5 = 5

sumOfNums = sum [ 1 .. 1000 ]

addEx = 5+4
subEx = 5-4
multEx = 5*4
divEx = 5/4

modEx = mod 5 4

modEx2 = 5 `mod` 4 -- infix operator

negNumEx = 5 + (-4)

num9 = 9 :: Int

sqrtOf9 = sqrt (fromIntegral num9)

truncateVal = 9.999

roundVal = round 9.999

trueAndFalse = True && False
trueOrFalse = True || False

notTrue = not(True)

-- list

primeNumbers = [3, 5, 7, 11]

morePrimes = primeNumbers ++ [13, 17, 19, 23, 29]
favNums = 2 : 7 : 66 : []

multList = [[3, 5, 7], [11, 13, 17]]

morePrimes2 = 2 : morePrimes

lenPrime = length morePrimes2

