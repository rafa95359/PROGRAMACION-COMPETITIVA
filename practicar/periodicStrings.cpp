#include <bits/stdc++.h>
using namespace std;
bool verificar(string a,string b){
    
    for (int i=0 ;i<a.size()+1-b.size();i++){         
        if(a.compare(i,b.size(),b) != 0) return false;
        i= i+ b.size()-1;      
    }
    if(b.size()==a.size()) return true;
    if(b.size()>(a.size()/2)) return false;    
    return true;
}



int main(){
    int n;
    cin>>n;

    string palabra[n],cadena;
    string a;

    for(int i=0;i<n;i++){
        cin>>palabra[i];  

    }
   
    
    bool esVerdura = false;
    for(int j=0;j<n;j++){
        for (int i=0; !esVerdura; i++) {
            cadena.push_back(palabra[j][i]);
            esVerdura = verificar(palabra[j],cadena);
        }
        cout<<cadena.size()<<endl;
        cout<<endl;
        cadena.clear();
        esVerdura=false;
        
        
    }
    

    return 0;
}