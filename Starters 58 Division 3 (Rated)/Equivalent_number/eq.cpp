#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(a>b)swap(a,b);
		ll c=0;
		for(int i=1;i<20;i++){
			for(int j=1;j<=i;j++){
				if(pow(a,i)==pow(b,j)){
					c=1;
					break;
				}
			}
		}
		if(c)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
