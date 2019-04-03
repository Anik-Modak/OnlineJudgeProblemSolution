#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <sstream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false);
#ifdef NON_SUBMIT
#ifdef COMPARE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
#endif
	int N, a, b, cnt=0, free=0, total;
	string s;
	scanf("%d%d%d",&N,&a,&b);
	total=a+b;
	cin>>s;
	for(int i=0;i<N;i++) {
		if(s[i]=='.') {
			cnt++;
		}
		else {
			a-=cnt/2;
			b-=cnt/2;
			free+=(cnt&1);
			cnt=0;
		}
	}
	a-=cnt/2;
	b-=cnt/2;
	free+=(cnt&1);
	cnt=0;
	a=max(a,0);
	b=max(b,0);
	if(a==0 && b==0 || a+b<=free) {
		printf("%d\n",total);
	}
	else {
		printf("%d\n",total-(a+b-free));
	}
#ifdef NON_SUBMIT
#ifndef COMPARE
	system("PAUSE");
#endif
#endif
    return 0;
}
