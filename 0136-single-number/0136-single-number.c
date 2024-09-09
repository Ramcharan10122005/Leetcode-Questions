int singleNumber(int* nums, int numsSize) {
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }
    int range = max - min + 1;
    
    int result[range]; 

    int final = 0;

    if(numsSize == 1)
        return nums[0];
    for (int i = 0; i < range; i++) {
        result[i] = 0;
    }

    for (int i = 0; i < numsSize; i++) {
        result[nums[i] - min]++;
    }

    for (int j = 0; j < range; j++) {
        if (result[j] == 1) {
            final = j + min;
            break; 
        }
    }
    
    return final;
}
