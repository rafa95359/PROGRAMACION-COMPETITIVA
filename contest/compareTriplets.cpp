#include <bits/stdc++.h>

using namespace std;


vector<int> compareTheTriplets(int a[], int b[]) {
    vector<int> myvector(2,0);
    for (int i = 0;i < 3; ++i){
        if ( a[i] > b[i] ) myvector[0]++;
        else if ( a[i] < b[i] ) myvector[1]++;        
    }
    return myvector;


}

int main() {
    int alice[3],bob[3];
    for ( int i=0; i<3; ++i) {
        cin>>alice[i];
    }
    for ( int i=0; i<3; ++i) {
        cin>>bob[i];
    }
    vector<int> respuesta = compareTheTriplets(alice,bob);
    cout<<respuesta[0]<<" "<<respuesta[1]<<endl;


    return 0;
}
