#include <iostream>
using namespace std;

int main() {
    
  
    int row,col;
    int n;
    char name;
    cout<<"Enter number: ";
    cin>>n;

    for(row=1;row<=n;row++){
        name='A'+(row-1);
      for(col=1;col<=n-row;col++){

         cout<<"  ";
      }
         for(col=1;col<=row;col++){

          cout<<name<<" ";

         }
         cout<<endl;
      

    }

    return 0;
}