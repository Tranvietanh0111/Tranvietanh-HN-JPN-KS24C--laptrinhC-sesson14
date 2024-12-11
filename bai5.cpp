#include<stdio.h>
#include<string.h>

int main(){
	char arr[50]="alo ban ban khoe khong";
	printf("chuoi ban dau: %s",arr);
	int count=0;
	int endWord=0;
	for(int i=0;i<strlen(arr);i++){
		if(arr[i]==' ' || arr[i]=='\t'){
			endWord=0;
		}
		if(endWord==0){
			endWord=1;
			count++;
		}
	}
	printf("\nso tu trong chuoi :%d ",count);

	return 0;
}



