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
int nthnodefromend(ListNode *head, int n)
{
    ListNode *first = head;
    ListNode *second = head;
    for (int i = 0; i < n; i++)
    {
        if (first == nullptr)
            return -1; // n is greater than the length of the list
        first = first->next;
    }
    while (first != nullptr)
    {
        first = first->next;
        second = second->next;
    }
    return second->val;
}
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    int res = nthnodefromend(head, 4);
    cout << res << endl;
    return 0;
}