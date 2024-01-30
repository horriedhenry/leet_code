#include <iostream>
#include <string>
#include <vector>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::string str;
        std::string str2;
        ListNode* temp = head;
        while (temp != NULL) {
            str.push_back(temp->val);
            temp = temp->next;
        }
        for(auto it = str.rbegin(); it != str.rend(); ++it) {
            str2.push_back(*it);
        }
        if (str == str2) {
            return true;
        } else {
            return false;
        }
    }
};

int main (int argc, char *argv[]) {
    return 0;
}
