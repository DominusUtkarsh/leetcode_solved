class Solution(object):
    def areOccurrencesEqual(self, s):
        """
        :type s: str
        :rtype: bool
        """
        a=set(s)
        a=list(a)
        cnt=s.count(s[0])
        for i in a:
            if s.count(i)==cnt:
                continue
            else:
                return False
                break     
        return s.count(i)==cnt
            
