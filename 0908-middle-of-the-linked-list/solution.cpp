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
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr) return nullptr;

        int count = 0;
        ListNode* temp = head;

        // Count total nodes
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Middle node index (for even n, return second middle)
        int mid = count / 2;

        // Move 'mid' steps from head
        for (int i = 0; i < mid; i++) {
            head = head->next;
        }
        return head;
    }
};

