#include <stdio.h>
int long a,b,n,i,j,c;
int main()
{
scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d %d",&a,&b);
    if ((a%10)==1 || (a%10)==0 || (b%10)==1 || (b%10)==0)
     {
      if ((a%10)==1) c=1;
      if ((a%10)==0) c=0;
      if ((b%10)==1) c=a%10;
      if ((b%10)==0) c=a%10;
      printf("%d\n",c);
     }
   else if ((a%10)==2) {
       if ((b%10)%2==0) c=6;
       if ((b%10)%4==0) c=4;
       if (((b-1)%10)%2==0) c=2;
       if (((b-1)%10)%4==0) c=8;
       printf("%d\n",c);
    }
       else if ((a%10)==3) {
       if ((b%10)%2==0) c=9;
       if ((b%10)%4==0) c=1;
       if ((b%10)%2==1) {
       if (((b-1)%10)%2==0) c=7;
       if (((b-1)%10)%4==0) c=3;
       }
       printf("%d\n",c);
    }
    else if ((a%10)==4) {
       if ((b%10)%2==0) c=6;
       if ((b%10)%2==1) c=4;
       printf("%d\n",c);
    }
    else if ((a%10)==5) {
       c=5;
       printf("%d\n",c);
    }
    else if ((a%10)==6) {
       c=6;
       printf("%d\n",c);
    }
    else if ((a%10)==7) {
       if ((b%10)%2==0) c=9;
       if ((b%10)%4==0) c=1;
       if ((b%10)%2==1) {
       if (((b-1)%10)%2==0) c=3;
       if (((b-1)%10)%4==0) c=7;
       }
       printf("%d\n",c);
    }
    else if ((a%10)==8) {
       if ((b%10)%2==0) c=4;
       if ((b%10)%4==0) c=6;
       if ((b%10)%2==1) {
       if (((b-1)%10)%2==0) c=2;
       if (((b-1)%10)%4==0) c=8;
       }
       printf("%d\n",c);
    }
    else if ((a%10)==9) {
       if ((b%10)%2==0) c=1;
       if ((b%10)%2==1) c=9;
       printf("%d\n",c);
    }
}
return 0;
}
