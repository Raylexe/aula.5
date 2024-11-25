#include <stdio.h>
int main(void) {
int pacientes;
int idade;
int i;
int idoso;
idoso=0;


printf("insira a quantidade de pacientes:");
scanf("%d", &pacientes);

for(i=1; i<=pacientes; i++) {

printf("idade do paciente %d: ", i);
scanf("%d", &idade);

if(idoso<idade){

    idoso=idade;
}

}

printf("o paciente com %d anos e o mais velho", idoso);

}