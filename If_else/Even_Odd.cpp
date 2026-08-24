#include <iostream>
using namespace std;

// int main() {
    
//     int num;
    
//     cout<<"Enter your Number: ";
//     cin>>num;

//     if(num%2==0){
//       cout<<"The number is even";
//     }

//     else{
//       cout<<"The number is Odd";
//     }

//     return 0;
// }

int main()
{
    int num;
    
    cout<<"Enter your Number: ";
    cin>>num;

    if(num & 1) {
      cout<<"odd";
    }
    else 
    {
      cout << "even";
    }
}