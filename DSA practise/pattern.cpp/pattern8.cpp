#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout<<"Enter the value of n";
    cin>>n;

    for(i=0;i<=n;i++){
    //spacing
    for(j=0; j<i; j++){
        cout<<" ";
    }
    
    //star
    for(j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
    }
    //spacing
    for(j=0; j<i; j++){
        cout<<" ";
    }
    cout<<endl;
    }
}
