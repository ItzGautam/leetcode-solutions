/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL) {
            return NULL;
        }
        
        Node* newHead = new Node(head -> val);
        Node* oldNode = head -> next;
        Node* newNode = newHead;

        unordered_map<Node*,Node*> m;

        m.insert({head,newHead});

        while(oldNode != NULL) {
            newNode -> next = new Node(oldNode -> val);
            newNode = newNode -> next;
            m.insert({oldNode, newNode});
            oldNode = oldNode -> next;
        }

        Node* finder = newHead;

        while(head != NULL) {

            finder -> random = m[head -> random];
            head = head -> next;
            finder = finder -> next;
        }

        return newHead;
    }
};
