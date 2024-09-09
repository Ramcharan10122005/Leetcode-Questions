int maxArea(int* height, int heightSize) {
    int left=0;
    int right=heightSize-1;
    int max=0;
    while(left<right){
        int width=right-left;
        int h;
        if(height[left]<height[right])
        h=height[left];
        else
        h=height[right];

        int water=width*h;
        if(water>max)
        max=water;
        if(height[left]<height[right])
        left++;
        else
        right--;
    }
    return max;
}