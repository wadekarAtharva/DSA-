// A
// BB
// CCC
#include<iostream>
using namespace std;


int main(){
    int n=3;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
        char ch='A'+i-1;

            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
return 0;

}