

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int NumSearch(int* arr,int start,int end,int target,int* num,int* index)
{
    
    int left=start;
    int right=end-1;       
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==target)
        {
            return mid;
        }else if(arr[mid]>target)
        {
            right=mid-1;
            *num=right;
        }else if(arr[mid]<target)
        {
            left=mid+1;
            *num=left;
        }
    }

return 0;
}
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    static int indexArr[2]={0,0};
    int index=0;
    int numFound=0;
    *returnSize=2;
    //constraints
    if(numbersSize<2 || numbersSize>30000)
    {
        return indexArr;
    }
    for(int i=0;i<numbersSize-1;i++)
    {
        int targetIndex=i+1;
        targetIndex=NumSearch(numbers,i+1,numbersSize,target-numbers[i],&numFound,&index);
        if(targetIndex!=0)
        {
            indexArr[0]=i+1;
            indexArr[1]=targetIndex+1;
            return indexArr;
        }else if(numFound+numbers[i]>target)
        {
                /* the end is reduced every time by the index last time Search target have not been found and the summition is bigger than twoSum function target */
            numbersSize-=index;
        }
    }

return indexArr;
}
