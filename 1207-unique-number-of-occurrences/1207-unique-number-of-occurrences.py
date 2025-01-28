class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        valueOccurrences=list(Counter(arr).values())
        if len(valueOccurrences)==len(set(Counter(arr).values())): 
            return True
        return False