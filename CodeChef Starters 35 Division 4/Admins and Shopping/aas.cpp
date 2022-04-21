#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,mini=0;
        cin>>n>>x;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mini=*min_element(a.begin(),a.end());

        if(x%mini==0)
        {
            cout<<max(x/mini,n)<<endl;
        }
        else
        {
            cout<<max(x/mini+1,n)<<endl;
        }
    }
    return 0;
}
