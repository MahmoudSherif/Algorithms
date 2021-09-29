

void rotate(int* nums, int numsSize, int k){
    
    if(k>numsSize)
    {
        k=k%numsSize;
    }
    if(k==0)
    {
        return;
    }
    if(numsSize==1)
    {
        return;
    }else if(numsSize==2)
    {
        if(k%2==1)
        {
           int temp=nums[0];
           nums[0]=nums[1];
           nums[1]=temp;
        return;
        }else 
        {
            return;
        }
    }
    int* arr=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<k;i++)
    {
        arr[i]=nums[numsSize-k+i];
    }
    for(int i=0;i<numsSize-k;i++)
    {
        arr[i+k]=nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        nums[i]=arr[i];
    }
    free(arr);
}