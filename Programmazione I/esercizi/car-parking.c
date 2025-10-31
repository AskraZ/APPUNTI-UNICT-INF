#include <stdio.h>
#include <math.h>


double calcoloprezzo(double h){
    double charge;
    if(h<3.00){
        charge = 2.00;
    }
    else if(h<19.00){
        charge = 2.00 + 0.50*ceil(h-3.00);
    }
    else{
        charge=10.00;
    }
    return charge;
}

int main(){

    int cars;
    printf("quante macchine ci sono nel parcheggio: ");
    scanf("%d", &cars);
    printf("quante ore sono rimaste? \n");

    double h;
    int first=1;
    double prezzotot;

    for(int i=1;i<=cars;++i){
        printf("%s%d%s","macchina ",i,": ");
        scanf("%lf",&h);
        double charge=calcoloprezzo(h);
        prezzotot = prezzotot + charge;

    if(first==1){
     printf("%5s%12s%15s","Macchina","Ore","Prezzo\n");
        }
                first=0;

    printf("%5d%15.2lf%15.2lf\n",i,h,charge);
    }

    printf("%s%1.2f", "il guadagno totale è: ", prezzotot);
}
