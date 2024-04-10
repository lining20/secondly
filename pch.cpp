//
// pch.cpp
//

/*#include "pch.h"

int maxSubarraySum(int nums[],int n) {
    int maxSum = nums[0];
    int currSum = nums[0];
    for (int i = 1; i < n; i++) {
        if (currSum < 0) {
            currSum = nums[i];
        }
        else {
            currSum += nums[i];
        }

        if (maxSum < currSum) {
            maxSum = currSum;
        }
        //maxSum = max(maxSum, currSum);
    }

    return maxSum;
}*/

//
// pch.cpp
//

#include "pch.h"
int maxSubarraySum(int arr[], int n) {
    int max1 = 0;
    int max2 = 0;

    for (int i = 0; i < n; i++) {
        max1 = max1 + arr[i];
        if (max1 < 0) {
            max1 = 0;
        }
        else if (max2 < max1) {
            max2 = max1;
        }
    }
    return max2;
}