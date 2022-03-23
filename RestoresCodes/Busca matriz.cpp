#include <stdio.h>
#include <stdlib.h>
#define linhas 4
#define colunas 4


int main() {
   
   int M[linhas][colunas],i,j,num,cont=0; 
   
   
      for(i=0;i<linhas;i++){
   	
   		for(j=0;j<colunas;j++){
   			
   			 printf("\nInforme o Numero da Linha %d Coluna %d\n",i,j);
   			 scanf("%d",&M[i][j]);
			
			 }
						
		   }
		   
	 printf("\nInforme o Numero que deseja buscar na Matriz %d\n",i,j);
   			 scanf("%d",&num);
	
	 	   
   	   for(i=0;i<linhas;i++){
   	   	   	   	  	
   		for(j=0;j<colunas;j++){
   			
   			 if (M[i][j] == num){
   			
			   printf("\n NUMERO %d ENCONTRADO NA LINHA %d COLUNA %d", num,i,j);	
   			   cont++;
				}
   			    			   			
		   }   	  	
   }
   			if (cont==0){
   				
   				printf("\n NUMERO %d NAO FOI ENCONTRADO NA MATRIZ",num); 
			   }
     

      
    return 0;
}



