#include<stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
 int main(){
 	int a=5;
 	int b=10;
 	swap(&a,&b);
 	printf("The value after chance :a=%d\n",a);
 	printf("The value after chance :b=%d",b);
}