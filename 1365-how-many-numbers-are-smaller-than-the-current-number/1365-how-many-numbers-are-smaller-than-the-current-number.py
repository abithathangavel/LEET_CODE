class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        a=[]
        l=[]
        a.extend(nums)
        a.sort()
        for i in nums:
            l.append(a.index(i))
        return l