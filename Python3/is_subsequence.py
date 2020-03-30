class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        for w in s:
            if w not in t: return False
            if w in t: 
                t = t[t.find(w)+1:]
            
        return True
