//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int m = sqrt(n);
    for (int i = 0; i < n; i += m)
        for(int j = min(n, i + m) - 1; j >= i; j--)
                printf("%d ", j + 1);
    puts("");
    return 0;
}

