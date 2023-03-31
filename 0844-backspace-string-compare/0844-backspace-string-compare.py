class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        a=""
        b=""
        for i in s:
            if (i!="#"):
                a=a+i
            else:
                if a!="":
                    a=a[:-1]
        for i in t:
            if (i!="#"):
                b=b+i
            else:
                if b!="":
                    b=b[:-1]
        if (a==b):
            return True
        else:
            return False