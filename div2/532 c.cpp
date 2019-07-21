#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{

    int n;
    cin>>n;
    int r;
    cin>>r;
    double p=sin(pi/(double)n);
    double x=(r*p)/(1-p);
    printf("%.7lf\n",x);
    return 0;
}
