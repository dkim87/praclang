# why better?
# my original version was almost like a brute force. If a redundant position is given, then the while loop started over from the detected position.
# This version, however, does not need to restart from the position.
# Instead, it adds a smart condition (start_index < ltr_dic[c]) which prevents us from emptying dictionary and re-creating, but rather identify which portion of dictionary is valid and which is not. I was thinking maybe I should use a dictionary which remembers the added sequences of each element, but there was no need to do so. The index information (value portion) already contained such information!

class Solution:
    def lengthOfLongestSubstring(self, s):
 
        max_len=0
        start_index = -1
        ltr_dic = {}
    
        enu = enumerate(s)
        for i,c in enu:
            if c in ltr_dic and start_index < ltr_dic[c]:
                start_index = ltr_dic[c]
            
            cand = i - start_index
            if max_len < cand:
                max_len = cand
            
            ltr_dic[c] = i


        return max_len
