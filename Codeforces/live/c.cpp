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
	std::string s;
	int n;
	std::cin >> s;
	n = s.size();
	int dsum = 0;
	for (size_t i = 0; i < s.size(); i++)
		dsum += s[i] - 48;
	if (dsum % 9 == 0)
	{
		std::cout << "YES\n";
		return;
	}
	int two = 0;
	int three = 0;
	std::vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '2')
		{
			two++;
			vec.push_back(2);
		}
		else if (s[i] == '3')
		{
			vec.push_back(6);
			three++;
		}
		if (two > 10 && three > 10) // just simple thing hh
			break;
	}
	int size = vec.size();
	for (int i = 0; i < (1 << size); i++)
	{
		int sum = 0;
		for (int j = 0; j < size; j++)
		{
			if ((i >> j) & 1)
				sum += vec[j];
		}
		if ((sum + dsum) % 9 == 0)
		{
			std::cout << "YES\n";
			return;
		}
	}
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
