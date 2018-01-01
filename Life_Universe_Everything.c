#include <stdio.h>
             
int a=0;             
int tab[100];                 
int i=0;
int j=0; 

int main()
{               
        while(a!=42)                                         
        {
            scanf("%d \n",&a);  
            tab[i]=a;                                     
            i++;                                           
        }                                                  
        
        for(j=0; j<i-1; j++)
             {                                                         
             printf("%d \n",tab[j]);                             
             }                                               
    
     printf("\n\n"); 
     system("pause");

return 0;
}
