#include <iostream>
using namespace std;
int main() {
    int maximum=0, i=0;
    cin>>maximum;
    for (i=0 ; i<maximum ; i++){
        int a=0, b=0, c=0, d=0, e=0;
        cin >> a >> b >> c >> d;
        if ((b-a)==(c-b)){ 
            e=d+(b-a);
        }
        else if ((b/a)==(c/b)){ 
            e=d*(b/a);
        }
        cout<<a<<" " <<b<<" " <<c<<" " <<d<<" " <<e <<endl;
    }
}