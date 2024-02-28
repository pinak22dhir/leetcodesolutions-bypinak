#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;

        while (!nums.empty()) {
      
            int minAlice = *min_element(nums.begin(), nums.end());
            nums.erase(remove(nums.begin(), nums.end(), minAlice), nums.end());
        

            int minBob = *min_element(nums.begin(), nums.end());
            nums.erase(remove(nums.begin(), nums.end(), minBob), nums.end());
            
            arr.push_back(minBob);
            arr.push_back(minAlice);
        }

        return arr;
    }
};
