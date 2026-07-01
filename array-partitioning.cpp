// LeetCode 561. Array Partition
#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        // core resolution is to sort it first
        sort(nums.begin(), nums.end());
        int sum = 0;
        bool isEvenIndex = true;
        for(const auto& i : nums){
            if (isEvenIndex){
                sum += i;
            }
            isEvenIndex = !isEvenIndex; //should be always true
        }
        return sum;
    }
};