#include<stdio.h>
#include<cs50.h>
int main(void)
{float f;int n=0;
do
{f=get_float("Change owed:");
}while(f<0);
 if(f!=0)
 {int a=f/0.25;
  n=n+a;
  f=f-(a*0.25);
 }
  if(f!=0)
 {int a=f/0.10;
   n=n+a;
  f=f-(a*0.10);
 }
  if(f!=0)
 {int a=f/0.05;
   n=n+a;
  f=f-(a*0.05);
 }
 if(f!=0)
 {int a=f/0.01;
   n=n+a;
 }

 printf("\n%d",n);

}
