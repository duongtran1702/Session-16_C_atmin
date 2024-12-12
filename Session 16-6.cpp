#include<stdio.h>

int search_element(int *a,int number,int n){
	int pos=-1;
	for(int i=0;i<n;i++){
		if(a[i]==number){
			pos=i;
		}
	}
	return pos;
}

int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(a)/sizeof(a[0]);
	int number;
	printf("Enter number :");
	scanf("%d",&number);
	int pos=search_element(a,number,n);
	if(pos<0){
		printf("The element does not exist !");
	}
	else{
	printf("The position of %d in the array : %d",number,pos);
	}
}