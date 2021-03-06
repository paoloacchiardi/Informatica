/* Author: Acchiardi Paolo
Date: 28-04-2019
Es. 053: Data una matrice NRxNC creare il vettore riga di lunghezza NC contenente la somma delle colonne della matrice. */
#include<stdio.h>
#include<stdlib.h>
#define CMAX 1
void caricaMat(float mat[][CMAX], int righe,int colonne);
void Visualizzazionevettorefloat(float v[], int n);
int main(){
    int r,c,k,t;
    printf("Inserisci il numero di righe e di colonne: ");
    scanf("%d %d", &r, &c);
    float m[r][c];
    float colonna[c];
    for(k=0;k<c;k++){
        colonna[k]= 0;
    }
    caricaMat(m,r,c);
    for(k=0;k<c;k++){
        for(t=0;t<r;t++){
            colonna[k] = colonna[k] + m[t][k];
        }
    }
    Visualizzazionevettorefloat(colonna,r);
}

void caricaMat(float mat[][CMAX], int righe,int colonne){
    int x; int y;
    for(y=0;y<righe;y++){
        for(x=0;x<colonne;x++){
            printf("Inserisci il valore della cella [%d][%d]: ",y,x);
            scanf("%d", &mat[y][x]);
        }
    }
}

void Visualizzazionevettorefloat(float v[], int n){
        int k; //posizione del vettore
        for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
            printf("%.2f\n", v[k]); //stampa a video il valore contenuto nella posizione corrente del vettore
        }
}
