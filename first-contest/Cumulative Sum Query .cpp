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
    
    int N, Q;

    cin >> N;

    vi lista(N);

    for(int i = 0; i < N; i++) {
        cin >> lista[i];
    }

    vector<int> prefix_sum(N);
 
    prefix_sum[0] = 0;
 
    for(int i = 0; i < N; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + lista[i];
    }

    cin >> Q;

    while(Q--)
    {
        int L, R;
 
        cin >> L >> R;
 
        int soma = prefix_sum[R] - prefix_sum[L - 1];
 
        cout << soma << endl;
    }

    return 0;
}