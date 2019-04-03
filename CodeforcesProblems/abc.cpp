#include <bits/stdc++.h>
using namespace std;

int a[20];

bool issorted(int lo, int hi) {
	bool std = true;
	for(int i = lo + 1; i <= hi; i++) {
		if(a[i - 1] > a[i]) {
			return false;
		}
	}
	return std;
}

int check(int lo, int hi) {
	if(lo == hi) {
		return 1;
	}
	if(issorted(lo, hi)) return hi - lo + 1;
	int mid = (lo + hi) / 2;
	return max(check(lo, mid), check(mid + 1, hi));
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
		scanf("%d", &a[i]);
	printf("%d", check(0, t - 1));
}
