#include <iostream>
using namespace std;
#define DIM 5

int main() {
  
  int mat[DIM][DIM];
  for(int i=0; i<DIM; i++){
    for(int j=0; j<DIM; j++){
      if(i!=j){
        mat[i][j]=0;
      }
      else{
        mat[i][j]=1;
      }
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
  
}
