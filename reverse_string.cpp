#include <iostream>
#include <vector>

// https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        int start = 0, end = s.size() - 1;
        while (start <= end) {
            char temp = s[end];
            s[end] = s[start];
            s[start] = temp;
            start++;
            end--;
        }
    }
};

int main (int argc, char *argv[]) {
    std::vector<char> in = {'h', 'e', 'l', 'l', 'o'};
    Solution s;
    s.reverseString(in);
    for (auto it = in.begin(); it != in.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
