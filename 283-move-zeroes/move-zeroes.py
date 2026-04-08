class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        count = nums.count(0)
        nums[:]=[x for x in nums if x!=0]
        zeros = [ x*0 for x in range(count)]
        nums.extend(zeros)
        

        