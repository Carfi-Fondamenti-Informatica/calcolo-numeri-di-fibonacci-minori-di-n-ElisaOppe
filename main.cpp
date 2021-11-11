#include <iostream>
using namespace std;
int main() {

    int n=0;
    int n1=0, n2=1, n3=n1+n2;
    cin>>n;
    cout<<"1"<<endl;
    for(int i=0; i<=(n-1);i++){
        cout<<n3<<endl;

        n1=n2;
        n2=n3;
        n3=n1+n2;

    }
    return 0;
}
