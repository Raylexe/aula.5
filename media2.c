#include <stdio.h>
int main(void) {
int alunos;
float nota;
float soma=0;
int i;
float media;

printf("insira a quantidade de alunos:");
scanf("%d", &alunos);

for(i=1; i<=alunos; i++) {

printf("nota do %d aluno:", i);
scanf("%f", &nota);

soma = soma + nota;

}
media=soma/alunos;
printf("%f", media);

}