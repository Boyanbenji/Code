#include <iostream>
using namespace std;
int main(){
    int a, b, c, p, q, profit, max_profit, max_p;
    cin>>a>>b>>c;
    max_profit = 0;
    max_p = 0;
    for(p = c;p <= a/b;p++){
        q =  a-b*p;
        profit = (p-c)*q;
        if(profit>max_profit){
            max_profit = profit;
            max_p = p;
        }
    }
    cout<<max_p<<" "<<max_profit;

}