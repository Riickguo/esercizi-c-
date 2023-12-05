#include <iostream>
using namespace std;
int main() {
  int k,n,s,mag,c,min,ugu;
  c=0;
  min=0;
  ugu=0;
  cout<<"inserisci un numero: ";
  cin>>k;
  cout<<"numero cifre da inserire: ";
  cin>>n;
  for(s=0;s<n;s++){
    cin>>mag;
    if(mag>k){
      c++;
    }
    else{
      if(mag<k){
        min++;
      }
      else{
        ugu++;
      }
    }
  }
  cout<<"numeri maggiori sono "<<c<<endl;
  cout<<"numeri minori sono "<<min<<endl;
  cout<<"numeri uguali sono " <<ugu<<endl;
  return 0;
}
