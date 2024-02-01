#include <climits>
#include <iostream>
#include <map>
#include <vector>

// TODO

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int maj_ele;
        int sum = INT_MIN;
        std::map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(nums[i]) == map.end()) {
                map[nums[i]] = 0;
            }
            map[nums[i]]++;
        }
        for (auto it = map.begin(); it != map.end(); ++it) {
            if (it->second > sum) {
                sum = it->second;
                maj_ele = it->first;
            }
        }
        return maj_ele;
    }
};

int main (int argc, char *argv[]) {
    Solution s;
    std::vector<int> nums = {2,2,1,1,1,2,2};
    std::cout << s.majorityElement(nums) << std::endl;
    return 0;
}
