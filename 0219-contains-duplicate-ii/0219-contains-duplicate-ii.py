class Solution:
    def containsNearbyDuplicate(self, n: List[int], k: int) -> bool:
        a=len(n)
        b=len(list(set(n)))
        if a==b:
            return False
        n.extend([0]*k)
        for i in range(a-1):
            if n[i] in n[i+1:i+k+1]:
                    return True
        return False