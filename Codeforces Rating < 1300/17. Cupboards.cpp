#include <bits/stdc++.h>

using namespace std;

void solve()
{
	string b;
	cin>>b;
	string a=b.substr(0,2);
	int len=b.size();
	for(int i=3; i<len; i+=2)
	{
		a+=b[i];
	}
	cout<<a<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(--t)
		solve();
}
