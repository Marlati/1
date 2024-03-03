#include<stdio.h>
int main()
	{
		int a,b,m,n;
		scanf("%d %d",&a,&b);
		if(b%2!=0)
			printf("不正确");
		else
			{m=(4*a-b)/2;
			n=(b-2*a)/2;
			printf("鸡的数目= %d\n兔的数目= %d",m,n);}
		return 0;
	}