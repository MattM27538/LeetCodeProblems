class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        valueOccurrences=list(Counter(arr).values())
        if len(valueOccurrences)==len(set(valueOccurrences)): 
            return True
        return False