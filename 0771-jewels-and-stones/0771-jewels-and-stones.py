class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        ans=0
        for i in range(len(jewels)):
            ans+=stones.count(jewels[i])
        return ans