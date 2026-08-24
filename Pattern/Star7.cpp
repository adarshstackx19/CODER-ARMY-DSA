#include <iostream>
using namespace std;

int main() {
    
    int row,col,count=1;
 

    for(row=1;row<=5;row++){
       
      for(col=1;col<=5;col++){
 
        cout<<count<<" ";
        count++;

        // alternate cout<<(row-1)*5+col;

      }

      cout<<endl;

    } 

    return 0;
}