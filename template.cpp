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
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define ll long long
#define MOD 1000000007

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)

template <class T> void read(T &x) { cin >> x; }
template <class A> void read(vector<A> &x) { EACH(a, x) read(a); }
string to_string(bool b) { return b ? "TRUE" : "FALSE"; }
string yesno(bool b) { return b ? "YES" : "NO"; }
string to_string(char c) { return string(1, c); }
void print() { cout << "\n"; }
template <class A> void print(vector<A> a) {
    EACH(x, a) cout << to_string(x) << " ";
    print();
}
template <class A> void print(vector<vector<A>> a) { EACH(x, a) print(x); }

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
