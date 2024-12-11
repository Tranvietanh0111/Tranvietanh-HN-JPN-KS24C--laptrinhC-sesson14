#include<stdio.h>
#include<string.h>

int main(){
	char arr[10]="alo ban";
	printf("chuoi ban dau: %s",arr);
	char a;
	int count=0;
	printf("\nnhap 1ki tu:");
	scanf("%c",&a);
	for(int i=0;i<strlen(arr);i++){
		if(arr[i]==a){
			count++;
		}
	}
	printf("so lan xuat hien cua ki tu %c trong chuoi %d: ",a,count);

	return 0;
}



