#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
#define end '\n'
void solve()
{
	int n;
	std::cin >> n;
	std::vector<int> vec(n);
	std::vector<int> set(128, 0);
	int nxor = 0;
	for (auto &it : vec)
	{
		std::cin >> it;
		set[it] = 1;
		nxor = nxor ^ it;
	}
	int nb = 0;
	for (int i = 0; i < n; i++)
	{
		nb = nxor ^ vec[i];
		if (nb == vec[i])
		{
			std::cout << vec[i] << "\n";
			return;
		}
	}
	std::cout << -1 << "\n";
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
