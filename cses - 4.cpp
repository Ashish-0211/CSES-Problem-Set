#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	if(n == 1)
	{
		cout<<1;
		return 0;
	}
	if(n<4){
	cout<<"NO SOLUTION";
	return 0;
	}
	vector<ll> a;
	for(int i = 2;i<=n;i+=2)
	a.push_back(i);
	for(int i = 1;i<=n;i+=2)
		a.push_back(i);
	for(int i = 0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}