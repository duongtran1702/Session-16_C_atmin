#include<stdio.h>

int main(){
	int n=10;
	int *p=&n;
	printf("Value of n : %d\n",n);
	printf("Value of n : %d\n",*p);
	printf("Address of n :%x\n",&n);
	printf("Address of n :%x\n",p);
	printf("Address of n :%p\n",&n);
	printf("Address of n :%p\n",p);
}