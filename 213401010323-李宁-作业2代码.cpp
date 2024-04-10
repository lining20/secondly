#include <iostream>
#include <vector>
#include <sstream>
#include<gtest/gtest.h>
using namespace std;

int maxSubarraySum(vector<int>& nums);
int main() {
    vector<int> nums;
    string input;

    getline(cin, input);

    stringstream ss(input);
    string numStr;

    while (getline(ss, numStr, ',')) {
        int num = stoi(numStr);
        nums.push_back(num);
    }

    int maxSum = maxSubarraySum(nums);

    cout << maxSum << endl;

    return 0;
}

int maxSubarraySum(vector<int>& nums) {
    int n = nums.size();
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
    }

    return maxSum;
}