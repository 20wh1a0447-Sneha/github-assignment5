#include <bits/stdc++.h>
using namespace std;
int medianOfThree(int a, int b, int c)
{
	if ((a < b && b < c) || (c < b && b < a))
	return b;
	else if ((b < a && a < c) || (c < a && a < b))
	return a;
	else
	return c;
}

int main()
{
	int a = 20, b = 50, c = 40;
	cout << medianOfThree(a, b, c);
	return 0;
}

