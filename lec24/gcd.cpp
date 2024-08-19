#include<iostream>
using namespace std;

int gcd(int a,int b){
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }

    while (a!=0 && b!=0)
    {
        if (a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
        
    }
    
    return a;
    
}

int main(){
int a,b;
cout<<"ENter the values of a and b:";
cin>>a>>b;

cout<<"Ans:"<<gcd(a,b);
return 0;

}