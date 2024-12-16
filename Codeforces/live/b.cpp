#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n;
	std::cin >> n;
	std::vector<int> vec(n);
	std::vector<int> p;
	for (auto &it : vec)
		std::cin >> it;
	ll sum = 0;
	for (int i = 0; i < n; i++)
		sum += vec[i];
	if (sum % n != 0)
	{
		std::cout << "NO\n";
		return;
	}
	ll f = sum / n;
	for (int i = 1; i < n - 1; i++)
	{
		if (vec[i - 1] > f)
		{
			int tmp = vec[i - 1];
			vec[i - 1] -= vec[i - 1] - f;
			vec[i + 1] += tmp - f;
		}
		else if (vec[i - 1] < f)
		{
			int tmp = vec[i - 1];
			vec[i - 1] +=  f-vec[i - 1] ;
			vec[i + 1] -=   f- tmp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (vec[i] != f)
		{
			std::cout << "NO\n";
			return;
		}
	}
	std::cout << "YES\n";
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
