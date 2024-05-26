#include <stdio.h>

void fonctionBoucles(int nombresDeBoucles){

    int cpt = 0;
    int compteur;

    while (cpt < nombresDeBoucles)
    {
        printf("essai des boucles \n");
        cpt++;
    }

    for (compteur = 0 ; compteur < nombresDeBoucles ; compteur++)
    {
        printf("essai des fors \n");
    }
}


void fonctionDeBase(){

    int a,b,c;
    float nbrFloat,result;
    a=10;
    printf("voici la variable a : %d\n",a);
    printf("rentrez la variable b : ");
    scanf("%d",&b);
    printf("variable b : %d\n",b);
    if (b >= 20){
        printf("rentrez un nombre a virgule : ");
        scanf("%f",&nbrFloat);
        printf("\n");
        result = b+nbrFloat;
        printf("le resultat de b et le chiffre a virgule est : %f\n",result);
        c = 5 % 2;
        printf("modulo : %d",c);
    } else{
        printf("variable b en dessous de 20");
    }
}

void decoupeMinutes(int* heures, int* minutes)
{
    *heures += *minutes / 60;
    *minutes = *minutes % 60;
}
