// Problem: Repetitions
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1069
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll ans = 0;
	ll count = 1;
	string str;
	cin>>str;
	// ll i = 0;
	ll size = str.size();
	for(int i = 0;i<size-1;i++)
	{
		if(str[i] == str[i+1])
		count++;
		else{
		ans = max(ans,count);
		count = 1;
		}
	}
	ans = max(count,ans);
	cout<<ans;
	return 0;
}