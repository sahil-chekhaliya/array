#include<iostream>

using namespace std;

void pairsum(int arr[],int m)
{

  for(int i=0;i<5;i++)
  {
    for(int j=i+1;j<5;j++)
    {
        if(arr[i]+arr[j]==m)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }

    }
  }

} 

int main()
{

int array[5]={1,2,3,4,5};
int m=5;

pairsum(array,m);
    return 0;
}