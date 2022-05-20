#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define checkmate return 0;
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define pb                push_back
#define ppb               pop_back
#define ins               insert
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define umap              unordered_map
#define uset              unordered_set
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define repr(i,a,b)       for(int i=a;i>=b;i--)
#define repa(x, a)        for(auto &x : a)
#define vi                vector<int>
#define vvi               vector<vector<int>>
#define vbool             vector<bool>
#define vchar             vector<char>
#define vstring           vector<string>
#define vpii              vector<pair<int,int>>
#define all(x)            (x).begin(), (x).end()
#define lb                lower_bound
#define ub                upper_bound
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define set_bits          __builtin_popcountll

template<class T> using oset =tree<T, null_type, greater_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
// declaration : oset<data_type> s;

template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

#ifdef avik_local
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
const long long INF = 1e18;
const int MX = 100001;
const int32_t M = 1e9+7;
int mod_add(int a, int b, int m = M) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_sub(int a, int b, int m = M) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_mul(int a, int b, int m = M) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int inv(int i, int m = M) {if (i == 1) return 1; return (m - ((m / i) * inv(m % i)) % m) % m;}
int mpow(int a, int b, int m = M) { int x = 1; while (b > 0) { if (b & 1) { x = (x * a) % m;} a = (a * a) % m; b >>= 1;} return x;}

///Binary Exponentiation Iterative method

int BinaryExIter(int a,int b)
{
    int res =1;
    while(b)
    {
        if(b&1)
        {
            res*=a%M;///res=(res*a)%M;
        }
        a*=a%M;///a=(a*a)%M;
        b/=2%M;///b=(b/2)%M;
    }
    return res;
}
///fact
int fact(int n)
{
   int fact[n+1];
   int i;
   fact[0] = 1;
   fact[1] = 1;
   for (i = 2; i <= n; i++)
   {
       fact[i] = i*fact[i-1];
   }
   return fact[n];
}
///gcd

int gcd(int a, int b)
{
    return b == 0 ? a: gcd(b, a%b);
}
///prime number

bool isPrime(ll n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; 25 <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    int total_and=(1<<30)-1;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        total_and&=ar[i];
    }
    ///cout<<total_and<<endl;
    int c=0;
    int current_and =(1<<30)-1;
    for(int i=0;i<n;i++)
    {
        current_and&=ar[i];
        if(current_and== total_and)
        {
            c++;
            current_and=(1<<30)-1;
        }
    }
    cout<<n-c<<endl;
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
         ll n;
         cin>>n;
         string s;
         ll c=1;
          cin>>s;
          for(int i=0;i<n;i++)
          {
              if(s[i]=='l' || s[i]=='r' || s[i]=='c' || s[i]=='g')
              {
                  c*=2;
                  c%=M;
              }
          }
          cout<<c<<endl;
    }
    checkmate
}
