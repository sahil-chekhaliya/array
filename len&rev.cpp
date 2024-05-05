#include<iostream>

using namespace std;

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
int main(){
    char ch[20];
    cin>>ch;

cout<<"length of string is :"<<strlen(ch)<<endl;
int len=strlen(ch);

cout<<"reverse string is :";
strrev(ch,len);
    return 0;
}