#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
  #define DIM 10
   int v[DIM],num;
  srand(time(NULL));
  for(int i=0;i<DIM;i++){
    num=rand() % 10 +1;
    v[i]=num;
    cout<<v[i]<<endl;
  }
  cout<<"Nuovo vettore: "<<endl;
  for(int i=0; i<DIM; i++) {
    if(v[i]%2==0){
      v[i]=v[i]*2;
      cout<<v[i]<<endl;
    }
    else {
      v[i]=v[i]*3;
      cout<<v[i]<<endl;
    }
  }
}
