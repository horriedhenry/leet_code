#include <iostream>

// https://leetcode.com/problems/remove-linked-list-elements/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* itr = head;
        ListNode* prev = nullptr;
        while(itr != nullptr) {
            if (itr->val == val) {
                if (head == itr) {
                    head = head->next;
                    delete itr;
                    itr = head;
                } else {
                    prev->next = itr->next;
                    delete itr;
                    itr = prev->next;
                }
            } else {
                prev = itr;
                itr = itr->next;
            }
        }
        return head;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);


    ListNode* itr = head;
    while (itr != nullptr) {
        std::cout << itr->val << " ";
        itr = itr->next;
    }

    std::cout << std::endl;

    Solution solution;


    ListNode* result = solution.removeElements(head, 1);

    while (result != nullptr) {
        std::cout << result->val << " ";
        result = result->next;
    }

    return 0;
}
