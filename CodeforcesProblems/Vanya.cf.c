#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
const int maxn = 1005;

int N, L, pos[maxn];

int main () {
    scanf("%d%d", &N, &L);
    for (int i = 0; i < N; i++)
        scanf("%d", &pos[i]);
    sort(pos, pos + N);
    double ans = max(pos[0] - 0, L - pos[N-1]);
    for (int i = 1; i < N; i++)
        ans = max(ans, (pos[i] - pos[i-1]) / 2.0);
    printf("%.10lf\n", ans);
    return 0;
}
