class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mpp = defaultdict(int)
        for num in nums:
            mpp[num] = mpp[num] + 1

        for num, cnt in mpp.items():
            if cnt == 1:
                return num
        
        return -1