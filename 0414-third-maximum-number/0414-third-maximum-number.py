class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        n=list(set(nums))
        n.sort()
        if len(n)>=3:
            return n[-3]
        else:
            return n[-1]
        