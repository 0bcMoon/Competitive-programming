#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n;
	std::cin >> n;
	if (n == 1)
	{
		std::cout << n << "\n";
		return;
	}
	int k = 2;
	int pos = 1;
	while (k <= n)
	{
		if (k % pos == 0)
			pos = k;
		k = k * 2;
	}
	std::cout << pos << "\n";
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
