class Solution:
    def findComplement(self, num: int) -> int:
        a=bin(num).replace("0b","")
        b=""
        for i in a:
            if i=="0":
                b=b+"1"
            else:
                b=b+"0"
        return int(b,2)