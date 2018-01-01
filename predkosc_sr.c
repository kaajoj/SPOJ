#include <stdio.h>
             
int i=0;  
tab[1000];       
int t=0;                             
int v1=0;
int v2=0;
int srednia=0;

int main()
{            
    scanf("%d/n",&t);    
    
    for(i=0; i<t; i++)
            {
            scanf("%d %d/n",&v1, &v2);
            srednia=(2*v1*v2)/(v1+v2);
            tab[i]=srednia;   
            }     
    for(i=0; i<t; i++)
      printf("\n%d",tab[i]);                                         
    
    printf("\n\n"); 
    system("pause");

return 0;
}
