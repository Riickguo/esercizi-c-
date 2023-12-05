#include <iostream>
using namespace std;
int main() {
  double alt,cont;
  cont=0;
  cout<<"inserisci altezza iniziale: ";
   cin>>alt;
   while(alt>1){
     alt=alt/100*80;
     cont++;
   }
  cout<<cont;
  return 0;
}
