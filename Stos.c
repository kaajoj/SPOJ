// STOS

#include <stdio.h>

int tab[10];
int i=0,j=0;
int a,b;        // for switch

int main()
{
    do
    {
        a=getchar();
        if (a=='+')
        {
            scanf("%d",&b);
            if(i==10){
                printf(":(\n");
                }
            else {

                tab[i]=b;
                i++;
                printf(":)\n");
                continue;
            }
        }
        if (a=='-')
        {
            if(i==0){
                printf(":(\n");
                }
            else {
                i--;
                printf("%d\n",tab[i]);
                tab[i]=0; // nie trzeba
                continue;
            }
        }
    } while ((a=getchar())!= EOF);

return 0;
}
