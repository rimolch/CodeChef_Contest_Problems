#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define checkmate return 0;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       vector<ll>a(n);
       vector<ll>sor;
       vector<ll>p;
       vector<ll>q;
       vector<ll>r;
       for(ll i=0;i<n;i++) {
         cin>>a[i];//1 3 5 2 4
                   //0 1 2 3 4
         sor.push_back(a[i]);
       }
      sort(sor.begin(),sor.end());
        for(int i=0,j=0;i<n;i++){
            if(a[i]==sor[j]){
                p.push_back(a[i]);
                j++;
            }
            else{
                q.push_back(a[i]);
            }
        }
       for(int i=0;i<p.size();i++) {
        r.push_back(p[i]);
       }
       for(int i=0;i<q.size();i++) {
        r.push_back(q[i]);
       }
             bool ok=1;
       for(int i=0;i<r.size()-1;i++){
        if(r[i]>r[i+1]){
            ok=0;
            break;
         }
       }
       if(ok)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    checkmate
}
