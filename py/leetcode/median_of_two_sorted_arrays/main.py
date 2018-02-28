class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """

        l1 = len(nums1)
        l2 = len(nums2)

        t1 = nums1[l1//2]
        t2 = nums2[l2//2]

        if l1 <= 2 or l2 <= 2:
            nums = sorted(nums1, nums2)
            from statistics import median
            return median(nums)

        if t1 == t2:
            return t1 # this is median
        elif t1 > t2:
            pass

        nums = sorted(nums1 + nums2)
        from statistics import median
        return median(nums)

        return 0

import json
def stringToIntegerList(input):
    return json.loads(input)

def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            nums1 = stringToIntegerList(line);
            line = next(lines)
            nums2 = stringToIntegerList(line);

            ret = Solution().findMedianSortedArrays(nums1, nums2)

            out = str(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()
