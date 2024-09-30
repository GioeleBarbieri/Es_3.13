#include <stdio.h>

int main(void)
{
    int g1, m1, a1, g2, m2, a2;

    printf(" inserisci il giorno della prima data (in numero): ");
    scanf("%d", &g1);
    printf("inserisci il mese della prima data (in numero): ");
    scanf("%d", &m1);
    printf("inserisci l'anno della prima data: ");
    scanf("%d", &a1);



    printf("inserisci il giorno della seconda data (in numero): ");
    scanf("%d", &g2);
    printf("inserisci il mese della seconda data (in numero): ");
    scanf("%d", &m2);
    printf("inserisci l'anno della seconda data: ");
    scanf("%d", &a2);


    if ((a1*10000 + m1*1000 + g1*10)>(a2*10000 + m2*1000 + g2*10))
    {
        printf("la data piu' recente e' la prima");
    }

    if((a1*10000 + m1*1000 + g1*10)<(a2*10000 + m2*1000 + g2*10))
    {
        printf("la data piu' recente e' la seconda");
    }
    return 0;

}
