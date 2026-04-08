class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num=sorted(set(nums))
        nu=list(num)
        for i in range(len(nu)):
            nums[i]=nu[i]
        return len(nu)