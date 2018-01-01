#include <stdio.h>

int b,c,d=0;
int a;

int main()
{                       
  do {  
    a=getchar();                           
    scanf("\n%d %d",&b,&c);     
    if (a=='+'){
        d=b+c;   
        printf("%d\n",d);
        continue;
        }          
    if (a=='-') {
        d=b-c;  
        printf("%d\n",d);
        continue;
        }                
    if (a=='*') {
        d=b*c;
        printf("%d\n",d);
        continue;
        }                  
    if (a=='/') {
        if (c==0) continue;
        else d=b/c;
        printf("%d\n",d);
        }
    if (a=='%') {
        d=b%c;
        printf("%d\n",d);
        continue;
        } 
  } while ((a=getchar())!= EOF);

system("pause");   
return 0;
}
