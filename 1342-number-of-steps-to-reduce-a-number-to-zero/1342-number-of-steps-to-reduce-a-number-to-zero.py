class Solution:
    def numberOfSteps(self, num: int) -> int:
        a=bin(num).replace("0b","")
        if a[-1]==1:
            return len(a)+a.count("1")
        else:
            return len(a)+a.count("1")-1