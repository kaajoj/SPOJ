#include <stdio.h>
int k,i,j,n,r1,r2,a;
int main()
{
scanf("%d",&k);
 for(j=0;j<k;j++) 
  {
    scanf("%d",&n);
    a=1;
    if(n<=1) a=1; 
    else if (n>=10) a=0;
    else
      {
        i=0;
        while(i<n)
        {
        a*=n-i;
        i++;
        }  
      } 
    r1=(a%100-a%10)/10;
    printf("%d ",r1);
    r2=a%10;
    printf("%d\n",r2);
   }   
   
printf("\n\n");
system("pause");

return 0;
}
