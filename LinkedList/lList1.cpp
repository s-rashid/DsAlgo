#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 void push (struct ListNode** head, int data)
 {
    struct ListNode* newNode = new ListNode();
    newNode->val = data;
    newNode->next = (*head);
    (*head) = newNode;    
 }

 void displayList(struct ListNode *node)
 {
    while(node != NULL)
    {
        cout<<node->val << "-->";
        node = node->next;
    }
 }

// ListNode* swap (ListNode* head)
// {
//     ListNode* curr = head;
//     ListNode* prev = NULL;
//     ListNode* nex = NULL;
//     if(head == NULL || head->next == NULL)
//         return head;
//     while(curr != NULL)
//     {
//         prev = curr;
//         nex = curr->next;
//         if (curr == head)
//         {
//             curr->next = nex->next;
//             head = nex;
//             nex->next = curr;
//         }
//         else{
//             curr->next = nex->next;
//             curr = curr->next;
//             curr->next = nex;
//         }
//     }
//     return head;
// }

 int main ()
 {
    struct ListNode* head = NULL;
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    //swap(head);
    displayList(head);
    return 0;
 }