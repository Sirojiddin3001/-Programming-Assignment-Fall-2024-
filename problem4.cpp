#include <iostream>
using namespace std;
int main() {
    int N=0;
    cin>>N;
    if(N%50==0) {
        cout<<0<<endl;
    }
    else {
        cout<<50-N%50<<endl;
    }
    return 0;
}