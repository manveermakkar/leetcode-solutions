#include <vector>
#include <unordered_set>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        // 1. Create a hash set for efficient O(1) average time lookups.
        std::unordered_set<int> to_delete(nums.begin(), nums.end());

        // 2. Use a dummy (sentinel) node to simplify edge cases 
        //    like deleting the original head node.
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // 3. 'prev' points to the last node that was *not* deleted.
        //    'current' is used to traverse the list.
        ListNode* prev = dummy;
        ListNode* current = head;

        while (current != nullptr) {
            if (to_delete.count(current->val)) {
                // This node needs to be deleted.
                // We make 'prev' skip over 'current' to the next node.
                prev->next = current->next;
                
                // Note: 'prev' does NOT advance here, because the
                // *next* node (current->next) might also need to be deleted.
            } else {
                // This node is good. It stays.
                // We advance 'prev' to this "good" node.
                prev = current;
            }
            // Always advance 'current' to check the next node.
            current = current->next;
        }

        // 4. The new head is dummy->next.
        // (In a real C++ program, you would delete 'dummy', 
        // but not required for LeetCode)
        ListNode* new_head = dummy->next;
        delete dummy; // Good practice, though LeetCode doesn't require it.
        
        return new_head;
    }
};
