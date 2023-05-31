#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 100000010
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define POS(n, x) (lower_bound(ALL(n), x) - (n).begin())
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define PB push_back
#define EB emplace_back
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
 
#define ordered_set tree<os_type, null_type,less<os_type>, rb_tree_tag,tree_order_statistics_node_update>
 
int main()
{
    optimize;
    
    int n;
    cin >> n;

    string init_comb, ans_comb;
    cin >> init_comb >> ans_comb;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int init_digit = init_comb[i] - '0';
        int ans_digit = ans_comb[i] - '0';

        int to_front = abs(ans_digit - init_digit);
        int to_back = 10 - to_front;

        ans += min(to_front, to_back);
    }

    cout << ans << endl;

    return 0;
}