#include <cstdlib>
#include <iostream>
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
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
void solve()
{
	int x,y;
	std::cin >> x >> y;
	if (x == y)  {
		std::cout << "0\n";  return ;
	}
	int d = x - y;
	bool s  = d < 0;
	d = std::abs(d);
	if (s && d & 1)
		std::cout << "1\n";
	else if (!s && !(d & 1))
		std::cout << "1\n";
	else
		std::cout << "2\n";



}
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	int n = t;
	while (t--)
	{
#ifdef DEBUG
		std::cerr << "#Case " << n - t << " -------------------\n";
#endif // DEBUG
		solve();
	}
	return 0;
}
