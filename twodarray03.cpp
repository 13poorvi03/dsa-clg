#include <iostream>
using namespace std;

int main() {
      int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     int i=0;
        
      for (int j = 0; j<3 ; j++)
      {
        cout<<" "<<arr[i][j];
      }

cout<<endl;
i=1;
int j=1;
        cout<<"   "<<arr[i][j]<<endl;

     
    i=2;
    for (int j = 0; j < 3; j++)
    {
                cout<<" "<<arr[i][j];
    }
    
    }
