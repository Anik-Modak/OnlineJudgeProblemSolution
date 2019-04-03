// UVa 10305 - Ordering Tasks
#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	freopen("input.txt","r",stdin);
	cin >> n >> m;
	while (n || m) {
		int parents[101];
		vector<int> link[101];
		memset(parents, 0, sizeof(parents));
		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			link[a].push_back(b);
			parents[b]++;
		}
		queue<int> q;
		for (int i = 1; i <= n; i++)
			if (parents[i] == 0)
				q.push(i);

		vector<int> sol;
		while (!q.empty()) {
			int i = q.front();
			q.pop();
			sol.push_back(i);
			// execute task i
			for (int j = 0; j < link[i].size(); j++) {
				parents[link[i][j]]--;
				if (parents[link[i][j]] == 0)
					q.push(link[i][j]);
			}
		}

		cout << sol[0];
		for (int i = 1; i < n; i++)
			cout << " " << sol[i];
		cout << endl;
		cin >> n >> m;
	}

	return 0;
}
