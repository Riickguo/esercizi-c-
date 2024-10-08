#include <bits/stdc++.h>

using namespace std;

int main(){
    map <string,int> animali;
    animali["cernia"] = 0;
    animali["struzzo"] = 2;
    animali["gatto"] = 4;
    animali["ragno"] = 8;
    animali["bruco"] = 2;
    for (auto x : animali)
        cout << "Chiave: " << x.first << ", Valore: " << x.second << endl;
}
