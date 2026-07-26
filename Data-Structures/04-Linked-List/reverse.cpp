#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
        next = nullptr;
    }
};
/* Iterative solution
ListNode *reversenodes(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *curr = head;
    while (curr != nullptr)
    {
        ListNode *nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
    }
    return prev; // New head of the reversed list
}*/
/*Recursive solution*/
ListNode *reversenodes(ListNode *head)
{
    if(head==nullptr || head->next==nullptr)
    return head;
    ListNode* newhead = reversenodes(head->next);
    ListNode* front = head->next;
    front -> next = head;
    head->next=nullptr;
    return newhead;
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    ListNode *middle = reversenodes(head);
    return 0;
}