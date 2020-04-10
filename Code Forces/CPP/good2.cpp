#include <bits/stdc++.h>
#define F first
#define S second
 
using namespace std;
typedef long long int64;
 
const int64 M = 1350851717672992089;
 
vector<int64> v, sa, sb;
void pre() {
    int64 cur = 1;
    while (cur != M) {
        v.emplace_back(cur);
        cur *= 3;
    }
    for (int a = 0; a < (1 << 22); ++ a) {
        int64 sum = 0;
        for (int b = a, x = 0; b ; b >>= 1, ++ x) {
            if (b & 1) {
                sum += v[x];
            }
        }
        sa.emplace_back(sum);
    }
    for (int a = 0; a < (1 << 16); ++ a) {
        int64 sum = 0;
        for (int b = a, x = 22; b ; b >>= 1, ++ x) {
            if (b & 1) {
                sum += v[x];
            }
        }
        sb.emplace_back(sum);
    }
    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());
    while (sb.back() > M) sb.pop_back();
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    pre();
    int q;
    cin >> q;
    while (q --) {
        int64 n;
        cin >> n;
        int64 ans = M;
        for (auto& x : sb) {
            if (x > ans) break;
            auto it = lower_bound(sa.begin(), sa.end(), n - x);
            if (it == sa.end()) continue;
            ans = min(ans, x + *it);
        }
        cout << ans << "\n";
    }
    
}