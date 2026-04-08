class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        dgt = [0]
        if (digits[-1])<9:
            digits[-1]=digits[-1] + 1
            return digits
            
        elif (digits[-1]==9):
            i=2
            for k in digits:
                dgt.append(k)
            dgt[-1]=0
            carry=1
            while(dgt[-i]==9):
                dgt[-i]=0
                i+=1
            dgt[-i]+=+1
            if dgt[0]==0:
                dgt.remove(0)
            return dgt
            


        

        