#include <stdio.h>
             
int i,j,n;                            
int lo,c;
int czas;
int pudelka;
int ciastka;
int reszta;

int main()
{            
    scanf("%d/n",&n);    
    
    for(i=0; i<n; i++)
       {
            scanf("%d %d/n",&lo, &c);
                    for(j=0; j<lo; j++)
                    {
                        scanf("%d/n",&czas);
                        ciastka=(86400/czas);
                        pudelka+=ciastka;              
                    }
                reszta=pudelka%c;
                pudelka=(pudelka/c);
                if (reszta!=0) pudelka+=1;
            
                 
            printf("\n%d\n",pudelka);
             
            pudelka=0;
         }     
 
    printf("\n\n"); 
    system("pause");

return 0;
}
