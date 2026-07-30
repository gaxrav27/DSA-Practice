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
ListNode* sortlist(ListNode *head)
{
    ListNode* onehead = new ListNode(-1);
    ListNode* twohead = new ListNode(-1);
    ListNode* zerohead = new ListNode(-1);
    ListNode* one = onehead;
    ListNode* two = twohead;
    ListNode* zero = zerohead;
    ListNode* temp = head;
    while(temp!=nullptr)
    {
        if(temp->val==0)
        {
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->val==1)
        {
            one->next = temp;
            one = one->next;
        }
        else
        {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }
    zero->next=onehead->next;
    one->next=twohead->next;
    two->next=nullptr;
    return zerohead->next;
}
int main()
{
    ListNode *head = new ListNode(2);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(1);
    head->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next = new ListNode(2);
    head = sortlist(head);
    display(head);
    return 0;
}