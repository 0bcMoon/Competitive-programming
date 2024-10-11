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
	std::vector<lpair> b(n);
	std::vector<bool> vec(n+1);
	for (auto & it : b)
	{
		std::cin >> it.first;
		vec[it.first] = true;
	}
	for (int i = 1;i<=n;i++)
	{
		if (vec[i])
	}
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
