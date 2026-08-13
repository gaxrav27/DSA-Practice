#include <bits/stdc++.h>
using namespace std;
void swapnum(int &a, int &b)
{
    a = a^b;
    b = a^b; // b = (a^b)^b = a
    a = a^b; // a = (a^b)^a = b
}
int main()
{
int a = 5;
int b = 6;
swapnum(a,b);
cout<<a<<" "<<b<<endl;
return 0;
}