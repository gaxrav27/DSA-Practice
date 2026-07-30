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
ListNode* findmiddle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
ListNode* mergelist(ListNode *left, ListNode *right)
{
    ListNode *dummy = new ListNode(-1);
    ListNode *temp = dummy;
    while (left != nullptr && right != nullptr)
    {
        if (left->val < right->val)
        {
            temp->next = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }
    if (left != nullptr)
        temp->next = left;
    if (right != nullptr)
        temp->next = right;
    return dummy->next;
}
ListNode* sortlist(ListNode *head)
{
    if(head==nullptr || head->next==nullptr)
        return head;
    ListNode* middle = findmiddle(head);
    ListNode* left = head;
    ListNode* right = middle->next;
    middle->next = nullptr;
    left = sortlist(left);
    right = sortlist(right);
    return mergelist(left,right);
}
int main()
{
    ListNode *head = new ListNode(3);
    head->next = new ListNode(4);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next = new ListNode(6);
    head = sortlist(head);
    display(head);
    return 0;
}