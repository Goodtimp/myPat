/**
 * @author: goodtimp
 * @describe: 10位素数检测,string 转 int  
 * @total time: 35分钟 
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

bool isNotPrime(long long int n)
{
	if(n<=1) return true;
	long long int m=sqrt(n);
	for(long long int i=2;i<=m;i++)
	{
		if(n%i==0) return true;
	}
	return false;
}

int main(){
	long long int n,m,wei=1;
	scanf("%lld%lld",&n,&m);
	if(n<m || m<=0 || n<=0)
	{
		printf("404\n");
		return 0;
	}
	string s;
	cin>>s;
	int len=s.size();
	string r=s.substr(0,m);
	long long int t=0;
	// 初始化第一个 
	for(int i=0;i<m;i++)
	{
		wei=wei*10; //记录位数，做取余 例如一位 1 两位 10 
		t=t*10+(int(s[i])-48);
	}
	wei=wei/10; 
	for(int i=m;i<=s.size();i++)
	{
		if(!isNotPrime(t)){
			if(t<wei){ //判断位数补前导零 
				long long tt=t;
				while(tt<wei){
					tt*=10;
					printf("0");
				}
			}
			printf("%lld\n",t);
			return 0;
		}
		t=t%wei;//最高位删除 
		t=t*10+int(s[i]-48); //添加最低位，防止重复计算 
	}
	printf("404\n");
	return 0;
}
