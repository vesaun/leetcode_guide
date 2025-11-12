#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() <= 1) return {nums};

        vector<vector<int>> answer;

        for (int i = 0; i < nums.size(); i++) {
            vector<int> remaining = nums;
            remaining.erase(remaining.begin() + i); 

            for (auto& p : permute(remaining)) {
                vector<int> current;
                current.push_back(nums[i]);       
                current.insert(current.end(), p.begin(), p.end());
                answer.push_back(current);
            }
        }

        return answer;
    }
};
