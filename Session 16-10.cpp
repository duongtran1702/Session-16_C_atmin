#include<stdio.h>
#include<stdlib.h>
void Delete_array(int **a,int pos,int *n);
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
	printf("\nEnter position where you want to delete the value (1-%d) :",n);
	scanf("%d",&pos);
	if(pos==0) pos=1;
	if(pos>n||pos<1){
		printf("Invalid position !\n");
		free(a);
		return 0;
	}
	Delete_array(&a,pos,&n);
	printf("Upgrade array :");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	free(a);
}
void Delete_array(int **a,int pos,int *n){
	for(int i=pos-1;i<*n-1;i++){
		(*a)[i]=(*a)[i+1];
	}
	*n-=1;
	*a=(int *)realloc(*a,*n*sizeof(int));
}








