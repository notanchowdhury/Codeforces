#include<bits/stdc++.h>

using namespace std;



const int N = 102;

int n;
int m;
int a[N];

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		int x;
		scanf("%d", &x);
		int lft = m - x;
		int ans = i;
		for (int y = 1; y < N; y++) {
			int z = min(lft / y, a[y]);
			//cout<<z<<" "<<(lft/y)<<" "<<a[y]<<" "<<ans<<endl;
			ans -= z;
			lft -= y * z;
		}
		//cout<<"T"<<endl;
		printf("%d ", ans);
		a[x]++;
	}
	printf("\n");

	return 0;
}
