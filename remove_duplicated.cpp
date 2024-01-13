#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int size = nums.size(), it = 1, prv_ptr = 1;
        // for (it = 1; it < size; it++) {
        //     if (nums[it] != nums[it - 1]) {
        //         nums[prv_ptr] = nums[it];
        //         prv_ptr++;
        //     }
        // }
        while (it < size) {
            if (nums[it] != nums[it - 1]) {
                nums[prv_ptr] = nums[it];
                prv_ptr++;
            }
            it++;
        }
        return prv_ptr;
    }
};

int main (int argc, char *argv[]) {
    Solution s;
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    std::cout << s.removeDuplicates(nums) << std::endl;
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
