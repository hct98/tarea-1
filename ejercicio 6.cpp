#include<stdio.h>
#include<stdlib.h>

int main(){
	float a,b;
	printf("digite un numero:");
	scanf("%f",&a);
	if(a<=0){
		b=a+3;
	}
	else if(a>0){
		b=a*a+2*a;
	}
	printf("el resultado es:%.2f",b);
}
