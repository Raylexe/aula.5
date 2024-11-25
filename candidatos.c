#include <stdio.h>
int main(void) {
char a=0;
char b=0;
char c=0;
int eleitores;
int i;
char voto;

printf("insira a quantidade de eleitores:");
scanf("%d", &eleitores);

for(i=1; i<=eleitores; i++) {

printf("\nQual o seu voto?");
scanf("%c", &voto);
scanf("%c", &voto);

if(voto=='a'){
    a++;
} if(voto=='b'){
    b++;
} if(voto=='c'){
    c++;
}
printf("%c", voto);

}
printf("\ncandidato A recebeu %d votos", a);
printf("\ncandidato B recebeu %d votos", b);
printf("\ncandidato C recebeu %d votos", c);
}