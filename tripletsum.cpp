#include<iostream>

using namespace std;

int main()
{
  int a[5]={1,2,3,4,5};
  int m=12;

  for(int i=0;i<5;i++)
  {
      for(int j=i+1;j<5;j++)
       {

         for(int k=j+1;k<5;k++)
            {  if(a[i]+a[j]+a[k]==m)
               {
               cout<<a[i]<<a[j]<<a[k]<<endl;
               }
            }
        }
  }
    return 0;
}