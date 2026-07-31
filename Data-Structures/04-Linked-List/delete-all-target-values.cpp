#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode* prev;
    ListNode(int val)
    {
        this->val = val;
        next = nullptr;
        prev = nullptr;
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
ListNode* deletetargets(ListNode *head, int target)
{
    ListNode* curr = head;
    while(curr!=nullptr)
    {
        ListNode* nextnode = curr->next;
        if(curr->val == target)
        {
            if(curr->prev!=nullptr)
            curr->prev->next = curr->next;
            else
            head = curr->next;
            if(curr->next!=nullptr)
            curr->next->prev = curr->prev;
            delete curr;
        }
        curr = nextnode;
    }
    return head;
}
int main()
{
    ListNode* head = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(2); 
    ListNode* node5 = new ListNode(5);
    head->next = node2;   
    node2->prev = head;
    node2->next = node3;    
    node3->prev = node2;
    node3->next = node4;    
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;
    head = deletetargets(head,2);
    display(head);
}