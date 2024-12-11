#include<stdio.h>
#include<string.h>
int main(){
	int choice;
	int length;
	char a[50];
	printf("\nvui long nhap chuoi:");
	fgets(a, 50, stdin);
	length = strlen(a);
	printf("do dai chuoi la: %d",length);
	printf("\nchuoi ki tu la: %s ",a);
return 0;
}


