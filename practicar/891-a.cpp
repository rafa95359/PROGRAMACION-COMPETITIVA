#include <bits/stdc++.h>
using namespace std;

int MCD(int a,int b){
    if(a<b)swap(a,b);
    int aux;
    while(a > 0){
        aux=a;
        a=b%a;
        b=aux;
    }
    return aux;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];

    }

    bool esImposible=true;
    
    
    int gcd= MCD(arr[0],arr[1]);

    for(int i=2;i<n;++i){
        
        gcd = MCD(gcd,arr[i]);
        if(gcd == 1){
            esImposible=false;
            break;
        }
    }


    int hayPESI=1;    

    if(esImposible)cout<<-1<<endl;
    else{
        for(int i=0;i<n-1;i++){
            if(MCD(arr[i],arr[i+1]) == 1){
                hayPESI--;
                break;
            }
        }
        cout<<n+ hayPESI<<endl;
    }
    
    return 0;
}