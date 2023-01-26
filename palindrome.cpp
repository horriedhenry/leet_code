// https://leetcode.com/problems/palindrome-number/
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int copy = x;
        long long rev = 0;
        if(x < 0) {
            return false;
        } 
        else 
        {
            while(x > 0) 
            {
                int last_dig = x % 10;
                rev = rev * 10 + last_dig;
                x /= 10;
            }
            if(copy == rev) {
                return true;
            } else {
                return false;
            }
        }
    }
};

int main() {
    Solution s;
    cout<<s.isPalindrome(121);// 1 true 0 false
    return 0;
}
