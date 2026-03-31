#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin>>d;
    string ans="";
    while(d!=0)
    {
        ans+=(d%2+'0');
        d/=2;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}