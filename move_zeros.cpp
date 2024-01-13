#include <iostream>
#include <vector>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int size = nums.size();
        for (int i = 1; i < size; i++) {
            if (nums[i] != 0) {
                while (i > 0 && nums[i - 1] == 0) {
                    // used nums[i - 1] != 0 , did not work
                    // reason - when ever iterator encounters a non_zero element
                    // this while loop check if nums[i - 1] != 0 
                    // in this case nums[i - 1] != 0 is false, so this loop
                    // does not get executed. (use == 0)
                    int temp = nums[i];
                    nums[i] = nums[i - 1];
                    nums[i - 1] = temp;
                    i--;
                }
            }
        }
    }
};

int main (int argc, char *argv[]) {
    // std::vector<int> input = {0,1,0,3,12};
    std::vector<int> input = {0,0,1};
    Solution s;
    s.moveZeroes(input);
    for (auto it = input.begin(); it != input.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
