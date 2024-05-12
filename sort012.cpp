#include<iostream>

using namespace std;



void sort(int a[],int n)
{
int i=0,j=0,k=n-1;

while(j<=k)
{

    if(a[j]==0)
    {
     swap(a[j],a[i]);
     i++;
     j++;
    }
    else if(a[j]==1)
    {
       j++;
    }
    else if(a[j]==2)
    {
       swap(a[j],a[k]);
       k--;
    }
}
   

}
void print(int a[],int n)
   {
     for(int i=0;i<n;i++)
   { 
    cout<<a[i]<<" ";
   }
    
   }


int main()
{

int array[6]={2,1,0,0,2,1};

sort(array,6);
print(array,6);



    return 0;
}