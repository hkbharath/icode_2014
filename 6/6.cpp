#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,a,b,c,d,sol=0;
    cin>>n>>a>>b>>c>>d;
    for(int j=0;j<=c;j++)
      for(int k=0;k<=d;k++)
	for(int i=0;i<=b && i*2+j*5+k*10<=n;i++)
	  if(n-(i*2+j*5+k*10)>=0 && n-(i*2+j*5+k*10)<=a)
	    sol++;
    cout<<sol<<endl;
  } 
}
