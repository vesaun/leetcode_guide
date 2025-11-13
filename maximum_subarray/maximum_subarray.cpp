#include <iostream>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int best = nums[0];
        int cur = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (cur < 0) cur = 0;
            cur += nums[i];
            if (cur > best) best = cur;
        }

        return best;
    }
};