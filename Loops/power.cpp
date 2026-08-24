#include <iostream>
using namespace std;

int main() {
    
    int n,num,pow;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Enter power: ";
    cin>>pow;
    num=n;

    for(int i=1;i<pow;i++){
      num=num*n;
     
    }

     cout<<num;

  

    return 0;
}