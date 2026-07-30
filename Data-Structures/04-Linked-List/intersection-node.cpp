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
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = 0;
        int l2=0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=nullptr)
        {
            l1++;
            tempA=tempA->next;
        }
        while(tempB!=nullptr)
        {
            l2++;
            tempB=tempB->next;
        }
        tempA = headA;
        tempB = headB;
        if(l1>l2)
        {
            for(int i = 0 ; i < l1 - l2; i++)
            {
                tempA=tempA->next;
            }
        }
        else if(l1<l2)
        {
            for(int i = 0; i < l2-l1 ; i++)
            {
                tempB = tempB->next;
            }
        }
        while(tempA!=nullptr && tempB!=nullptr)
        {
            if(tempA==tempB)
            return tempA;
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return nullptr;
    }
/*Another approach*/
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=tempB)
        {
            if(tempA==nullptr)
            {
                tempA=headB;
            }
            else
            {
                tempA=tempA->next;
            }
            if(tempB==nullptr)
            {
                tempB=headA;
            }
            else
            {
                tempB=tempB->next;
            }
        }
        return tempA;
    }
/*why this works?
resetting the pointer to the head of the other list after 
commpleting its original list ensures that both pointers traverse the same distance
thus ensuring that they meet at intersection node if it exists.
*/