#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int p=0;
	//count the no. of present days in the string
	for(int i=0; i<n; ++i)
		if(s[i]=='1')
			p++;
	//get the sum of the present days and the difference of the automatically present days,
	//and divide it by 120 to get the corresponding percentage
	//check if the percentage is greater than or equal to 75 percent
	double ans=(double)(p+(120-n))/120;
	cout << (ans*100>=75?"YES":"NO") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
