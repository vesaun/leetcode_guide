Idea: Check if they are both null, then return true. If only one is null, return false. Then check if both of the left and right values are equal by recursively calling the function on those child nodes. 
Code: 
Def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
	If not p and not q:
		Return True
	If not p and q:
		Return False
	If p and not q: 
		Return False
	If p.val == q.val:
		Return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
	Return False
Time Complexity: O(min(m, n)) where m and n are the number of nodes in p and q, respectively. Worst case would be the same tree where we visit N nodes so O(n). 
Space Complexity: O(1) since we are not creating any new data.
