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
/*ListNode *middleNode(ListNode *head)
{
    ListNode *temp = head;
    ListNode *middle = head;
    int count = 1;
    int tc = 1;
    while (temp->next != nullptr)
    {
        count++;
        temp = temp->next;
        while (tc < ((count / 2) + 1))
        {
            middle = middle->next;
            tc++;
        }
    }
    return middle;
}*/
ListNode *middleNode(ListNode *head) //optimal one pass approach
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    ListNode *middle = middleNode(head);
    cout << "Middle node value: " << middle->data << endl;
    return 0;
}