#include <iostream>
using namespace std;
int main() {
    double x=,y=0;
    cin>>x>>y;
    y*=30.48;
    if(x<y) {
        cout<<1<<endl;
    }
    else {
        cout<<0<<endl;
    }
    return 0;
}