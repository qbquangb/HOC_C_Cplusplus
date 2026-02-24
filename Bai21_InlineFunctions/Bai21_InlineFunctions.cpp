#include <iostream>
using namespace std;

inline int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	cout << max(3, 6) << '\n';
	cout << max(6, 3) << '\n';

	return 0;
}

/*

Tương đương hàm main sau
int main()
{
	cout << (3 > 6 ? 3 : 6) << '\n';
	cout << (6 > 3 ? 6 : 3) << '\n';

	return 0;
}


*/