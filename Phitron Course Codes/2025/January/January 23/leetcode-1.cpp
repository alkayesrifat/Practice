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
class Solution {
public:

    int countNodes(ListNode* head) {
        int count = 0;
        ListNode* current = head;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }

    ListNode* middleNode(ListNode* head) {

        int totalNodes = countNodes(head);
        int mid = totalNodes / 2;
        ListNode* current = head;
        for (int i = 0; i < mid; i++) {
            current = current->next;
        }
        return current;
        
    }
};