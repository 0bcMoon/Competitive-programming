#include <cstdlib>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
using namespace std;

#ifdef DEBUG
#include <map>
#include <set>
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
#endif
#ifndef DEBUG
#define dbg(...)
#endif
void solve()
{
	std::cout << std::fixed << std::setprecision(12);
	std::string a, b;
	int p = 0, m = 0, e = 0;
	std::cin >> a >> b;
	for (auto &c : a)
	{
		if (c == '+')
			p++;
		else if (c == '-')
			m++;
	}
	dbg(p, m, e);
	for (auto &c : b)
	{
		if (c == '+')
			p--;
		else if (c == '-')
			m--;
		else if (c == '?')
			e++;
	}
	if (!p && !m && !(e % 2))
	{
		std::cout << 1.0 << "\n";
		return ;
	}
	dbg(p, m, e);
	int cnt = 0;
	if (p < 0 || m < 0)
	{
		std::cout << 0.0 << "\n";
		return ;
	}
	for (int i = 0; i < (1 << e); i++)
	{
		int p1 = 0, m1 = 0;
		for (int j = 0; j < e; j++)
		{
			if ((i >> j) & 1)
				p1++;
			else
				m1++;
		}
		if (p1 == p && m1 == m)
			cnt++;
	}
	dbg(cnt , (1 << e));
	std::cout << (double)cnt / (double)(1 << e) << "\n";
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
