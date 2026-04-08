class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        x = len(nums)+1
        expected_sum = (x*(x-1))//2
        actual_sum = sum(nums)
        return expected_sum-actual_sum
        