#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	//int totalSlice=c*d;
	int totalDrink=k*l;
	//int counter=0;
	
	int drink=totalDrink/n;
	int limes=c*d;
	int salt=p/np;
	
	int toastValue=min(min(drink, limes), min(drink, salt));
	
	cout<<toastValue/n;
}

int main()
{
	solve();
}
