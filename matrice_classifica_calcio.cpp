#include <bits/stdc++.h>

using namespace std;

int main() {
    map <string,vector<int>> matrice;
    matrice["Roma"] = {2,1,1,0};
    matrice["Napoli"] = {1,3,0,2};
    matrice["Benevento"] = {2,2,1,0};
    matrice["Empoli"] = {1,1,0,0};
    for(auto i : matrice){
        cout << i.first << ": ";
        for(auto j : i.second){
            cout << j << " ";
        }
     cout << endl;       
    }
        
    return 0;
    
}
