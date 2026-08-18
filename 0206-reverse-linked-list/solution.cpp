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

 void push(int x, ListNode* &head) {
    ListNode* newNode = new ListNode;
    newNode -> val = x;
    newNode -> next =  head;
    head = newNode;
 }

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newHead = nullptr;
        while(head!=NULL) {
            int x = head -> val;
            head = head -> next;
            push(x,newHead);
        }
        return newHead;
    }
    
};
