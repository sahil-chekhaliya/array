#include<iostream>

using namespace  std;

    int strlen(char name[]){
 int len=0;

 for(int i=0;name[i]!='\0';i++){
 len++;
 }
   return len;
}
void strrev(char name[],int len)
{

    for(int i=len;i>=0;i--)
    {
        cout<<name[i];
    }
}

bool palindrome(char a[],int n)
{

    int s=0,e=n-1;
    while(s<=e){
       if(a[s]!=a[e]){
        return 0;
        
       }
       else{
         s++;
        e--;
       }  
    }
    return 1; 
    
}

int main(){
    char ch[20];
    cin>>ch;

cout<<"length of string is :"<<strlen(ch)<<endl;
int len=strlen(ch);

cout<<"reverse string is :";
strrev(ch,len);
cout<<endl;
cout<<palindrome(ch,len);
}
