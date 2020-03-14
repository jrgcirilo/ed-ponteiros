#include <stdio.h>

int fatorial(int num) {
    if (num >= 0) {
        int fat = 1;
        while (num > 0) {
            fat *= num;
            num--;
        }
        return fat;
    } else {
        return -1;
    }
}

int main() {
	int fat, *pfat;
	
	pfat=&fat;
	
	scanf("%d",&pfat);
	printf("O fatorial de %d e %d\n",pfat,fatorial(pfat));
	return 0;
}
