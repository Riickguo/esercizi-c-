#include <iostream>
using namespace std;
int main() {
  int i;
  cout<<"Inserisci dimensione del vettore: ";
  cin>>i;
  int v[i];
  for(int j=0;j<i;j++){
    cout<<"Inserisci valore nel vettore: "<<endl;
    cin>>v[j];
    
  }
  for(int j=0;j<i;j++) {
    if(v[j]%2==0){
      cout<<"Il valore "<<v[j]<<" è pari"<<endl;
    }
    else{
      cout<<"Il valore "<<v[j]<<" è dispari"<<endl;
    }
    
  }
  
} 
