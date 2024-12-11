#include<stdio.h>
#include<string.h>

int main(){
	char arr[10]="alo ban";
	char rra[10];
	int length=strlen(arr);
	for(int i=0;i<length;i++){
		rra[i]=arr[length-1-i];
	}
	printf("chuoi sau khi dao nguoc la: %s",rra);

	return 0;
}



