#include<iostream>

using namespace std;

void swap(int arr[],int n)
{

int temp;

for (int i=0;i<n-1;i+=2)

{// you can use inbuilt swap function
    //swap(arr[i],arr[i+1]);      

         // or

    // using third variable approach
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;

    // without third variable first approach
    /*
       arr[i]=arr[i]+arr[i+1];
       arr[i+1]=arr[i]-arr[i+1];
       arr[i]=arr[i]-arr[i+1];
    */

   // without using third variable second approach
   /*
   arr[i]=arr[i]*arr[i+1];
   arr[i+1]=arr[i]/arr[i+1];
   arr[i]=arr[i]/arr[i+1];
  */
}
}

void printarray(int a[],int n)
{

for (int i=0;i<n;i++)
{

    cout<<a[i]<<" ";

}

cout<<endl;
    
}

int main()
{


    int arr[10]={71,42,20,30,46};

cout<<"original array"<<endl;
    printarray(arr,5);
    swap(arr,5);


cout<<"after swapping array:"<<endl;
     printarray(arr,5);

}