#include<stdio.h>
int main()
{
	int a,bv2,bv3,bv4,c;
	bv2=1<<2;
	bv3=1<<3;
	bv4=1<<4;
	c=a&~(bv2|bv3|bv4);
	printf("%d",c);
	return 0;
	
}
