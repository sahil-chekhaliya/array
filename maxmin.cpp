#include<iostream>

using namespace std;

int max(int num[],int n)
{
  int m=0;
  for(int i=0;i<n;i++)
  {

    if(num[i]>m)
    {

        m=num[i];
    }
  }
  
  return m;

}

int min(int num[],int n,int max)
{
 int min=max;
  for(int i=0;i<n;i++)
  {

    if(num[i]<min)
    {

        min=num[i];
    }
  }
  
  return min;

}


int main()
{
   int size,m;
   cin>>size;

 int num[100];
 

 for (int i=0;i<size;i++)
 {
    
    cin>>num[i];

    
 }

 cout<<"the maximum value is "<<max(num,size)<<endl;
 m=max(num,size);
 
 cout<<"the minimum value is "<<min(num,size,m);



  

    return 0;
}
