#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long long n{};
	std::cin >> n;

	long long numbers{};
	for (int i{1}, j{}; i < n; ++i)
	{
		std::cin >> j;
		numbers += j;
	}
	std::cout << (n * (n + 1) / 2) - numbers << '\n';

	return 0;
}
