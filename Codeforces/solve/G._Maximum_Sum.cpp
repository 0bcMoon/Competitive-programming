
#include <algorithm>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
const int mod = 1e9 + 7;
using namespace std;
#include <map>
#include <set>
#ifdef DEBUG
// A debug macro for single or multiple arguments
// Overloads for printing containers
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
	os << "[";
	for (int i = 0; i < (int)v.size(); i++)
	{
		if (i > 0)
			os << ", ";
		os << v[i];
	}
	os << "]";
	return os;
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &s)
{
	os << "{";
	for (auto it = s.begin(); it != s.end(); ++it)
	{
		if (it != s.begin())
			os << ", ";
		os << *it;
	}
	os << "}";
	return os;
}

template <typename K, typename V>
ostream &operator<<(ostream &os, const pair<K, V> &p)
{
	os << "(" << p.first << ", " << p.second << ")";
	return os;
}

template <typename K, typename V>
ostream &operator<<(ostream &os, const map<K, V> &m)
{
	os << "{";
	for (auto it = m.begin(); it != m.end(); ++it)
	{
		if (it != m.begin())
			os << ", ";
		os << it->first << ": " << it->second;
	}
	os << "}";
	return os;
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "): ", debug_out(__VA_ARGS__)

template <typename T>
void debug_out(const T &value)
{
	cerr << value << "\n";
}

template <typename T, typename... Args>
void debug_out(const T &first, const Args &...rest)
{
	cerr << first << " ";
	debug_out(rest...);
}

#endif
#ifndef DEBUG
#define dbg(...)
#endif
ll nmod(ll a, ll b)
{
	return ((a % b) + b) % b;
}
void solve()
{
	int n, k;
	std::cin >> n >> k;
	std::vector<ll> vec(n);
	for (auto &it : vec)
		std::cin >> it;
	ll max_curr = vec[0];
	ll max = vec[0];
	ll sum = vec[0];
	for (int i = 1; i < n; i++)
	{
		sum = nmod(sum, mod) + nmod(vec[i], mod);
		sum = nmod(sum, mod);
		max_curr = std::max(vec[i], max_curr + vec[i]);
		max = std::max(max, max_curr);
	}

	if (max <  0)
	{
		std::cout << nmod(sum, mod) << "\n";
		return ;
	}
	dbg(max, sum);
	for (int i = 0; i < k; i++)
	{
		sum = nmod(sum, mod) + nmod(max, mod);
		sum = nmod(sum, mod);
		max  = nmod(max, mod) * 2;
	}
	std::cout << sum << "\n";
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
