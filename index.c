/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
typedef struct{
    int jour;
    int mois;
    int annee;
}Date_echeance;
 typedef struct{
     char titre[50];
     char description[100];
     char priorite[10];
     Date_echeance date;
 }Tache;
     Tache ts[100];
     int Taille =0;
    
void ajouter(){
    printf("entre un titre:");
    scanf("%s",ts[Taille].titre);
    printf("donner une description:");
    scanf("%s",ts[Taille].description);
    int choix;
    do
    {
        printf("entre la priorite(1-high 2-low):");
        scanf("%d",&choix);
        switch (choix)
        {
            case 1:
            strcpy(ts[Taille].priorite,"high");
            break;
            case 2:
            strcpy(ts[Taille].priorite,"low");
            break;
           default:printf("choix invalide");
        }
    }while(choix!=1 && choix!=2);
  do{
     printf("Entrer le jour (1 a 31):");
    scanf("%d",&ts[Taille].date.jour); 
        if(ts[Taille].date.jour>=1 && ts[Taille].date.jour<=31 ){ 
        }
        else{
            printf("le jour est invalide, \n");
        }
        }while (ts[Taille].date.jour<1 || ts[Taille].date.jour>31);
do{
    printf("donner le mois:");
    scanf("%d",&ts[Taille].date.mois);
    if(ts[Taille].date.mois>=1 && ts[Taille].date.mois<=12){
    }
    else{
        printf("le mois est invalide  \n");
    }
}while (ts[Taille].date.mois<1 || ts[Taille].date.mois>12);

do{
    printf("donner l'annee:");
    scanf("%d",&ts[Taille].date.annee);
    if(ts[Taille].date.annee>=2024){
        
    }
    else{
        printf("annee est invalide \n");
    }
}while (ts[Taille].date.annee<2024);
    Taille++;   
    printf("Ajout de taches est reussi");
}

void afficher()
{
    if(Taille==0){
        printf("aucun taches disponibles!!");
        return;
    }
    int i;
    for(i=0;i<Taille;i++){
    printf("le titre est :%s\n",ts[i].titre);
    printf("la description est :%s\n",ts[i].description);
    printf("la priorite est :%s\n",ts[i].priorite);
    printf("le jour est :%d\n",ts[i].date.jour);
    printf("le mois est :%d\n",ts[i].date.mois);  
    printf("l'annee est :%d\n",ts[i].date.annee);
    }
}


void menu(){
    printf("\n Menu\n");
    printf("1.ajouter\n");
    printf("2.afficher\n");
    printf("3.modifier\n");
    printf("4.supprimer\n");
    printf("5.filtre \n");
    printf("6.quitter\n");
}

int main()
{
    int p;
  do {
    menu();
    printf("choisissez une option :");
    scanf("%d",&p);
   
        switch (p) {      
        case 1:
        ajouter();
        break;
        case 2: 
        afficher();
        break;
        default:
        printf("option invalide\n"); 
        }
 
   } while(p != 5);
    return 0;
}





