#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reserved_string(char *input_str,char *reserved_str);
int main(){
	char input_str[100];
	printf("Enter string :");
	fgets(input_str,100,stdin);
	input_str[strcspn(input_str,"\n")]='\0';
	size_t len=strlen(input_str);
	char *reserved_str;
	reserved_str=(char*)calloc(len+1,sizeof(char));
	reserved_string(input_str,reserved_str);
	printf("%s",reserved_str);
	free(reserved_str);
}

void reserved_string(char *input_str,char *reserved_str){
	size_t len =strlen(input_str);
	for(int i=0;i<len;i++){
		reserved_str[i]=input_str[len-i-1];
	}
	reserved_str[len]='\0';
}