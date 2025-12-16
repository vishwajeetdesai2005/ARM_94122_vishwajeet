#include<stdio.h>
int main()
{
	int a,b,c;
	a=0x05;
	b=a<<2;
	c=b>>1;
	printf("left shift:0x%X\n",b);
	printf("right shift :0x%X\n",c);
	
}
