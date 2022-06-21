#pragma warning(disable:4996)
#include <iostream>
using namespace std;

int main()
{	
	int n, m, min = 0, num = 0;
	cin >> n >> m;

	char **arr = new char*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new char[m];
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}

	for (int i = n - 1; i < n; i++)
	{
		for (int j = m - 1; j < m; j++)
		{
			/*색칠해야 하는 정사각형의 개수*/
			if (num > min)
				min = num;
		}
	}

	cout << min;
}