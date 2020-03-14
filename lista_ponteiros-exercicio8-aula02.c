#include <stdio.h>

int primo (int n) {
int i;
for(i=2; i<n; i++) {
if(n==2)
return 1;
if (n%i!=0)
continue;
else
return 0;
}
return 1;
}

int main() {
int n,*pn;

pn=&n;

scanf("%d",&pn);
printf("%d\n",primo(pn));
return 0;
}
