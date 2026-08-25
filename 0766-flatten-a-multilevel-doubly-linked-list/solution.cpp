/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:

    Node* join(Node* head) {

        Node* temp = head;

        while (temp != NULL) {

            if (temp->child == NULL) {
                temp = temp->next;
                continue;
            }

            Node* next = temp->next;
            Node* child = temp->child;

            Node* tail = join(child);

            temp->next = child;
            child->prev = temp;

            temp->child = NULL;

            if (next != NULL) {
                tail->next = next;
                next->prev = tail;
            }

            temp = tail;
        }

        if (head == NULL)
            return NULL;

        while (head->next != NULL)
            head = head->next;

        return head;
    }

    Node* flatten(Node* head) {

        if (head == NULL)
            return NULL;

        join(head);

        return head;
    }
};
