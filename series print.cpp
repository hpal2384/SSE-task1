#include <iostream>
using namespace std;
int main(){
    int a;
    int i=1;
    int b;
    int n;
    cout <<"Enter the number of terms: ";
    cin>>n;
    cout <<"Enter values for a and b: ";
    cin>>a>>b;
    while(i<=n){
        cout<<"a+"<<i<<"b = "<<a+i*b<<endl;
        i++;
    }
    return 0;
}