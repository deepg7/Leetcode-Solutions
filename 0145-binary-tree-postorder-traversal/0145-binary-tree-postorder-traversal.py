class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        def find(root, ans):
            if not root:
                return
            find(root.left, ans)
            find(root.right, ans)
            ans.append(root.val)
        
        ans = []
        find(root, ans)
        return ans