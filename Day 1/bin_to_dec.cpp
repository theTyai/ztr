#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int ans=0;
    int i=0;
    while(a!=0)
    {
        if(a%10) ans+=(1<<i);
        a/=10;
        i++;
    }
    cout<<ans<<endl;
    return 0;    
}