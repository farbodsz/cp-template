#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

// clang-format off
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

string to_string(bool b) { return b ? "TRUE" : "FALSE"; }
string to_string(char c) { return string(1, c); }
string yesno(bool b) { return b ? "YES" : "NO"; }
template <class T> string dbg(T x) { return to_string(x); }
template <class K, class V> string dbg(pair<K, V> p) { return "(" + dbg(p.first) + "," + dbg(p.second) + ")"; }
template <class It> string dbg(It it, It end) {
    string _dbg_s = "[ ";
    while (it != end) _dbg_s += dbg(*(it++)) + " ";
    return _dbg_s + "]";
}
template <class T> string dbg(vector<T> v) { return dbg(all(v)); }
template <class K, class V> string dbg(map<K, V> m) { return dbg(all(m)); }
template <class K, class V> string dbg(unordered_map<K, V> m) { return dbg(all(m)); }
template <class T> void read(T &x) { cin >> x; }
template <class A> void read(vector<A> &x) { EACH(a, x) read(a); }
template <class A> void print(vector<A> a) { EACH(x, a) cout << to_string(x) << " "; }
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
