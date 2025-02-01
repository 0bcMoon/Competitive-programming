#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
int nsquare(int n)
{
	if (n <= 1)
		return (n);
	return (2 * n + 2 * (n - 2));
}
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
	int n;
	std::cin >> n;
	std::vector<int> vec(n);
	for (auto &it : vec)
		std::cin >> it;
	int cnt = 0;
	int score = 0;
	int day = 1;
	for (int i = 0; i < n; i++)
	{
		score += vec[i];
		if (score < nsquare(day))
			continue;
		while (score >= nsquare(day))
		{
			score -= nsquare(day);
			day += 2;
		}
		if (!score)
			cnt++;
	}
	std::cerr << "=---------------=\n";
	std::cout << cnt << "\n";
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

// 2 5 3 8 
// 1 3 4 10
// 21
//
// 2 5 4 10 
// 3 8 7 18

// 10 + 2 + 3 = 15;
// 21 + 1 + 8 + 3 + 3
