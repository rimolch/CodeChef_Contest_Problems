#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<max(x,y)-min(x,y)<<endl;
        }
    }
     return 0;
}
