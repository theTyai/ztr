#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin>>d;
    int a=0;
    while(d>1)
    {
        d/=2;
        a++;
    }
    cout<<a<<endl;
    return 0;
}