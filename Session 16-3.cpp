#include<stdio.h>

void summary(int *a,int *b,int *sum){
	*sum=*a+*b;
}

int main(){
	int a=5;
	int b=10;
	int sum;
	summary(&a,&b,&sum);
	printf("The sum of %d and %d :%d",a,b,sum);
}