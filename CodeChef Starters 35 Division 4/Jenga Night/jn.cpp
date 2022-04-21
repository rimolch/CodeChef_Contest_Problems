#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x,maxi=0,mini=0,ans=0;
        cin>>n>>x;
        if(n>x)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(x%n==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
     return 0;
}
