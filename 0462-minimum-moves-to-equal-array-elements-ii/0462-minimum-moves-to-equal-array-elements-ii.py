class Solution:
    def minMoves2(self, nums: list[int]) -> int:
        nums.sort()
        n = len(nums)
        if n % 2 == 0:
            val = nums[(n // 2) - 1]
        else:
            val = nums[n // 2]
        ans = 0
        for x in nums:
            ans += abs(x - val)

        return ans
