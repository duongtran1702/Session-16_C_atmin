#include<stdio.h>
#include<stdlib.h>
void Add_into_array(int **a,int value,int pos,int *n);
int main(){
	int *a;
	int n=6;
	a=(int *)calloc(n,sizeof(int));
	for(int i=0;i<6;i++){
		a[i]=i+1;
	}
	printf("Before updating the array :");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	int pos;
	printf("\nEnter position where you want to add the value (0-%d) :",n+1);
	scanf("%d",&pos);
	if(pos==0) pos=1;
	if(pos>n+1||pos<1){
		printf("Invalid position !\n");
		return 0;
	}
	printf("Enter the value you want to add this position :");
	int value;
	scanf("%d",&value);
	Add_into_array(&a,value,pos,&n);
	printf("Upgrade array :");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void Add_into_array(int **a,int value,int pos,int *n){
	*a=(int *)realloc(*a,(*n+1)*sizeof(int));
	for(int i=*n;i>=pos;i--){
		(*a)[i]=(*a)[i-1];
	}
	(*a)[pos-1]=value;
	*n+=1;
}