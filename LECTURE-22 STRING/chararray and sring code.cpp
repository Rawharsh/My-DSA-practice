#include<iostream>
using namespace std;
int strlen(char name[20])
{
    //for(int i=0;i<name)
int count =0,i=0;
while(name[i]!=0)
{
    count++;
    i++;
}
return count;



}
char tolwercase(char ch)
{    
    
    if(ch>='a' && ch<='z')
     {
         return ch;
     }
     else{
           char temp= ch - 'A' + 'a' ;
           return temp;
     
    }
}

bool pallinornot(char name[20], int lenght)
{
    int s=0;
    int e=lenght-1;
    while(s<=e)
    {
        if(tolwercase(name[s]) != tolwercase(name[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}




int main()
{ 
    char name[20],D,b;
    int lenght;
    cout<<"enter your name  ";
    cin>>name;
    cout<<"your name is ";
    cout<<name<<endl;
    lenght=strlen(name);
   cout<<"lenght of the string is ";
   cout<<lenght<<endl;
   cout<<"pallindrome or not :"<<pallinornot(name,lenght)<<endl;
 // cout<<tolwercase(D)<<endl;
  // cout<<tolwercase(b)<<endl;
    char x=tolwercase(D);
    char y=tolwercase(b);
    cout<<x<<endl<<y<<endl;
    return 0;

}
