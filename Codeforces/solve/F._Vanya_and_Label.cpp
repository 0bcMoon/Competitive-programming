#include <bitset>
#include <cmath>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
const ll mod = 1e9 + 7;
using namespace std;

#ifdef DEBUG
// A debug macro for single or multiple arguments
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "): ", debug_out(__VA_ARGS__)

#include <map>
#include <set>
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
inline int charToNumber(char c)
{
	// Digits '0' to '9' => 0 to 9
	if (c >= '0' && c <= '9')
		return c - '0';
	// Uppercase letters 'A' to 'Z' => 10 to 35
	else if (c >= 'A' && c <= 'Z')
		return c - 'A' + 10;
	// Lowercase letters 'a' to 'z' => 36 to 61
	else if (c >= 'a' && c <= 'z')
		return c - 'a' + 36;
	// '-' corresponds to 62
	else if (c == '-')
		return 62;
	// '_' corresponds to 63
	else if (c == '_')
		return 63;
	return 0;
}

void solve()
{
	std::string str;
	std::cin >> str;

	ll ans = 1;
	for (size_t i = 0; i < str.size(); i++)
	{
		int n = charToNumber(str[i]);
		std::bitset<6> a(n);
		int cnt = 6 - a.count();
		ll perm = pow(3, cnt);
		ans  = (ans * perm) % mod;
	}
	std::cout << ans << "\n";
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
