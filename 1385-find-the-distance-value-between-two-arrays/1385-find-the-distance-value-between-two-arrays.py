class Solution:
    def findTheDistanceValue(self, arr1: list[int], arr2: list[int], d: int) -> int:
        n=len(arr2)
        arr2.sort()
        m=len(arr1)
        def bs(num):
            l,h=0,n-1
            while l<=h:
                mid=l+(h-l)//2
                if num==arr2[mid]:
                    return mid
                elif num<arr2[mid]:
                    h=mid-1
                else:
                    l=mid+1
            return l
        ans=0
        for x in arr1:
            idx=bs(x)
            if idx<n and abs(x-arr2[idx])<=d:
                continue
            if idx>0 and abs(x-arr2[idx-1])<=d:
                continue
            ans+=1
        return ans
