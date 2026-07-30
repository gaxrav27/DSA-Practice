#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = nullptr;
    }
};
void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
ListNode *oddevenlist(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *evenhead = even;
    while(even != nullptr && even->next != nullptr)
    {
        odd->next = even -> next;
        odd=odd->next;
        even->next = odd->next;
        even=even->next;
    }
    odd->next = evenhead;
    return head;
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    oddevenlist(head);
    display(head);
    return 0;
}