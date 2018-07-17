#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
typedef long long LL;
const int N=233;

char s[N];
int ans,n; 

int main(){
	
	int i,j,k;
	scanf("%s",s+1);
	n=strlen(s+1);
	
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			for(k=j+1;k<=n;k++)
				if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
					ans++;
	
	printf("%d\n",ans);

	return 0;
}