
#include <bits/stdc++.h>
using namespace std;
bool isValidTriangle(int a, int b, int c)
{
	if (a + b <= 0 || a + c <= 0 || b + c <= 0)
		return false;
	else
		return true;
}
int main()
{
	int a = 3, b = 10, c =7;
	if (isValidTriangle(a, b, c))
		cout << "Valid";
	else
		cout << "Invalid";
}


