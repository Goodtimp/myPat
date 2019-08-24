/**
 * @author: goodtimp
 * @describe: 进制转换以及简单的素数检测
 * @total time: 30分钟 
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
 
bool isNotPrime(int n){
	for(int i=2;i<=sqrt(n);i++)	 
	{
		if(n%i==0)
			return true;
	}
	return false;
}
 
int main(){
	int n,m;
 	while(cin>>n)
 	{
 		if(n<0) break;
 		cin>>m;
		// 进制转换并reseve 
		string s="";
 		int k=m,re=0;
 		if(isNotPrime(n)||n<=1)
 		{
 			printf("No\n");
 			continue;
		 }
 		while(n>0)
 		{
 			int t=n%m;
 			n=n/m;
 			re=re*k+t;
		 }
		if(isNotPrime(re)||re<=1)
 		{
 			printf("No\n");
 			continue;
		 }
		printf("Yes\n");
	}
}
