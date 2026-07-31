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
ListNode* deleteduplicates(ListNode* head)
{
    ListNode* current = head;
    while(current!=nullptr && current->next!=nullptr)
    {
        if(current->val==current->next->val)
        {
            ListNode* todelete = current -> next;
            current->next = current->next->next;
            if(todelete->next!=nullptr)
            todelete->next->prev = current;
            delete todelete;
        }
        else
        {
            current = current -> next;
        }
    }
    return head;
}
int main()
{
    ListNode* head = new ListNode(1);
    ListNode* node2 = new ListNode(1);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(3); 
    ListNode* node5 = new ListNode(5);
    head->next = node2;   
    node2->prev = head;
    node2->next = node3;    
    node3->prev = node2;
    node3->next = node4;    
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;
    head = deleteduplicates(head);
    display(head);
}