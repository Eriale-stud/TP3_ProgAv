#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct{
    int lin,col;
    char ** Case;
}matrice;

//Fonction initialisant un "monde" a vide en prenant un monde en parametre ainsi que ses dimensions
void initEmptyQueen (matrice * m){

    int i,j;
    (*m).lin = 8;
    (*m).col = 8;

    //Allocation de la memoire pour le tableau qui en "accueillera"
    //d autre creant ainsi une matrice
    (*m).Case = malloc(L * sizeof (char*));


    //Allocation de la memoire des tableaux definissant ainsi les lignes de notre matrice "monde"
    for(i=0;i<L;i++){
        (*m).Case[i] = malloc(C * sizeof(char*));
        for (j=0;j<C;j++){
            setCase(m,i+1,j+1,' '); //Voir le partie pris dans la fonction setCell pour expliquer ces "i+1" et "j+1"
        }
    }
}

int main(void) {
  int * solution[8];
  matrice m; 

    

  return 0;
}