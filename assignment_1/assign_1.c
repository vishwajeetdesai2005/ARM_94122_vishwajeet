#include <stdio.h>
int main() {
    int num;
    int count;

    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>0){
    	count++;
    	num=num&(num-1);
    	
	}
	printf("number of 1's=%d\n",count);
    return 0;
}



