double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double result=0;
    int nums3Size=nums1Size+nums2Size;
    int temp;
    int nums3[nums3Size];
    int i=0;
    int j=0;
    int k=0;
    while(i<nums1Size&&j<nums2Size){
        if(nums1[i]<nums2[j]){
        nums3[k]=nums1[i];
        k++;
        i++;
        }
        else{
        nums3[k]=nums2[j];
        k++;
        j++;
        }
    }
    while(i<nums1Size){
        nums3[k]=nums1[i];
        k++;
        i++;
    }
    while(j<nums2Size){
        nums3[k]=nums2[j];
        k++;
        j++;
    }
    if(nums3Size%2!=0){
        temp=(nums3Size)/2;
        result=nums3[temp];
    }
    else{
        int temp1=(nums3Size-1)/2;
        int temp2=(nums3Size)/2;
        result=(nums3[temp1]+nums3[temp2])/2.0;
    }
    return result;
}