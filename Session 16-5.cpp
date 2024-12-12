#include<stdio.h>

void upgrade_array(int *a,int value,int pos);
int main(){
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	int pos;
	printf("Enter position where you want to chance the value (1-%d) :",n);
	scanf("%d",&pos);
	if(pos>n||pos<1){
		printf("Invalid position !\n");
		return 0;
	}
	printf("Enter the value you want to chance this position :");
	int value;
	scanf("%d",&value);
	upgrade_array(a,value,pos);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void upgrade_array(int *a,int value,int pos){
	a[pos-1]=value;
}


