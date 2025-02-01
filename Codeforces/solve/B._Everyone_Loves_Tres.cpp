#include <iostream>
#include <numeric>
#include <vector>
#ifdef DEBUG
#include "debug.hpp"
#endif /* DEBUG */
#ifndef DEBUG
#define dbg(...) 
#endif // /* DEBUG */
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
long long lcm(int a, int b)
{
    return (a / std::gcd(a, b)) * b;
}
 
void solve()
{
	int n;
	std::cin  >> n;

	std::string str(' ', n);
	str[0] = '6';
	for (int i = 1;i<n;i++)
	{
		for (int j = 0;j<n;j++)
	}
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
