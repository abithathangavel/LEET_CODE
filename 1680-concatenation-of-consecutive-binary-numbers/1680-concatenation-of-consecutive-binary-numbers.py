class Solution:
    def concatenatedBinary(self, n: int) -> int:
        a=""
        for i in range(1,n+1):
            a=a+(bin(i).replace("0b",""))
        return int(a,2)%((10**9)+7)