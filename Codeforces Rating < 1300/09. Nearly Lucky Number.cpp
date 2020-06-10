#include <iostream>
using namespace std;

int solve()
{
	string s;
	cin>>s;
	int size=s.size();
	for(int i=0;i<size;i++)
	{
		if(s[i]!='4'||s[i]!='7')
		{
			return 0;
		}
	}
	return 1;
	
}

int main()
{
	int val = solve();
	if(!val)
	{
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
	}
}
