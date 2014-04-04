#include<bits/stdc++.h>
using namespace std;
int main(){
	int t=50;
	printf("%d\n",t);
	t=30;
	while(t--){
		int n=1+rand()%10,m=1+rand()%10;
		int k=1+rand()%min(n,m);
		printf("%d %d %d\n",n,m,k);
		int ar[n+1];
		for(int i=0;i<n;i++)ar[i]=rand()%11,printf("%d\n",ar[i]);
		sort(ar,ar+n);
		for(int i=0;i<m;i++)printf("%d\n",ar[n-1]+rand()%101);
	}
	t=10;
	while(t--){
		int n=1+rand()%100,m=1+rand()%100;
		int k=1+rand()%min(n,m);
		printf("%d %d %d\n",n,m,k);
		int ar[n+1];
		for(int i=0;i<n;i++)ar[i]=rand()%11,printf("%d\n",ar[i]);
		sort(ar,ar+n);
		for(int i=0;i<m;i++)printf("%d\n",ar[n-1]+rand()%1001);
	}
	t=10;
	while(t--){
		int n=1+rand()%50,m=1+rand()%50;
		int k=1+rand()%min(n,m);
		printf("%d %d %d\n",n,m,k);
		int ar[n+1];
		for(int i=0;i<n;i++)ar[i]=rand()%1001,printf("%d\n",ar[i]);
		sort(ar,ar+n);
		for(int i=0;i<m;i++)printf("%d\n",ar[n-1]+rand()%(1000000000-ar[n-1]));
	}
}
