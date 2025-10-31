#include <stdio.h>
#include <stdbool.h>


int main(void){

int counter; // contatore per il ciclo dei voti
int numerovoti; // variabile che contiene il numero di voti da inserire
double voti = 0.0; // variabile che contiene la somma dei voti
double voto;    // variabile che contiene il voto inserito dall'utente
double media;   // variabile che contiene la media dei voti


while(true){ // ciclo che si assicura che l'utente scriva minimo due voti
printf("quanti numeri devi calcolare?: ");
scanf("%d", &numerovoti);


    if (numerovoti>=2){
        break;
}

puts("DEVI AGGIUNGERE ALMENO 2 VOTI");
}

counter = 0;
while (counter<numerovoti) // ciclo che calcola la somma dei voti
{
printf("inserisci il voto: ");
scanf("%lf", &voto);
voti += voto;
counter += 1;
}

media = voti/numerovoti; // calcolo della media

printf("la tua media è %.2lf \n", media);

}
