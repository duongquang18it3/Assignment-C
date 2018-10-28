#include<stdio.h>
#include<conio.h>

main (){
	float somoi, socu,tien,tieuthu;
	printf(" Nhap so moi");
	scanf("%f", & somoi);
	printf(" Nhap so cu ");
	scanf("%f", & socu);
	if (somoi>socu){
		tieuthu=somoi - socu;
	//so tieu thu nho hon 50 .	
	if (tieuthu<50) {
	tien=1500*tieuthu;
	printf("Tien la %f",tien);
    }
    //so tieu thu tu 50 den 100.
    else if(tieuthu>=50&&tieuthu<=100){
	
    	tien=49*1500+(tieuthu-49)*2000;
    	printf("Tien la %f",tien);
    }
    //so tieu thu lon hon 100.
	else {
		tien=49*1500+51*2000+(tieuthu-100)*3000;
    	printf("Tien la %f",tien);
	    }
	}
    else {
	
	printf ("Lam gi co chuyen so moi nho hon so cu, nhap lai di");
    }
}

