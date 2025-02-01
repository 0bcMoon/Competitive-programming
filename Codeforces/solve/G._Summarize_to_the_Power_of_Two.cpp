#include <iostream>
#include <map>
#include <vector>
#define pn(x) std::cout << #x << ' ' << x
#define pnl(x) std::cout << #x << ' ' << x << '\n'
#define p(x) std::cout << x
#define pl(x) std::cout << x << '\n'
#define r(x) std::cin >> x;
using ll = long long;
template <typename T>
#define endl std::cout << '\n'
void bcase(const T &value, bool newline = true)
{
	std::cout << value;
	if (newline)
		std::cout << '\n';
}
#define dmax 30

void solve()
{
	int n;
	std::cin >> n;
	std::map<ll, ll> map;
	for (int i = 0; i < n; i++)
	{
		ll val;
		std::cin >> val;
		if (map.count(val))
			map[val]++;
		else
			map[val] = 1;
	}
	ll cnt = 0;
	for (auto &it : map)
	{
		bool ok = false;
		for (int i = 0; i <= 30; i++)
		{
			auto kv = map.find((1 << i) - it.first);
			if (kv != map.end())
			{
				if (kv->first == it.first && kv->second == 1)
					continue;
				ok = true;
				break;
			}
		}
		if (!ok)
		{
			cnt += it.second;
		}
	}
	std::cout << cnt << "\n";
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
