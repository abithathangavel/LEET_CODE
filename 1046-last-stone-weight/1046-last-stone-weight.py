class Solution:
    def lastStoneWeight(self, s: List[int]) -> int:
        i=len(s)
        while (i>1):
            a=max(s)
            s.remove(a)
            b=max(s)
            s.remove(b)
            if (a==b):
                i=i-2
            else:
                s.append(max(a,b)-min(a,b))
                i=i-1
        if len(s)>0:
            return s[0]
        return 0