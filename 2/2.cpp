/**
 *	Author : hkbharath
 *	Problem : Ginteger BF
 *	Lang : C++
 */	

#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define FOR(a,b,c) for(int a=b;a<=c;++a)
#define RFOR(a,b,c) for(int a=b;a>=c;--a)
#define LOOP(a) FOR(xx,1,a)
#define PB(b) push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000007
using namespace std;
typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

int sum(int n){
	int ans=0;
	while(n){
		ans=ans+n%10;
		n/=10;
	}
	return ans;
}

void solve(int tt){
	int n;
	cin>>n;
	FOR(i,1,100000){
		if(n*sum(i)==i){
			cout<<i<<endl;
			return;
		}
	}
	cout<<"NOT EXISTS"<<endl;
}

int main(){ _
	int t,it;
	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
