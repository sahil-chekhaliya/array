#include<iostream>

using namespace std;

int unique(int a[],int n)
{
    int ans=0;

for (int i=0;i<n;i++)
{

    ans=ans^a[i];
}

    return ans;
}

int main()
{

int array[10]={1,2,2,1,4};

cout<<unique(array,5);

    return 0;
}
