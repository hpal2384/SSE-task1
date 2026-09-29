#include<iostream>
using namespace std;
float P,R,T,SI;
int main(){
    cout << "Enter the Principal Amount,\n , Rate of Interest(in %), \n , Time (in years)ṇ: ";
    cin >> P >> R >> T;
    SI=(P*R*T/100);
    cout << SI << endl;
    return 0;

}