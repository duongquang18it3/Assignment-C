#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char chuoi[50];
	printf("nhap chuoi: ");
	gets(chuoi);
	printf("chuoi vua nhap la:");
	puts(chuoi);
	int Dodai= strlen(chuoi);
	printf("So ki tu  la: %d",Dodai);
}
