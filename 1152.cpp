/**
 * @author: goodtimp
 * @describe: 10λ�������,string ת int  
 * @total time: 35���� 
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
	// ��ʼ����һ�� 
	for(int i=0;i<m;i++)
	{
		wei=wei*10; //��¼λ������ȡ�� ����һλ 1 ��λ 10 
		t=t*10+(int(s[i])-48);
	}
	wei=wei/10; 
	for(int i=m;i<=s.size();i++)
	{
		if(!isNotPrime(t)){
			if(t<wei){ //�ж�λ����ǰ���� 
				long long tt=t;
				while(tt<wei){
					tt*=10;
					printf("0");
				}
			}
			printf("%lld\n",t);
			return 0;
		}
		t=t%wei;//���λɾ�� 
		t=t*10+int(s[i]-48); //������λ����ֹ�ظ����� 
	}
	printf("404\n");
	return 0;
}
