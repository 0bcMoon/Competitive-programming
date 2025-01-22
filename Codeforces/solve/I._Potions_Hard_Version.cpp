#include <algorithm>
#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n;
	std::cin >> n;
	std::vector<ll> vec(n);
	for (auto &it : vec)
		std::cin >> it;
	std::sort(vec.begin(), vec.end());
	auto it = std::upper_bound(vec.begin(), vec.end(), -1);
	if (it == vec.end())
	{
		std::cout << "0\n";
		return;
	}
	else if (it == vec.begin())
	{
		std::cout << n << "\n";
		return;
	}

	ll cnt =   0;
	int l = it - vec.begin() - 1;
	int r = l + 1;
	ll sum = 0;
	while (l >= 0 || r < n)
	{
		if (l >= 0 && sum + vec[l] >= 0)
		{
			sum += vec[l--];
			cnt++;
		}
		else if (r < n)
		{
			sum += vec[r++];
			cnt++;
		}
		else
			break;
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
