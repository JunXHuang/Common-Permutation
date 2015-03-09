#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
	char a[1000],b[1000];
	string c;
	int i, j;
	while (gets(a), gets(b))
	{
		c = "";
		for (i = 0; i < strlen(a); i++) {
			for (j = 0; j < strlen(b); j++) {
				if (a[i] == b[j]) {
					c += a[i];
					b[j] = ')';
					break;
				}
			}
		}
		sort(c.begin(), c.end());
		cout << c << endl;
	}
	return 0;
}