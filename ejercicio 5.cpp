#include<stdio.h>
#include<stdlib.h>
int main(){
float a,b,c;
printf("digite la edad del cliente:");
scanf("%f",&a);
if (a<10){
	b=.6*75;
	c=75-b;
	printf("el voleto vale: %.2f",c);
}
else if (a>60){
	b=.55*75;
	c=75-b;
	printf("el voleto vale: %.2f",c);
}
else{
	printf("el voleto vale: $75.");
}





}
