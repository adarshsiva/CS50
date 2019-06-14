#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
 do
 {
  n=get_int("Height :");
 }while(n<0 ||n>23);
  int k=n-1;
  int j=2;
 for(int h=0;h<n;h++)
  {for(int i=0;i<k;i++)
    { printf(" ");
    }
    k--;
    for(int p=0;p<j;p++)
    {printf("#");
    }
    j++;printf("\n");
  }
}