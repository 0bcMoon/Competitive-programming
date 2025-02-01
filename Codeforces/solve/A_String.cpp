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
#define all(a) a.begin(), a.end()
void solve()
{
	std::string s;
	std::cin >> s;
	int n = s.size();
	int cnt = 0;
	for (int i = 0;i < n;i++)
	{
		if (s[i] == '1')
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
	while(t--)
	{
		solve();
	}
	return 0;
}
