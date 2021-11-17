#include<stdio.h>
int x,m,i;
void saisi() {
	printf("Entrer un nombre positif : ");
	scanf("%d",&x);
	if(x<=0){
		printf("Le nombre n\'est pas positif\n");
		saisi();
	}
}
void mutli (){
	for(i=1;i<=10;i++){
		printf("%d * %d =%d\n",x,i,x*i);
	}
}



void cube(int a){
	printf("Entrer un nombre : ");
	scanf("%d",&a);
	printf("Le cube de %d est : %d\n",a,a*a*a);	
}

int main() {
	int a;
	saisi();
	printf("la tableau de multiplication de %d\n",x);
	mutli();
	printf("-------------------------\n");
	cube(a);

	return 0;
}

