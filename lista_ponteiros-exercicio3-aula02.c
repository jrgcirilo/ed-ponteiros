#include<stdio.h>

void maior_numero_v1(int a,int b){
    if(a>b)
    printf("%d\n",a);
    else
    printf("%d\n",b);
}

//operador ternário
void maior_numero_v2(int a,int b){
    printf("%d\n",a>b ? a:b);
}

void maior_numero_v3(int a,int b){
    switch(a>b){
        case 0:
        printf("%d\n",b);
        break;
        default:
        printf("%d\n",a);
        break;
    }
}

int main(){
	int a, *pa, b, *pb;
	
	pa=&a;
	pb=&b;
	
	printf("Digite um valor:");
	scanf("%d",&pa);
	printf("Digite outro valor:");
	scanf("%d",&pb);
	
	maior_numero_v1(pa,pb);
	maior_numero_v2(pa,pb);
	maior_numero_v3(pa,pb);
	
	
	return 0;
}
