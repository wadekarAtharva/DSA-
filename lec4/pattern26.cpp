//    1
//   121
//  12321
// 1234321
#include<iostream>
using namespace std;


int main(){
    int n=4;

    int i=1;
    while (i<=n)
    {
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;

        }
        
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }

        int k=i-1;
        while (k)
        {
            cout<<k;
            k=k-1;
        }
        

        cout<<endl;
        i=i+1;

    }
    
return 0;

}