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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL) {
            return NULL;
        }

        ListNode* temp = nullptr;
        int n = k;

        bool ok = true;

        ListNode* ans = nullptr;
        ListNode* join = nullptr; 
        ListNode* curr = nullptr;

        while(head != NULL) {

            if(n!=0) {
                if(ok) {
                    curr = head;
                    ok = false;
                }
                ListNode* newNode = new ListNode(head -> val);
                newNode -> next = join;
                join = newNode;
                n--;
            }

            if(n==0) {

                if(temp != NULL) {
                    temp -> next = join;
                } else {
                    ans = join;
                    temp = join;
                }

                while(temp -> next!= NULL) {
                        temp = temp -> next;
                    }
                join = nullptr;
                n = k;
                ok = true;

            }

            if(head -> next == NULL && ok == false) {
                while(curr != NULL) {
                    temp -> next = curr;
                    temp = curr;
                    curr = curr -> next;
                }
            }

            head = head -> next;

        }

        return ans;

    }
};
