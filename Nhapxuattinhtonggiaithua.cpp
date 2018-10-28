#include<stdio.h>
#include<math.h>
#include<conio.h>
void Nhapmang(int M[100],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d \n ",i+1);
		scanf("%d",&M[i]);
	 }
	 
}
void Inmang(int M[100],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("Gia tri phan tu thu %d :%d \n ",i+1,M[i]);
		
	}
}

int Giaithua(int n){
	int gt=1;
	for(int j=1; j<=n;j++)
	{
		gt=gt*j;
		
	}
	return gt;
}
float Tinhtong(int M[100], int n){
	float gt;
	int Tong=0;
	for(int j=0;j<n;j++)
	{
		gt =Giaithua(M[j]);
		Tong=Tong+gt;
	}
	printf("%d",Tong);
}
int main ()
{
 	int M[100];
	int n;
	printf("Nhap so phan tu trong mang : \n");
	scanf("%d",&n);
	Nhapmang(M,n);
	Inmang(M,n);
	printf("Tong Giai Thua Ban Nhap la:"); Tinhtong(M,n);  
}
