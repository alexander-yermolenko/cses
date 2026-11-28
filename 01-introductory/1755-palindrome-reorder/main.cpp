#include <array>
#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string s{};
	std::cin >> s;

	std::array<int, 26> charCounts{};
	for (char c : s) ++charCounts[c - 'A'];

	char oddChar{};
	int oddCount{};
	for (int i{}; i < 26; ++i)
	{
		if (charCounts[i] % 2)
		{
			++oddCount;
			oddChar = static_cast<char>('A' + i);
		}
	}
	
	if (oddCount > 1) std::cout << "NO SOLUTION\n";
	else
	{
		std::string half;
		for (int i{}; i < 26; ++i) half.append(charCounts[i] / 2, static_cast<char>('A' + i));

		std::string result{half};
		if (oddCount) result += oddChar;
		result.append(half.rbegin(), half.rend());
		std::cout << result << '\n';
	}

	return 0;
}
