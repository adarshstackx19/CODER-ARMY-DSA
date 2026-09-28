#include <iostream>
using namespace std;

int main() {
    
  
    int row,col;
    int n;
    char name;
    cout<<"Enter number: ";
    cin>>n;

    for(row=1;row<=n;row++){
       
      for(col=1;col<=n-row;col++){
       
         cout<<"  ";
      }
         for(col=1;col<=row;col++){
          name='A'+(col-1);
          cout<<name<<" ";

         }
         cout<<endl;
      

    }

    return 0;
}

//         A 
//       A B 
//     A B C 
//   A B C D 
// A B C D E 