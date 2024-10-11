#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#define pn(x) std::cout << #x << ' ' << x
#define pnl(x) std::cout << #x << ' ' << x << '\n'
#define p(x) std::cout << x
#define pl(x) std::cout << x << '\n'
#define r(x) std::cin >> x;
using ll = long long;
template <typename T>
void bcase(const T &value, bool newline = true)
{
	std::cout << value;
	if (newline)
		std::cout << '\n';
}
template <typename T>
std::optional<T> largest_less_than(const std::set<T> &s, const T &value)
{
	auto it = s.lower_bound(value);
	if (it == s.begin())
	{
		return std::nullopt; // No element less than value
	}
	return *std::prev(it); // Return the previous element
}
void solve()
{
	int n;
	std::cin >> n;
	std::set<int> set;
	std::vector<int> b(n, 0);
	int ok = 1;
	for (int i = 1; i <= n; i++)
		set.insert(i);

	auto lower = [&](int val) -> std::optional<int> {
		auto it = set.lower_bound(val);
		if (it == set.begin())
			return std::nullopt;
		return *std::prev(it);
	};
	for (int i = 1; i < n; i += 2)
	{
		std::cin >> b[i];
		set.erase(b[i]);
	}
	ok = int(set.size()) == (n / 2);
	for (int i = n - 1; i > 0; i -= 2)
	{
		auto result = lower(b[i]);
		if (result)
		{
			b[i - 1] = *result;
			set.erase(*result);
		}
		else
		{
			ok = false;
			break;
		}
	}
	if (ok)
	{
		for (int i = 0; i < n; i++)
			std::cout << b[i] << ' ';
		std::cout << '\n';
	}
	else
		std::cout << -1 << '\n';
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
