#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int res, i, size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == target) {
                return i;
            } else if (nums[i] > target) {
                res = i;
                return res;
            }
        }
        return size;
    }
};

int main (int argc, char *argv[]) {
    Solution s;
    std::vector<int> nums = {1,2,3,5};
    std::cout << s.searchInsert(nums, 6) << std::endl;
    return 0;
}
