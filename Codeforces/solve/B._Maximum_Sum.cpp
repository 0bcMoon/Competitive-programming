#include <deque>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
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
	int n, k;
	std::cin >> n >> k;
	std::deque<int> vec(n);
	ll sum = 0;
	for (auto &it : vec)
		std::cin >> it, sum += it;
	std::sort(vec.begin(), vec.end());
	int l = 0;
	int r = n - 1;
	while (k--)
	{
		if ((r - l + 1) <= 2)
			sum -= vec[r--];
		else
		{
			ll a = vec[l] + vec[l+1];
			if (a < vec[r])
			{
				l += 2;
				sum -= a;
			}
			else
			{
				sum -= vec[r--];
			}
		}
	}
	std::cout << sum << "\n";
}
// 15 22 12 10 13 11
// 10 11 12 13 15 22
//
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
