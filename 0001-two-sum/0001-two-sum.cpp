#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numIndices;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if the complement is already in the map
            auto it = numIndices.find(complement);
            if (it != numIndices.end()) {
                // Return the indices of the two numbers
                return {it->second, i};
            }

            // Add the current number and its index to the map
            numIndices[nums[i]] = i;
        }

        // If no solution is found
        return {};
    }
};
