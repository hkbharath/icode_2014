/**
 *	Author : hkbharath
 *	Problem : http://www.codechef.com/problems/PERMUT2/
 *	Lang : C++
 */	

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <map>
#include <cassert>
#include <queue>

#define FOR(a,b,c) for(int a=b;a<=c;++a)
#define RFOR(a,b,c) for(int a=b;a>=c;--a)
#define LOOP(a) FOR(xx,1,a)
#define PB(a,b) a.push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000007
using namespace std;
typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

bool solve(int tt){
	int n;
	scanf("%d",&n);
	if(n==0) return 0;
	int a[n+1],x;
	FOR(i,1,n)scanf("%d",a+i);
	bool ok=1;
	for(int i=1;i<=n && ok;i++)ok&=(a[a[i]]==i);
	if(ok)printf("ambiguous\n");
	else printf("not ambiguous\n");
	return 1;
}

int main(){
	int t,it;
//	for(scanf("%d",&t),it=1;it<=t;it++)
	while(solve(it));
}
