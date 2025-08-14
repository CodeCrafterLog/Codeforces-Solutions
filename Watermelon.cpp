#include <iostream>

int main()
{
	int v;
	std::cin >> v;
	if (v < 3) std::cout << "NO";
	else if (v&1)
		std::cout << "NO";
	else
		std::cout << "YES";

	return 0;
}