#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct{
    int lin,col;
    char ** Case;
}matrice;

void setCase(matrice * m, int l, int c);

//Fonction initialisant un "monde" a vide en prenant un monde en parametre ainsi que ses dimensions
void initEmptyQueen (matrice * m){

    int i,j;
    (*m).lin = 8;
    (*m).col = 8;

    //Allocation de la memoire pour le tableau qui en "accueillera"
    //d autre creant ainsi une matrice
    (*m).Case = malloc((*m).lin * sizeof (char*));


    //Allocation de la memoire des tableaux definissant ainsi les lignes de notre "echiquier"
    for(i=0;i<(*m).lin;i++){
        (*m).Case[i] = malloc((*m).col * sizeof(char*));
        for (j=0;j<(*m).col;j++){
            setCase(m,i+1,j+1,' '); //Voir le partie pris dans la fonction setCase pour expliquer ces "i+1" et "j+1"
        }
    }
}

//Fonction affichant le "echiquier" dans le terminal
void print(matrice * m){
  int i,j;
  system("cls");                       //efface le contenu de la console permettant un affichage moins pollue
  for(i=0;i<=((*m).lin)-1;i++){         //on parcours chaque ligne du monde
    for(j=0;j<=((*m).col)-1;j++){             //on parcours chaque colonne du monde
      printf("|");
      printf("%c",(*m).Case[i][j]);   //on affiche la cellule de coordonee (i,j)
    }
    printf("|\n");
  }
  printf("\n");
}

//Fonction inserant(remplace la valeur actuel) une reine a une position [i,j] de notre "echiquier"
void setCase(matrice * m, int l, int c, char ){
    (*m).Case[l-1][c-1] = 'x'; //Partie pris permettant une utilisation "plus simple" de la fonction celon le contexte
}

int main(void) {
  int * solution[8];
  matrice m; 

  initEmptyQueen(&m);
  print(&m);   

  return 0;
}