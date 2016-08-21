#include<stdio.h>
#include<string.h>

char text[1000];
char ans[1000];
char key[50];
int rot;
int mode;

void input();
void encrypt();
void decrypt();
void output();
void caesar();

int main(void)
{
	input();
	caesar();
	output();

	return 0;
}

void input()
{
	printf("Select mode\n1. Encrypt\n2. Decrypt\n: ");
	scanf_s("%d", &mode);
	printf("Input ROT\n: ");
	scanf_s("%d", &rot);
	printf("Input your text in lowercase\n: ");
	scanf_s("%s", text, 1000);

	return;
}
void caesar()
{

	if (mode == 1)
	{
		encrypt();
	}
	else if (mode == 2)
	{
		decrypt();
	}
	else
	{
		return;
	}

	return;
}
void encrypt()
{
	for (int i = 0; i < 26; i++)
	{
		key[i] = (i + rot) % 26 + 'a';
	}
	for (int i = 0; i < strlen(text); i++)
	{
		ans[i] = key[text[i] - 'a'];
	}
	
	return;
}
void decrypt()
{
	for (int i = 0; i < 26; i++)
	{
		key[i] = (i + 26 - rot) % 26 + 'a';
	}
	for (int i = 0; i < strlen(text); i++)
	{
		ans[i] = key[text[i] - 'a'];
	}

	return;
}

void output()
{
	printf("%s", ans);

	return;
}