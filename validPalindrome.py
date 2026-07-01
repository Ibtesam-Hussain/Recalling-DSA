# LeetCode 125. Valid Palindrome


class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        #first remove all non-alphanumeric characters from the give string
        s = "".join(filter(lambda str: str.isalnum(), s)).lower()
        rev_str = ""
        for i in s:
            rev_str = i + rev_str
        
        if rev_str == s:
            return True
        else:
            return False
        