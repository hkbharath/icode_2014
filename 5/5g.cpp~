#include <iostream>
#include <stdlib.h>
#include<string.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

int v[100001];

void gentt(int mod){
        int n=1+rand()%mod;
        printf("%d\n",n);
        int pa[n+1];
        for(int i=1;i<=n;i++)pa[i]=i;

        if(rand()%3==0||rand()%5==0){
            //ambigous
            memset(v,0,sizeof(v));
            int swaps=rand()%n;
            while(swaps--){
                int a=1+rand()%n;
                int b=1+rand()%n;
                if(!v[a]&&!v[b]){
                    v[a]=1;v[b]=1;
                    swap(pa[a],pa[b]);
                }
            }
        }
        else{
            for(int i=1;i<=n;i++){
                int to_swap=1+rand()%i;
                	swap(pa[i],pa[to_swap]);
            }

        }
        for(int i=1;i<n;i++)printf("%d ",pa[i]);
        printf("%d\n",pa[n]);
    }

int main()
{
    int t=75;
    while(t--)gentt(50);
    t=10;
    while(t--)gentt(100);
    t=10;
    while(t--)gentt(1000);
    t=5;
    while(t--)gentt(100000);
    printf("0\n");
    return 0;
}
