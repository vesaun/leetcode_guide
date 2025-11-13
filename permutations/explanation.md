Idea: Take an element, place it at the beginning. Now you can create the permutations on the remaining list using recursion. Base cases are if len(num) == 1 or 0 which you will return [nums] or [], respectively. 


Code: 
Def permutations(self, nums) -> List[List[Int]]: 
	If len(nums) == 0: return []
	If len(nums) == 1: return [nums] // make sure it is [nums] since we are ret list[list[]]
	Answer = []
	For i in range(nums):
		Cur = nums[i]
		Remaining = nums[:i] + nums[i+1:]
		For j in self.permutations(remaining):
			answer.append([cur] + j)
	Return answer

    
Time Complexity: O(N!) or O(N*N-1*N-2…N-K-1) where k = n-2. Since we are looping through N elements, then recursively calling n-1, n-2, … n-k-1. 
Space Complexity: O(N * N!) since we are storing N! Permutations but also calling N recursions which creates a recursion stack of N. 
