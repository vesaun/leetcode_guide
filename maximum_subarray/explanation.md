Idea: Make the current sum equal to 0. Create the maximum to be the first element in the array. Now iterate through the array. Check if the current sum is currently negative (from previous iteration addition). If it is negative, set current sum to 0. Now, add current sum += array[i]. Update max to be current sum if and only if current sum > maximum. After iterating, return the maximum.

Code:
Def maxSubArray(self, List[nums]) -> Int:
	Best = nums[0]
	Cur = 0
	For i in range(len(nums)):
		If cur < 0:
			cur = 0
		Cur += nums[i]
		Best = max(best, cur)
	Return best
    
Time Complexity: O(N) since we are simply iterating through the number of nums (constant).
Space Complexity: O(1) since we are creating best and cur which are constant space entities.
