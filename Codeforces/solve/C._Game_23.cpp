#include <iostream>
#include <map>
#include <set>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
// 51840 / 120 => 432
void solve()
{
	ll n, m;
	std::cin >> n >> m;
	if (m % n != 0)
	{
		std::cout << "-1\n";
		return ;
	}

	ll div = m / n;
	int cnt = 0;
	while (div > 1)
	{
		if (div % 2 == 0)
		{
			cnt++;
			div = div / 2;
		}
		else if (div % 3 == 0)
		{
			cnt++;
			div = div / 3;
		}
		else
		{
			std::cout << "-1\n";
			return ;
		}
	}
	std::cout << cnt <<"\n";

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
