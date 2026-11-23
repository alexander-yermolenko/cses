#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n{};
	std::cin >> n;

	if (n > 1 && n < 4)
	{
		std::cout << "NO SOLUTION\n";
		return 0;
	}

	for (int i{n-1}; i > 0; i -= 2)
	{
		std::cout << i << ' ';
	}
	for (int j{n}; j > 0; j -= 2)
	{
		std::cout << j << ' ';
	}
	std::cout << '\n';

	return 0;
}
