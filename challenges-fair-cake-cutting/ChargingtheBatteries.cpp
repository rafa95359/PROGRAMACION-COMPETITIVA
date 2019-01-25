#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,k;    
    cin >> n >> m >> k;
    int arrSize = 4*n;
    int arr[arrSize] = {0};
    int resp = arrSize+1;
    for(int a0 = 0; a0 < m; a0++){
        int x;
        int y;
        cin >> x >> y;
        if(x==0)arr[y]++;
        else{
            if(y==n)arr[x+n]++;
            else{
                if(x==n)arr[3*n-y]++;
                else arr[4*n-x]++;
            }
        }       

    }    
    
    for(int i=0; i<arrSize; i++){
        int distancia=0;
        int encontrados=0;
        bool noFinish=true;  
        if(arr[i] != 0){
            for(int j=i; encontrados < k; j++){
                encontrados += arr[ j% arrSize];                         
                distancia=j-i;
                if(distancia > resp) break;
            }
            if(distancia < resp) resp=distancia;
            
        }
        
        
    }
    cout<<resp<<endl;
   
    

    return 0;
}