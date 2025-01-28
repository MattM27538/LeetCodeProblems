class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        if len(set(Counter(arr).values()))== len(list(Counter(arr).values())): 
            return True
        return False