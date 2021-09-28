// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

#include <stdio.h>
#include<stdbool.h>
bool isBadVersion(int);

int firstBadVersion(int n) {
    int low = 1;
    int high = n;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(isBadVersion(mid)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}