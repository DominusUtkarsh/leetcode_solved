class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        new = [ ele.lower() for ele in s if ele.isalnum()]
        return new == new[::-1]