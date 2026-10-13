class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
       maxi=max(candies)
       n=len(candies)
       ans=[False]*n 
       for i in range(n):
        if candies[i]+extraCandies>=maxi:
            ans[i]=True
       return ans