#include<stdio.h>
#include<stdlib.h>
int main(){
float a,b;

printf("digite 2 valores:");
scanf("%f %f",&a,&b);
if (a > b){
	printf("el valor mayor es: %.2f",a);
}
else if (b>a){
	printf("el valor menor es: %.2f",a);
	
}

else{
	printf("los valores son iguales.");
}





}
