#include <stdio.h>
int main()
{
    char T[5][5] =
    {
        {'1','2','3','4','5'},
        {'7','a','c','8','d'},
        {'c','9','4','z','8'},
        {'5','6','p','n','3'},
        {'2','9','t','m','k'}
    };
    int M[4][4] , i , j , n = 0 ;
    int X ;    
    //Afichage de la matrice T:
    for(i = 0 ; i < 5 ; i++)
    {
     printf("\n");
        for(j = 0 ; j < 5 ; j++)
                   
            printf("%c\t",T[i][j]);
            
     }  
        printf("\n\n");
    //Afichage des lignes d'indice pair:
     for(i = 0 ; i < 5 ; i += 2)
     {
         for(j = 0 ; j < 5 ; j ++)
           printf("%c\t",T[i][j]);  
         
         printf("\n");
     }  
     printf("\n\n");
    //Afichage des lignes d'indice impair:
     for(i = 2 ; i < 5 ; i++ )
     {
         for(j = 0 ; j < 5 ; j ++)
           printf("%c\t",T[i][j]);  
         
         printf("\n");
     }  
     printf("\n\n");   
     //Afichag de la diagonale de gouche a        droite :
     for(i = 0 ; i < 5 ; i++)
     {
         for(j = 0 ; j <= i ; j++)
            printf("%c\t",T[i][j]);
        
         printf("\n");
     }
        printf("\n\n");
     for(i = 0 ; i < 5 ; i++)
     {  
        for(j = i ; j < 5 ; j++) 
          printf("%c\t",T[i][j]);
          printf("\n");
        for (n = 0 ; n <= i ; n++)
             printf("\t");
     }
        
    printf("\n\n");
    //Changement entre le triangle supérieur      et inférieur :
     n=1;
     for(i = 0 ; i < 4 ; i++)
     {
        for(j = 0 ; j < 4 ; j++)
        {
           M[i][j]=n;
           n++;
           printf("%d\t",M[i][j]);
        }
         printf("\n");
     }
    
    printf("\n\n");
    
    for(i = 0 ; i < 4 ; i++)
    {
       for(j = 0 ; j < i ; j++)
       {   
            X=M[i][j];
            M[i][j]=M[j][i];
            M[j][i]=X; 
       }   
                           
    }
    for(i = 0 ; i < 4 ; i++)
    {
      for(j = 0 ; j < 4 ; j++)
        
          printf("%d\t",M[i][j]);
           
      printf("\n");
    }
        return 0;
}





