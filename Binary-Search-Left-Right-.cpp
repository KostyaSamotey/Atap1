#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

int a[100111];

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < k; i++)
	{
		int x;
		scanf("%d", &x);

		int l = 0;
		int r = n - 1;
		while (l < r)
		{
			int d = (l + r) / 2;
			if (a[d] < x) l = d + 1; else r = d;
		}

		if (a[l] != x)
		{
			printf("0\n");
			continue;
		}

		int left = l;

		l = 0;
		r = n;
		while (l < r)
		{
			int d = (l + r) / 2;
			if (a[d] <= x) l = d + 1; else r = d;
		}

		int right = r - 1;

		printf("%d %d\n", left + 1, right + 1);
	}
}
