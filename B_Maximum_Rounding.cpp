#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s,i,n) for(int i=s;i<n;i++)
#define loopr(s,i,n) for(int i=n-1;i>=s;i--)
#define loopa(u,x) for(auto u:x)
#define endl '\n'

void solve()
{
        string s; 
		cin>>s;
		int p=-1,i;
		for(i=s.size()-1;i;i--)
			if(s[i]>='5'){
				s[i-1]++;
				p=i;}
		if(s[0]>='5')cout<<'1',p=0;
			for(i=p;i<s.size();i++)
				s[i]='0';
		cout<<s<<endl;
}   


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}