#include <stdio.h>

int main(void) {
    int voto = 0;
    int totale = 0;
    int media = 0;
    int i;
    printf("Inserisci il numero dei voti da sommare: \n");

    for (i = 0; voto != -1; i++) {
        scanf("%d", &voto);
        if (voto != -1) {
            totale += voto;
        }
    }

    media = totale / i;

    printf("Media = %d\n", media);




    return 0;
}
