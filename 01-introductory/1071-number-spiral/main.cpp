#include <algorithm>
#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t{};
	std::cin >> t;

	while (t--)
	{
		long long y{}, x{};
		std::cin >> y >> x;
		long long k = std::max(y, x);
		long long d = (k - 1) * (k - 1) + k;
		if (!(k % 2)) std::cout << d + (y - x) << '\n';
		else std::cout << d + (x - y) << '\n';
	}

	return 0;
}
