#include <cmath>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
#define all(a) a.begin(), a.end()
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
bool willOverflow(long long a, long long w, long long b, long long square)
{
	if (a != 0 && w > std::numeric_limits<long long>::max() / a / w)
		return true;
	long long term1 = a * w * w;
	if (b != 0 && w > std::numeric_limits<long long>::max() / b)
		return true;
	long long term2 = b * w;

	if (term1 > 0 && term2 > std::numeric_limits<long long>::max() - term1)
		return true;
	long long sum = term1 + term2;
	if (sum > 0 && square > std::numeric_limits<long long>::max() - sum)
		return true;
	return false;
}
void solve()
{
	ll n, c;
	std::cin >> n >> c;
	std::vector<ll> vec(n);
	ll sum = 0;
	ll squre = 0;
	for (auto &it : vec)
	{
		std::cin >> it;
		sum += it;
		squre += it * it;
	}

	ll b = 4 * sum;
	ll a = 4 * n;
	ll l = 1, r = c;
	auto check = [&](ll w) -> ll {
		if (willOverflow(a, w, b, squre))
			return (c + 1);
		return (a * w * w + b * w + squre);
	};
	while (l <= r)
	{
		ll mid = (l + r) / 2;
		ll result = check(mid);
		if (result == c)
		{
			std::cout << mid << "\n";
			return;
		}
		else if (result > c)
			r = mid - 1;
		else
			l = mid + 1;
	}
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
