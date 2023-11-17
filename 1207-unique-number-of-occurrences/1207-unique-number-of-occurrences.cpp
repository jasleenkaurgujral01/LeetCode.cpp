#include <vector>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> occurrences;

        // Count occurrences of each element in the vector
        for (int num : arr) {
            occurrences[num]++;
        }

        // Use an unordered_set to check for uniqueness of occurrences
        std::unordered_set<int> uniqueOccurrencesSet;
        for (const auto& entry : occurrences) {
            if (!uniqueOccurrencesSet.insert(entry.second).second) {
                // If insertion fails, it means the occurrence is not unique
                return false;
            }
        }

        // If we reach here, all occurrences are unique
        return true;
    }
};
