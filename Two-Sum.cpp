class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        // Variables
        unordered_map<int, int> numsMap;                    // Hash map
        // Loop for Detection & Fill Hash Map
        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];                    // Determine the difference between current num and target
            // Success Detection
            if (numsMap.find(diff) != numsMap.end())        // Checks if the difference exists as a val
            {
                return {numsMap[diff], i};                  // Success returns indices in order
            }
            numsMap[nums[i]] = i;                           // Fills Hash Map
        }
        return {};                                          // Failure
    }
};