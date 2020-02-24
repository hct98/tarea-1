#include<stdio.h>
#include<stdlib.h>

int main(){
	
float z,b,a,t,h;
int opt;
printf("1:Area del triangulo\n 2:Area del rectangulo\n 3:area del trapecio");
printf("\nseleccione una opcion:");
scanf("%d",&opt);	
	printf("ingrese la base:");
	scanf("%f",&b);
	printf("ingrese la altura:");
	scanf("%f",&a);
if(opt==1){
	z=b*a/2;
	
}
else if(opt==2){
	z=b*a;
}
printf("el area es:%.3f",z);

else if (opt==3){
	while(3==0){
		printf("ingrese lado mayor y lado menor del trapecio:");
	scanf("%f %f",&t,&h);
	}

	z=t+h*a;
	
}
	printf("\nel area es: %f",z);
	
	
}
