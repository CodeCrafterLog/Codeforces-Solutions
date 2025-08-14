#include <iostream>
#include <climits>
#define min(a, b) ((a) < (b) ? (a) : (b))

using ll = unsigned long long int;

ll score()
{
	int count;
	std::cin >> count;

	ll sumAction = LLONG_MAX;
	ll sumNoAction = 0;
	ll minn = LLONG_MAX;
	ll lastmin;
	ll val;
	ll lastval;

	for (int i = 0; i < count; i++)
	{
		std::cin >> val;

		if (i >= 1)
		{
			sumAction = min(sumAction, sumNoAction - minn + min(lastval + val, lastmin));
		}
		
		lastmin = minn;
		minn = min(minn, val);
		sumNoAction += minn;
		lastval = val;
	}

	return min(sumAction, sumNoAction);
}

int main()
{
	int testcases;
	std::cin >> testcases;

	for (int i = 0; i < testcases; i++)
	{
		std::cout << score() << std::endl;
	}

	return 0;
}
