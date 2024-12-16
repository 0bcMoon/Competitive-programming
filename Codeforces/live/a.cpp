#include <algorithm>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n, k;
	std::cin >> n >> k;
	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		std::string s;
		std::cin >> s;
		sum += s.size();
		if (sum <= k)
			cnt++;
	}
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
