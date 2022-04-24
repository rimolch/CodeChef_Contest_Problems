#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,one=0,minus_one=0,f=0;//1 -1 -1 -1 -1 1
        cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
           cin>>ar[i];
           if(ar[i]==1)
           {
               one++;//one 2
           }
           else
           {
               minus_one++;//4
           }
        }
        if(one>minus_one)
        {
            f = one-minus_one;
        }
        else
        {
           f = minus_one-one ;//2
        }
        if(f<2)
        {
            cout<<"YES"<<endl;
        }
        else if(f==2)
        {
            if(one%2)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
