#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<iomanip>
#include<algorithm>
using namespace std;

const int N=10050;

struct pp{
	char first;
	int site;
	string data;
	int test;
	int score;
	string yuan;
}aF[N],aS[N],aD[N],a[N];

int char3ToInt(char c0,char c1,char c2)
{
	return int(c0-48)*100+int(c1-48)*10+int(c2-48);
}

bool cmp1(pp a,pp b){
	if(a.first==b.first)
	{
		if(a.score==b.score)
			return a.yuan<b.yuan;
		return a.score>b.score;
	}
	return a.first<b.first;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int t;
		scanf("%d",&a[i].score);
		a[i].first=t[0];
		a[i].yuan=s;
		a[i].site=char3ToInt(t[1],t[2],t[3]);
		a[i].data=s.substr(4,6);
		a[i].test=char3ToInt(t[11],t[12],t[13]);
		aF[i].first=a[i].first;
		aF[i].site=a[i].site;
		aF[i].data=a[i].data;
		aF[i].test=a[i].test;
		aF[i].score=a[i].score;		
		aF[i].yuan=s;
	}
	sort(aF,&aF[n],cmp1);
	for(int i=1;i<=m;i++)
	{
		int t,i;
		scanf("%d",&t);
		if(t==1)
		{
			char f;
			scanf("%c",&f);
			printf("Case %d: 1 %c\n",f);
			bool flag=true;
			for(i=0;i<n;i++)
			{
				if(aF[i].first==f)
				{
					printf("%s %d\n",aF[i].yuan,aF[i].score);
					if(i==n-1||aF[i+1].first!=f)
						break;
				}	
			}
			// Ã»ÓÐÊä³ö 
			if(i==n) printf("NA\n");
		}
		else if(t==2)
		{
			int f,all=0,cnt=0;
			scanf("%d",&f);
			printf("Case %d: 2 %d\n",f);
			for(i=0;i<n;i++)
			{
				if(a[i].site==f)
				{
					all+=a[i].score;
					cnt++;
				}	
			}
			if(cnt==0) printf("NA\n");
			else
				printf("%d %d\n",cnt,all);
		}
		else{
			string s;
			int all=0,cnt=0;
			cin>>s;
			
		}
	}
}
