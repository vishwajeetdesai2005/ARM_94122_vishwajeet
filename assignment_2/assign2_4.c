#include <stdio.h>

int main()
{
	int a,bv;
	a=0x08;
	bv=1<<3;
	if(a|bv==1)
	{
		printf("bit is set to 1");
	}
	else {
		printf("bit is set to 0");
	}
    return 0;
}

