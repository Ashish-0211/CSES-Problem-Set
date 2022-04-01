// Problem: Missing Number
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1083
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	ll v[n];
	for(int i = 0;i<n-1;i++)
	cin>>v[i];
	ll temp = (n*(n+1))/2;
	ll sum = 0;
	for(int i = 0;i<n-1;i++)
		sum+=v[i];
	cout<<temp - sum;
	return 0;
}