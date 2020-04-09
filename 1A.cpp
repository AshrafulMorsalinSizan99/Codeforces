#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,a,d;
    cin>>n>>m>>a;
    d=(((m+a-1)/a)*((n+a-1)/a));
    cout<<d<<endl;
    return 0;
}
