//Binary Search
int searchInsert(int* nums, int numsSize, int target){
	if(numsSize==0 || target < nums[0])
	{
		return 0;
	}else if(target>nums[numsSize-1])
    {
        return numsSize;
    }
    int left=0;
    int right=numsSize-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(target==nums[mid])
        {
            return mid;
        }else if(nums[mid]<target)
        {
            left=mid+1;
        }else if(nums[mid]>target)
        {
            right=mid-1;
        }
    }
   
    return left;
}