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
        ListNode* second = head;
        int count =0;

        while(second!= nullptr) {
            second = second -> next;
            count++;  
        }

        int mid = count/2 +1;
        count =1;

        while(count<mid) {
            head = head -> next;
            count++;
        }

        return head;
    }
};
