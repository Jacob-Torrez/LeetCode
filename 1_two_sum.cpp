class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        vector<int> sol;

        for (int i = 0; i < nums.size(); i++){
            if (seen.count(nums[i])){
                sol.push_back(seen[nums[i]]); 
                sol.push_back(i); 
                break;
            } else {
                seen[target - nums[i]] = i;
            }
        }

        return sol;
    }
};