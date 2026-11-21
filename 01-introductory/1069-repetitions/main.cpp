#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string input{};
	std::cin >> input;

	int best{1};
	int current{1};
	char previous{};
	for (char character : input)
	{
		if (character == previous) ++current;
		else current = 1;
		if (current > best) best = current;
		previous = character;
	}
	std::cout << best << '\n';

	return 0;
}
