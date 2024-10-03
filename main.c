#include <stdio.h>

int main(void) {
    int giorno,mese,anno;
    printf("inserisci i giorni :");
    scanf("%d",&giorno);
    printf("inserire mese:");
    scanf("%d",&mese);
    printf("inserire anno:");
    scanf("%d",&anno);
    if(mese == 4 || mese == 6 || mese == 9 || mese == 11 && giorno < 31)  {
        printf("la data e corretta ");
    }
    else if(mese==2 && giorno < 30 ) {
        printf("la data e corretta ");
    }
    else if (mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 && giorno < 32) {

        printf("la data e corretta ");
    }
    else {
        printf("la data e errata");
    }
    return 0;
}
