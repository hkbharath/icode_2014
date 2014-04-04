/**
 *	Author : hkbharath
 *	Problem : GFAV
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

void solve(int tt){
	int n,c,w;
	cin>>n>>c>>w;
	int ch=n/c;
	int ans=ch,addw=ch,paddw=0;
	while(addw>=w){
		ch=addw/w;
		paddw=addw;
		addw = addw%w;
		ans+=ch;
		addw+=ch;
		if(paddw==addw){
			cout<<"INF\n";
			return;
		}	
	}
	cout<<ans<<endl;
}

int main(){ _
	int t,it;
	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
