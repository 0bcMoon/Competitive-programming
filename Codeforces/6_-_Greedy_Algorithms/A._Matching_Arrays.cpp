#include <iostream>
#include <vector>
using ll = long long;
using lpair = std::pair<ll, ll>;
using ipair = std::pair<int, int>;
void solve()
{
	int n, x;
	std::cin >> n >> x;
	std::vector<int> a(n);
	std::vector<int> b(n);
	for(auto &it : a) std::cin >> it;
	for(auto &it : b) std::cin >> it;

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


// 2 3 4 a
// 1 2 4 b
// 3 0
// 2 4 3
// 4 1 2
//
// 3 1
// 2 4 3
// 4 1 2
