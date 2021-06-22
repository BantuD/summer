#include<stdio.h>
#define SIZE 3 //Array size
int main()
{
    int arr[SIZE]={2,3,1}; //input
    int pp[SIZE];
    int p[SIZE];
    int i,j,temp;
    for(i=0;i<SIZE;i++)
    {
        p[i]=i+1;
    }
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
          if(arr[i]<arr[j])
          {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;

          temp=p[i];
          p[i]=p[j];
          p[j]=temp;
          j=0;
          }

        }
    }
    for(i=0;i<SIZE;i++)
    {
      for(j=0;j<SIZE;j++)
      {
         if(p[i]==arr[j])
         {

             pp[i]=p[j];
         }
      }
    }
    for(i=0;i<SIZE;i++)
    {
        printf("%d\n",pp[i]);
    }
 return 0;
}
