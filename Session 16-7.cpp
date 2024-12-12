#include<stdio.h>

void arrange_array(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main(){
	int a[]={3,7,2,6,9,1};
	int n=sizeof(a)/sizeof(a[0]);
	arrange_array(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}