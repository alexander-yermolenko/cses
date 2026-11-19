#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long n{};
	std::cin >> n;

	while (n != 1)
	{
		std::cout << n << ' ';
		!(n % 2) ? n /= 2 : n = n * 3 + 1;
	}
	std::cout << n << '\n';

	return 0;
}
