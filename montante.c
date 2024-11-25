#include <stdio.h>
int main(void) {
int capital;
int juros;
int periodo;
int i;
float montante;

printf("insira o capital:");
scanf("%d", &capital);

printf("insira os juros mensais:");
scanf("%d", &juros);

printf("insira o período:");
scanf("%d", &periodo);

for(i=1; i<=periodo; i++) {

montante=capital+juros;
printf("\no montante do mes %d e %f",i, montante);

}

}