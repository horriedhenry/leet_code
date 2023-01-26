#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'I') {
                sum += 1;
            }
            else if(s[i] == 'V') {
                sum += 5;
            }
            else if(s[i] == 'X') {
                sum += 10;
            }
            else if(s[i] == 'L') {
                sum += 50;
            }
            else if(s[i] == 'C') {
                sum += 100;
            }
            else if(s[i] == 'D') {
                sum += 500;
            }
            else if(s[i] == 'M') {
                sum += 1000;
            }
        }
        return sum;
    }
};

int main (int argc, char *argv[])
{
    Solution s;
    cout<<s.romanToInt("MCMXCIV")<<endl;
    return 0;
}
