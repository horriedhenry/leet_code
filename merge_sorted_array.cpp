#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        // first try
        int size = nums1.size();
        int start = m;
        for (int i = 0; i < nums2.size(); i++) {
            nums1[start] = nums2[i];
            start++;
        }
        std::sort(nums1.begin(), nums1.end());
        // just used sort instead of thinking about some other way of placing
        // nums2 values in nums1 in a sorted order.
    }
};

int main (int argc, char *argv[]) {
    // std::vector<int> input = {0,1,0,3,12};
    Solution s;
    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,5,6};
    int m = 3 , n = 3; 
    s.merge(nums1, m, nums2, n);
    for (auto it = nums1.begin(); it != nums1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
