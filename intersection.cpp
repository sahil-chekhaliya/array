#include<iostream>

using namespace std;

void intersection(int arr1[],int arr2[],int n,int m)
{
  int inter[10];
int i=0,j=0,k=0;;

while(i<n && j<m)
{

   if(arr1[i]==arr2[j])
   {

     inter[k]=arr1[i]; 
     i++;
     j++;
     k++;

   }

else if (arr1[i]<arr2[j])
{
   i++;
}

else if (arr1[i]>arr2[j])
{

  j++;
}


}
   for(int k=0;k<3;k++)
   {

  cout<<inter[k]<<" "<<endl;

   }


}
int main()
{
 int a[10]={1,2,3,4,5};
 int b[10]={1,3,5};

intersection(a,b,5,3);


    return 0;
}