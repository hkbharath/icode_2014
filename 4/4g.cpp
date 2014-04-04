#include<bits/stdc++.h>

int main(){
	int t=100;
	printf("%d\n",t);
	t=50;
	while(t--)printf("%d\n",rand()%1000);
	t=50;
	for(unsigned long long i=1;i<=t;i++)printf("%lld\n",((77673443756+i)*(i+6377352)+rand())%1000000000);

}
