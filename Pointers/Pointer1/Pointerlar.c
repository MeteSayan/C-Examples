#include<stdio.h>

int main(){
	
	int a = 5, *ap;
	float b = 3.2, *bp;
	double c = 3.412, *cp;
	char d = 'a',*dp;	
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *arrayp;
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	
	arrayp = &sayilar[1];
	
	printf("%p adresindeki intin degeri %d dir\n",ap,*ap);
	printf("%p adresindeki floatin degeri %d dir\n",bp,*bp);
	printf("%p adresindeki doublein degeri %d dir\n",cp,*cp);
	printf("%p adresindeki charin degeri %d dir\n",dp,*dp);
	printf("%p adresindeki sayilarin 1. elemaninin degeri %d dir\n",arrayp,*arrayp);
					
	
	return 0;
}
