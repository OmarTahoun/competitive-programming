#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
using namespace std;
#define INF 7e15
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define PI 3.1415926535897932384626433832795
#define endl "\n"
#define f first
#define se second
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
typedef tree<pair<int,int>,null_type,less<pair<int,int> >,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
long long MOD = 998244353;
pair<int,int> dx[4] = {{1,0},{-1,0},{0,1},{0,-1}};
char symbol[4] = {'U','D','L','R'};
char symbol2[4] = {'D','U','R','L'};
const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
struct chash {int operator()(int x) const { return x ^ RANDOM; }};
string toString(long long x){stringstream ss;ss << x;string str = ss.str();return str;}
long long fastpow(long long x,long long k){if(!k)return 1;if(k & 1)return ((x * fastpow(x,k-1) % MOD) % MOD) % MOD;
long long ans = fastpow(x,k/2);ans %= MOD;ans *= ans;ans %= MOD;return ans;}
long long sumF(long long x){int s = 0;while(x)s += x%10,x /= 10;return s;}
bool isS(char c){return (c >= 'a' && c <= 'z');}
bool isB(char c){return (c >= 'A' && c <= 'Z');}
bool isD(char c){return (c >= '0' && c <= '9');}
bool isSqrt(long long x){ long long f = sqrt((long double)x + 0.5); return f*f == x;}
bool isCubic(long long x) {long long f = cbrt((long double)x + 0.5); return f*f*f == x;}
long long lcm(long long a,long long b){return a * (b / __gcd(a,b));}
vector<long long> divVec(long long x){vector<long long> tmp;for(long long i = 1;1LL*i*i <= x;i++){if(x % i == 0){tmp.push_back(i);if(x / i != i)
tmp.push_back(x / i);}sort(tmp.begin(),tmp.end());}return tmp;}
int random_int(int l,int r){return uniform_int_distribution<int>(l,r)(rng);}
int primeFactorsCnt(long long n){int ret = 0;if(n % 2 == 0)ret++;while (n % 2 == 0)n = n/2;for (int i = 3; i*i <= n; i = i + 2){if(n % i == 0)ret++;while (n % i == 0)
n = n/i;}if (n > 2)ret++;return ret;}
long long mulmod(long long a,long long b){return (a%MOD  * b%MOD) % MOD;}
long long minusmod(long long a,long long b){return ((((a % MOD) - (b % MOD)) % MOD) + MOD) % MOD;}
long long plusmod(long long a,long long b){return ((a % MOD) + (b % MOD)) % MOD;}
long long divmod(long long a,long long b) {return mulmod(a,fastpow(b,MOD-2));}
vector<int> primeDivisors(int x){vector<int> ans;if(x % 2 == 0)ans.push_back(2);while(x %2 == 0)x /= 2;for(int i = 3;i*i <= x;i += 2)
{if(x % i == 0){ans.push_back(i);while(x % i == 0)x /= i;}}if(x > 1)ans.push_back(x);return ans;}
template<int D, typename T> struct Vec : public vector<Vec<D - 1, T>> { static_assert(D >= 1, "Vector dimension must be greater than zero!");
template<typename... Args>Vec(int n = 0, Args... args) : vector<Vec<D - 1, T>>(n, Vec<D - 1, T>(args...)) {}};
template<typename T>struct Vec<1, T> : public vector<T> {Vec(int n = 0, T val = T()) : vector<T>(n, val) {}};
int32_t main()
{
    IO;
    //freopen("robots.in","r",stdin);
    int _ = 1;
    cin >> _;
    int curTest = 1;
    while(_--)
    {
        int n,d;
        cin >> n >> d;
        vector<int> arr(n);
        for(int i = 0;i < n;i++)
            cin >> arr[i];
        int lo = 1;
        int hi = d;
        while(lo <= hi)
        {
            int mid = (lo + hi + 1) / 2;
            bool isGood = true;
            int curStart = mid;
            for(auto it : arr)
            {
                int firstTime = (curStart + it - 1) / it * it;
                if(firstTime <= d)
                {
                    curStart = firstTime;
                    continue;
                }
                isGood = false;
            }
            //cout << mid << " " << isGood << endl;
            if(isGood)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        cout << "Case #" << curTest++ << ": " << hi << endl;
    }
    return 0;
}
//dp[i] = max(dp[j],dp[j] + sum(j+1,i)))

/*
for(){for(){}}
*/