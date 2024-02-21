#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
  int m[3][2];
  srand(time(NULL));
  cout<<"Matrice 3*2 vale: "<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
      m[i][j]=rand()%10+1;
      cout<<m[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"Vettori vert e orizon valgono: " <<endl;
  int vert[3], orizon[2];
  for(int i=0;i<3;i++){
    vert[i]=m[i][0]+m[i][1];
    cout<<vert[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<2;i++){
    orizon[i]=m[0][i]+m[1][i]+m[2][i];
    cout<<orizon[i]<<" ";
  }
  return 0;
}
