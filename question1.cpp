#include <iostream>
using namespace std;
int main(){
    int g, a;
    cin >> g;
    cin >> a;
    
    if(g == 1 && a >= 18) {
        cout << "YES" << endl;
    }else if(g == 0 && a >= 18){
        cout << "YES" << endl;
    }else{
        cout<< "NO" << endl;
    }
}

