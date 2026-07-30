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
//required a helper function because we need to keep track of carry
int addhelper(ListNode* head)
{
    if(head==nullptr)
    {
        return 1;
    }
    int carry = addhelper(head->next);
    int sum = head->val + carry;
    head->val = sum%10;
    return sum/10;
}  
ListNode* addOne(ListNode* head)
{
    int carry = addhelper(head);
    if(carry>0)
    {
        ListNode* newnode = new ListNode(carry);
        newnode->next = head;
        return newnode;
    }
    return head;
}
int main()
{
    ListNode *head = new ListNode(8);
    head->next = new ListNode(0);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(8);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(9);
    head = addOne(head);
    display(head);
    return 0;
}