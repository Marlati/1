#include<stdio.h>
int main()
	{
		int a,b,m,n;
		scanf("%d %d",&a,&b);
		if(b%2!=0)
			printf("����ȷ");
		else
			{m=(4*a-b)/2;
			n=(b-2*a)/2;
			printf("������Ŀ= %d\n�õ���Ŀ= %d",m,n);}
		return 0;
	}