
#include <iostream>
using namespace std;

int main() {
    
    
 int row,col;
 char name;

    for(row=1;row<=5;row++){
       
      for(col=1;col<=5;col++){

         name='a'+(col-1);
         
        cout<<name<<" ";

      }

      cout<<endl;

    }

    return 0;
}