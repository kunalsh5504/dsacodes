#include <bits/stdc++.h>
using namespace std;

void printMaxActivities(int s[], int f[], int n)
{
	int i, j;

	cout << "activities selected" << endl;


	i = 0;
	cout << i << " ";


	for (j = 1; j < n; j++) {
	
		if (s[j] >= f[i]) {
			cout << j << " ";
			i = j;
		}
	}
}


int main()
{
	int s[] = { 2, 3, 1, 7, 4, 9 };
	int f[] = { 1, 3, 4, 6, 7, 9 };
	int n = sizeof(s) / sizeof(s[0]);


	printMaxActivities(s, f, n);
	return 0;
}

