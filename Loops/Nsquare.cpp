#include <iostream>
using namespace std;

int main() {
    
    int num;
    
    cout<<"Enter number: ";
    cin>>num;

    for(int i=1;i<=num;i++){
      cout<<"Square of "<<i <<" is " <<i*i<<endl;
    }

    return 0;
}