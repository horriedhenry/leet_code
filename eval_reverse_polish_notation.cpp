#include <iostream>
#include <stack>
#include <cmath>
#include <vector>
#include <string>

class Solution {
public:
    bool isValidInt(const std::string& s) {
        try {
            int nbr = std::stoi(s);
            return true;
        }
        catch (...) {
            return false;
        }
    }
    int evalRPN(std::vector<std::string>& tokens) {
        std::stack<int> st;
        for (auto it = tokens.begin(); it != tokens.end(); ++it) {
            if (isValidInt(*it)) {
                st.push(std::stoi(*it));
            } else {
                // i did not use an else block, and it caused seg fault
                // i check if(isValidInt()) and then just used the code inside this else block so that caused seg fault.
                int operand1 = st.top();
                st.pop();
                int operand2 = st.top();
                st.pop();
                switch ((*it)[0]) {
                    case '+' :
                        st.push(operand2 + operand1);
                        break;
                    case '-' :
                        st.push(operand2 - operand1);
                        break;
                    case '*':
                        st.push(operand2 * operand1);
                        break;
                    case '/':
                        st.push(operand2 / operand1);
                        break;
                    case '^':
                        st.push(pow(operand2,operand1));
                        break;
                }
            }
        }
        return st.top();
    }
};


int main (int argc, char *argv[]) {
    Solution s;
    std::vector<std::string> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    std::cout << s.evalRPN(tokens) << std::endl;
}
