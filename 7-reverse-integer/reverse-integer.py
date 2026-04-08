class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x<0:
            a=x*-1
            a=str(a)
            x=a[::-1]
            x=int(x)*-1
        else:
            b=str(x)
            x=b[::-1]
            x=int(x)
        if x<-2**31 or x>(2**31)-1:
            return 0
        else:
            return x
