/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    
    int* arr=(int*)malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;
    int left=0;
    int right=numsSize-1;
    int max;
    for(int i=numsSize-1;i>=0;i--)
    {
        if(abs(nums[left])>abs(nums[right]))
        {
            max=nums[left];
            left++;
        }else 
        {
            max=nums[right];
            right--;
        }
        arr[i]=max*max;
    }
    return arr;
}
