#include <iostream>

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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *first = head;
        ListNode *second = first->next;
        ListNode *next;
        while(second != NULL) {
            next = second->next;
            second->next = first;
            first = second;
            second = next;
        }
        head->next = NULL;
        return first;
    }
};

int main (int argc, char *argv[]) {
    return 0;
}
