#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
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
void solve()
{
	std::string str;
	int n;
	std::cin >> n >> str;
	std::vector<int> map(26, 0);
	std::vector<int> vec(n);
	std::vector<int> rvec(n);
	vec[0] = 1;
	map[int(str[0]) - 'a'] = 1;
	for (int i = 1; i < n; i++)
	{
		int idx = str[i] - 'a';
		if (!map[idx])
			vec[i] = 1;
		map[idx] = 1;
		vec[i] += vec[i - 1];
	}
	memset(map.data(), 0, 26 * 4);
	rvec[n - 1] = 1;
	map[int(str[n - 1]) - 'a'] = 1;
	for (int i = n - 2; i >= 0; i--)
	{
		int idx = str[i] - 'a';
		if (!map[idx])
			rvec[i] = 1;
		map[idx] = 1;
		rvec[i] += rvec[i + 1];
	}
	vec.insert(vec.begin(), 0);
	rvec.push_back(0);
	int max = -1;
	for (int i = 0; i <= n; i++)
		max = std::max(max, rvec[i] + vec[i]);
	std::cout << max << "\n";
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
