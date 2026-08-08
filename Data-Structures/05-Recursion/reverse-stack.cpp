#include <bits/stdc++.h>
using namespace std;
void display(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
void insert(stack<int> &st, int temp)
{
    if(st.empty())
    {
        st.push(temp);
        return;
    }
    int temp2 = st.top();
    st.pop();
    insert(st,temp);
    st.push(temp2);
}
void reverseStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);
    insert(st,temp);
}
int main()
{
stack<int> st;
st.push(5);
st.push(4);
st.push(3);
st.push(2);
st.push(1);
reverseStack(st);
display(st);
return 0;
}