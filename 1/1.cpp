/**
 *	Author : hkbharath
 *	Problem : tressure hunt icode
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

int n,m,k;
int bpGraph[101][101];
bool visit[101];
int assign[101];

bool dfs(int v,int limit){
	if(v==-1)return true;
	if(visit[v])return false;
	visit[v]=true;
	FOR(u,0,m-1){
		if(bpGraph[v][u]<=limit && dfs(assign[u],limit)){
			assign[u]=v;
			return true;
		}			
	}
	return false;
}
int matching(int limit){
	memset(assign,-1,sizeof(assign));
	int sol=0;
	FOR(v,0,n-1){
		memset(visit,0,sizeof(visit));
		if(dfs(v,limit)) sol++;
	}
	return sol;
}

int binary_search(int l=0,int h=1e9){
	if(l==h)return l;
	int mid=(l+h)/2;
	int match = matching(mid);
	return match>=k?binary_search(l,mid):binary_search(mid+1,h);
}

void solve(int tt){
	cin>>n>>m>>k;
	int ratT[n+1],ratTr[m+1];
	FOR(i,0,n-1)cin>>ratT[i];
	FOR(i,0,m-1)cin>>ratTr[i];
	
	FOR(i,0,n-1)FOR(j,0,m-1)
		bpGraph[i][j]=ratTr[j]-ratT[i];
	cout<<binary_search()<<endl;	
}

int main(){ _
	int t,it;
	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
