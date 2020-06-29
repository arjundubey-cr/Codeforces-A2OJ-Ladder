#include <bits/stdc++.h>

using namespace std;

void solve()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
		cin>>arr[i];
	long long int vatsya=0, petya=0;
	long long int m;
	cin>>m;
	for(long long int i=0;i<m;i++)
	{
		long long int query;
		cin>>query;
		for(long long int j=0;j<n;j++)
			if(query==arr[j])
			{
				vatsya+=j+1;
				petya+=(n-j);
			}
	}
	cout<<vatsya<<" "<<petya<<"\n";
	
}

int main()
{
	solve();
}
