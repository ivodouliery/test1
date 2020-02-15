#include<stdio.h>


int Somme(int n) {
    int i=0,total=0; for(i=1;i<=n;i++)
    total = total + i; return (total);
}


int main() {
    int x=0;
    printf("Donnez un entier positif: ");
    scanf("%d",&x);
    printf("La somme des entiers de 1 a %d est %d\n",x,Somme(x)); return 0;
}