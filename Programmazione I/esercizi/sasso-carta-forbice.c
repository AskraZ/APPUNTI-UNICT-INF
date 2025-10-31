#include <stdio.h>
#include <stdlib.h>
// Funzione che gestisce una partita di sasso, carta, forbice tra un giocatore e un avversario virtuale.
//4 Restituisce 0 al termine della partita.
int gioco(); // prototipo di funzione

int main(){
gioco();
system("PAUSE");
}


int gioco(){
    int giocatorescelta = 0; // variabile per la scelta del giocatore 
    unsigned int seed; // seed randomizzato per la generazione della risposta avversaria
    int avversarioscelta = 0; // variabile per la scelta dell'avversario
    int pareggio = 0; // inizializza a zero per evitare comportamento indefinito
    int contatorepunti2 = 0; // contatore punti avversario
    int contatorepunti1 = 0; // contatore punti giocatore

    srand(seed);
    printf("%s", "si vince alla meglio di 3\n");
    while (contatorepunti1<3 && contatorepunti2<3){
        printf("sasso, carta o forbice? (1=sasso, 2=carta, 3=forbice): ");
        scanf("%d", &giocatorescelta);
        if (giocatorescelta > 3 || giocatorescelta < 1) {
            printf("Scelta non valida. Inserisci un numero tra 1 e 3.\n");
            break;
        }
        
        // 1 sasso, 2 carta, 3 forbice
       avversarioscelta = 1 + rand() % 3;
       
      
      if (giocatorescelta==1){
            switch (avversarioscelta){ 
                case 1:
                ++pareggio;
                printf("Sasso, avete pareggiato\n");
                break;
                case 2:
                ++contatorepunti2;
                printf("carta, hai perso\n");
                break;
                case 3:
                ++contatorepunti1;
                printf("forbice, hai vinto\n");
                break;
            }

        }
        
        if (giocatorescelta==2){
            switch (avversarioscelta){
                case 1:
                ++contatorepunti1;
                printf("Sasso, hai vinto\n");
                break;
                case 2:
                ++pareggio;
                printf("Carta, avete pareggiato\n");
                break;
                case 3:
                ++contatorepunti2;
                printf("forbice, hai perso\n");
                  break;
            }
        }

        if (giocatorescelta==3){
            switch (avversarioscelta){
                case 1:
                ++contatorepunti1;
                printf("Sasso, hai perso\n");
                break;
                case 2:
                ++contatorepunti1;
                printf("Carta, hai vinto\n");
                 break;
                case 3:
                ++pareggio;
                printf("Forbice, avete pareggiato\n");
                break;
            }
        
            
        }

    
    }


    
    if (contatorepunti1>contatorepunti2){
        printf("Congratulazioni, hai vinto!");
    }
    else{
        printf("Che peccato, hai perso!");
    }

    
}
