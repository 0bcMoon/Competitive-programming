#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
#define all(a) a.begin(), a.end()
using namespace std;
#include <set>
#include <map>
#ifdef DEBUG
// A debug macro for single or multiple arguments
// Overloads for printing containers
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (int i = 0; i < (int)v.size(); i++) {
        if (i > 0) os << ", ";
        os << v[i];
    }
    os << "]";
    return os;
}

template<typename T>
ostream& operator<<(ostream& os, const set<T>& s) {
    os << "{";
    for (auto it = s.begin(); it != s.end(); ++it) {
        if (it != s.begin()) os << ", ";
        os << *it;
    }
    os << "}";
    return os;
}

template<typename K, typename V>
ostream& operator<<(ostream& os, const pair<K, V>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template<typename K, typename V>
ostream& operator<<(ostream& os, const map<K, V>& m) {
    os << "{";
    for (auto it = m.begin(); it != m.end(); ++it) {
        if (it != m.begin()) os << ", ";
        os << it->first << ": " << it->second;
    }
    os << "}";
    return os;
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "): ", debug_out(__VA_ARGS__)

template<typename T>
void debug_out(const T& value) {
    cerr << value << "\n";
}

template<typename T, typename... Args>
void debug_out(const T& first, const Args&... rest) {
    cerr << first << " ";
    debug_out(rest...);
}

#endif
#ifndef DEBUG
#define dbg(...) 
#endif
void solve()
{
	int n;
	std::cin >> n;
	std::string s;
	std::string r;
	std::cin >> s >> r;
	int cnt = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] != s[i + 1])
		{
			cnt++;
			int k = i;
			while (k && s[k - 1] != r[k])
			{
				k--;
				cnt++;
			}
			s[i + 1] = r[k];
		}
	}

	dbg(cnt);
	if (cnt >= n - 1)
		std::cout << "YES\n";
	else
		std::cout << "NO\n";
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
// 5
// 10010010
// 0010010
011111111111111
1100000000000
