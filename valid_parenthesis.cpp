#include <iostream>
#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        if (s[0] == ')' || s[0] == '}' || s[0] == ']') {
            return false;
        }
        if (s.length() == 1) {
            return false;
        }
        for (auto it = s.begin(); it != s.end(); ++it) {
            switch (*it) {
                case '(' :
                    st.push(*it);
                    break;
                case '{' :
                    st.push(*it);
                    break;
                case '[' :
                    st.push(*it);
                    break;
                case ')' :
                    if (!st.empty() && st.top() == '(') {
                        st.pop();
                    } else {
                        return false;
                    }
                    break;
                case '}' :
                    if (!st.empty() && st.top() == '{') {
                        st.pop();
                    } else {
                        return false;
                    }
                    break;
                case ']' :
                    if (!st.empty() && st.top() == '[') {
                        st.pop();
                    } else {
                        return false;
                    }
                    break;
            }
        }
        return st.empty(); // if empty then return true else false.
    }
};

int main (int argc, char *argv[]) {
    Solution s;
    std::string input = "([)";
    if (s.isValid(input)) {
        std::cout << "true" << "\n";
    }
    else {
        std::cout << "false" << "\n";
    }
    return 0;
}
