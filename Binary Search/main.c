#include <stdio.h>
#include<stdlib.h>

int search(int* nums, int numsSize, int target);

int main()
{
    char ans='y';
    int size=0;
    int target=0;
    do{
        printf("Enter the size of the array\n");
        scanf("%d",&size);
        printf("Enter the array members\n");
        int* arr=(int*)malloc(sizeof(int)*size);
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Enter the member you want to search for\n");
        scanf("%d",&target);
        int result=search(arr,size,target);
        result!=-1 ? printf("Member exists at index: %d\n",result):printf("Member does not exist\n"); 
        free(arr);
        printf("do you want to search again? Y/N \n");
        scanf(" %c",&ans);
    }while(ans=='Y'|| ans=='y');
    
    return 0;
}

int search(int* nums, int numsSize, int target){

    int right=numsSize-1;
    int left=0;
    if(target==nums[right])
    {
        return right;
    }else if(target==nums[left])
    {
        return left;
    }else 
    {
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(target==nums[mid])
            {
                return mid;
            }else if(target<nums[mid])
            {
                right=mid-1;
            }else if (target>nums[mid])
            {
                left=mid+1;
            }
        }
        
    }
    return -1;
}