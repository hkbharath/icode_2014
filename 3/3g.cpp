#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	printf("100\n");
	int t=50;
	while(t--){
		printf("%d %d %d\n",1+(rand()+77362)%100,1+(rand()+77452)%100,1+(82442+rand())%100);	
	}
	t=25;
	while(t--)printf("%d %d %d\n",1+(rand()+362)%100,1+(rand()+774)%30,1+(242+rand())%30);
	t=25;
	while(t--)printf("%d %d %d\n",1+(rand()+77362)%100,1+(rand()+77452)%10,1+(82442+rand())%20);
}
