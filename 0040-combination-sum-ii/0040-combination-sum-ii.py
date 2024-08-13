class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        candidates.sort()
        
        n = len(candidates)
        
        def dfs(i,cur,total):
            if total == target:
                res.append(cur.copy())
                return
            if total>target or i == n:
                return
            
            cur.append(candidates[i])
            dfs(i+1,cur,total+candidates[i])
            cur.pop()
            
            while i+1<n and candidates[i]==candidates[i+1]:
                i+=1
                
            dfs(i+1,cur,total)
        
        dfs(0,[],0)
        return res