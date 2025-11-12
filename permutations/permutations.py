class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        l = len(nums)
        if l == 1:
            return [nums]
        elif l == 0:
            return []
        answer = []
        for i in range(len(nums)):
            cur = nums[i]
            remaining = nums[:i] + nums[i+1:]
            for j in self.permute(remaining):
                answer.append([cur]+j)
        return answer
        