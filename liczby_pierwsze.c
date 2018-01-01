#include <stdio.h>

int n,i,j,a,k;

int main()
{            
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        scanf("%d",&a);
       
        for(j=2;j<a;j++)
            {
                if(a%j==0) k=1; 
            }
        if(a>1 && k!=1) 
        printf("TAK\n"); 
        else printf("NIE \n"); 
        k=0;
     
       } 

 
    printf("\n\n"); 
    system("pause");

return 0;
}
