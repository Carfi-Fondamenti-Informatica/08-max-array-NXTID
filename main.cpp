#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int a=0;

    cin>>a;
    float insieme[a];
    for(int i=0;i<a;i++){
        cin>>insieme[i];
    }
    cout<<maxarray(insieme,a);

    return 0;
}
