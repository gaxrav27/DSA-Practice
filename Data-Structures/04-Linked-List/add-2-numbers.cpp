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
void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
ListNode *add2list(ListNode *head1, ListNode *head2)
{
    ListNode *head = new ListNode(0);
    ListNode *newhead = head;
    int carry = 0;
    while (head1 != nullptr || head2 != nullptr || carry>0)
    {
       int sum = carry;
       if(head1!=nullptr)
       {
        sum+=head1->data;
        head1=head1->next;
       }
       if(head2!=nullptr)
       {
        sum+=head2->data;
        head2=head2->next;
       }
       carry = sum/10;
       head->next = new ListNode(sum%10);
       head=head->next;
    }
    return newhead->next;
}
int main()
{
    ListNode *head1 = new ListNode(2);
    head1->next = new ListNode(6);
    head1->next->next = new ListNode(3);
    head1->next->next = new ListNode(9);
    ListNode *head2 = new ListNode(5);
    head2->next = new ListNode(5);
    head2->next->next = new ListNode(4);
    ListNode *head = add2list(head1, head2);
    display(head);
    return 0;
}