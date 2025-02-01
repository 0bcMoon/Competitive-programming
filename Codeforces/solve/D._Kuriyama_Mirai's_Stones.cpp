#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
using namespace std;

#ifdef DEBUG

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

// A debug macro for single or multiple arguments
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
ll pre_sum(std::vector<ll> &v, int l, int r)
{
	ll lsum = v[l - 1];
	ll rsum = v[r];
	return (rsum - lsum);
}
void solve()
{
	int n;
	std::cin >> n;
	std::vector<ll> vec(n + 1);
	std::vector<ll> sortd(n + 1);

	for (int i = 1; i <= n; i++)
	{
		std::cin >> vec[i];
		sortd[i] = vec[i];
	}
	std::sort(sortd.begin(), sortd.end());
	for (int i = 1; i <= n; i++)
	{
		vec[i] += vec[i - 1];
		sortd[i] += sortd[i - 1];
	}
	int m;
	std::cin >> m;
	for (int i = 0; i < m; i++)
	{
		int t, l, r;
		std::cin >> t >> l >> r;
		if (t == 1)
			std::cout << pre_sum(vec, l, r) << "\n";
		else
			std::cout << pre_sum(sortd, l, r) << "\n";
	}
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	// int t;
	// std::cin >> t;
	// while(t--)
	{
		solve();
	}
	return 0;
}
