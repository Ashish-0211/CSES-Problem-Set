// Problem: Weird Algorithm
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1068
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
	cout<<n<<" ";
	while(n!=1)
	{
		if(n%2 == 0)
		{	
			n = n/2;
			cout<<n<<" ";
			continue;
		}
		if(n%2!=0)
		{	
			n = n*3 + 1;
			cout<<n<<" ";
			continue;
		}
	}
	return 0;
}