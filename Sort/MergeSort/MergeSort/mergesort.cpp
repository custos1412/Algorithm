#include <stdio.h>

int n;
int map[1000];

void input(void);
void merge(int s, int e);


int main(void)
{
	int n;

	input();

	merge(0, n/2);
	merge(0, n / 2 + 1);

	return 0;
}

void input(void)
{
	scanf_s("%d", n);
	if (n < 2)
	{
		return;
	}
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &map[i]);
	}

	return;
}
void merge(int s, int e)
{
	if (e - s == 1)
	{

	}
}
