#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int gioco(); // function prototype

int main(){
gioco(); // chiamata della funzione gioco all'interno di main
system("PAUSE"); // f
}


int gioco(){
    int giocatorescelta = 0; // variabile che contiene l'input del giocatore
    int avversarioscelta = 0; // variabile che contiene la risposta avversaria
    int pareggio = 0; // variabile che conta quante volte si è pareggiato
    int contatorepunti2 = 0; // contatore dei punti avversari
    int contatorepunti1 = 0; // contatore dei punti giocatore
    srand(time(NULL));

printf("%s", "wins whoever reach first 3 points\n");
    
    while (contatorepunti1<3 && contatorepunti2<3){
        printf("rock, paper or scissors? (1=rock, 2=paper, 3=scissors): ");
        scanf("%d", &giocatorescelta);
        if (giocatorescelta > 3 || giocatorescelta < 1) {
            printf("Invalid Choice, you have to insert a number between 1 and 3\n");
            break;
        }
        
        // 1 sasso, 2 carta, 3 forbice
        avversarioscelta = 1 + rand() % 3;
        if (giocatorescelta==1){
            switch (avversarioscelta){
                case 1:
                ++pareggio;
                printf("Rock, it's a tie\n");
                break;
                case 2:
                ++contatorepunti2;
                printf("Paper, you lost\n");
                break;
                case 3:
                ++contatorepunti1;
                printf("Scissors, you win\n");
                break;
            }

        }
        
        if (giocatorescelta==2){
            switch (avversarioscelta){
                case 1:
                ++contatorepunti1;
                printf("Rock, you win\n");
                break;
                case 2:
                ++pareggio;
                printf("Paper, it's a tie\n");
                break;
                case 3:
                ++contatorepunti2;
                printf("Scissors, you lost\n");
                  break;
            }
        }

        if (giocatorescelta==3){
            switch (avversarioscelta){
                case 1:
                ++contatorepunti1;
                printf("Rock, you lost\n");
                break;
                case 2:
                ++contatorepunti1;
                printf("Paper, you win\n");
                 break;
                case 3:
                ++pareggio;
                printf("Scissors, it's a tie\n");
                break;
            }
        
            
        }

    
    }


    
    if (contatorepunti1>contatorepunti2){
        printf("Congratulations, you won!\n");
        printf("Player : %d \nOpponent: %d\n", contatorepunti1, contatorepunti2);
        printf("you drew: %d times \n", pareggio);
    }
    else{
        printf("You lost, :(\n");
        printf("Player : %d \nOpponent: %d\n", contatorepunti1, contatorepunti2);
        printf("you drew: %d times \n", pareggio);

        }
    
}
