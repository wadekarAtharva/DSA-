#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter value of num:";
    cin>>num;

    if (num<0)
    {
        cout<<"Negative";
    }
    else if(num>0){
        cout<<"Positive";

    }
    else{
        cout<<"Zero";
    }
    
return 0;

}