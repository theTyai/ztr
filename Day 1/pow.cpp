#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,o=1;
    cin>>a>>b;
    while(b>0) o*=a, b--;
    cout<<o<<endl;
    return 0;
}