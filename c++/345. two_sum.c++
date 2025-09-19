class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // define a unordered map ( like O(1) )
        unordered_map<int, int> seen;

        // loop through the nums 
        for (int i =0; i< nums.size(); i++){
            int complement = target - nums[i];

            if(seen.find(complement ) != seen.end()){
                return {seen[complement], i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};
