#include<bits/stdc++.h>
#define ll long long
#define d double
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0,k,s=0;
        cin>>n;
        vector<ll>ar(n);
        map<ll,ll>mp;
        for(ll i=0; i<n;i++)
        {
            cin>>ar[i];
            s+=ar[i];
            mp[ar[i]]++;
        }
        d p=0.0,q=0.0,m=0.0;
        p = (s/(n*1.0));
        q= ((p*1.0)*((n-2)*1.0))*1.0;
        m = (s-q)*1.0;
        for(ll i=0; i<n; i++)
        {
            k = (m-ar[i]);
            if(k+ar[i]==m)
            {
                if(k==ar[i] && mp[k]>0)
                {
                    ans+=mp[k];
                    ans--;
                }
               else
                {
                    ans+=mp[k];
                }
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}
