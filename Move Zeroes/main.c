

void moveZeroes(int* nums, int numsSize){
    if(numsSize==0 || numsSize==1)
    {
        return ;
    }else if (numsSize==2)
    {
        if(nums[0]==0 && nums[1]!=0)
        {
            int temp=nums[0];
            nums[0]=nums[1];
            nums[1]=temp;
            
        } 
        return;
    }
    int* arr=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++)
    {
        arr[i]=0;
    }
    int k=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            arr[k++]=nums[i];
        }
        
    }
    for(int i=0;i<numsSize;i++)
    {
        nums[i]=arr[i];
    }
    free(arr);
}