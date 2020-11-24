#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.14159265
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)
#define DBG(x) cerr << "L" << __LINE__ << ": " << #x << " = " << dbg(x) << endl;

// clang-format off
string to_string(bool b) { return b ? "1" : "0"; }
string to_string(char c) { return string(1, c); }
string to_string(string s) { return s; }
template <class T> string dbg(T x) { return to_string(x); }
template <class K, class V> string dbg(pair<K, V> p) { return "(" + dbg(p.first) + "," + dbg(p.second) + ")"; }
template <class It> string dbg(It it, It end) {
    string _dbg_s = "[ ";
    while (it != end) _dbg_s += dbg(*(it++)) + " ";
    return _dbg_s + "]";
}
template <class T> string dbg(vector<T> v) { return dbg(all(v)); }
template <class T> void read(vector<T> &v) { FOR(v.size()) cin >> v[i]; }
template <class T> void print(vector<T> v) { EACH(x, v) cout << to_string(x) << " "; }
// clang-format on
/******************************************************************************/

void solve() {
    // Solution
}

int main() {
    ios::sync_with_stdio(false);
    solve();
    cout << "\n";
    return 0;
}
