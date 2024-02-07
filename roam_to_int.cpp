#include <iostream>
#include <map>
#include <string>

// https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(std::string s) {
        std::map<char, int> roman;
        int output = 0;
        roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int it = 0;
        while (it < s.size()) {
            if(roman[s[it]] < roman[s[it + 1]]) {
                output += (roman[s[it + 1]] - roman[s[it]]);
                it++;
            } else {
                output += roman[s[it]];
            }
            it++;
        }
        return output;
    }
};

int main (int argc, char *argv[]) {
    Solution s;
    std::string input = "MCMXCIV";
    std::cout << s.romanToInt(input) << std::endl;
    return 0;
}
