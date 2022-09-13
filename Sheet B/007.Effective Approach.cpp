// https://codeforces.com/contest/227/problem/B

#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;

#define pb push_back
#define mp make_pair
#define sz(s) (s).length()
#define all(x) (x).begin(), (x).end()
#define digits(x) trunc(log10(x)) + 1
#define maxelement(x) max_element(v.begin(), v.end()) - v.begin()
#define minelement(x) min_element(v.begin(), v.end()) - v.begin()

int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<ll, ll> map;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        map[x] = i;
    }
    
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    // for(auto value:map)
    // cout << value.first << " " << value.second << endl;

    ll left_count = 0, right_count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int temp = map[v[i]]; 
        left_count+=temp;
        right_count+=n-temp+1;
    }
    cout << left_count << " " << right_count;

    return 0;
}
