class Solution:
    def canPlaceFlowers(self, flowerbed: list[int], n: int) -> bool:
        l = len(flowerbed)
        for i in range(l):
            if flowerbed[i] == 0:
                left = i == 0 or flowerbed[i - 1] == 0
                right = i == len(flowerbed) - 1 or flowerbed[i + 1] == 0
                if left and right:
                    n -= 1
                    flowerbed[i]=1
        return n <= 0
