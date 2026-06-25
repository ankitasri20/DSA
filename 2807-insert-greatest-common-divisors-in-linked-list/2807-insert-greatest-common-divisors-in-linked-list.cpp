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
    ListNode* insertGreatestCommonDivisors(ListNode* head) 
    { 
        ListNode *prev = head;
        ListNode *forward = head -> next;
        while(forward)
        {
            ListNode *tmp2 = new ListNode(__gcd(prev-> val, forward -> val));
            prev -> next = tmp2;
            tmp2 -> next = forward;
            prev = forward;
            forward = forward -> next;
        }
        return head;
    }
};