#include <bits/stdc++.h>
typedef long long Long;
#define para(i,n) for(Long i=0;i<(Long)n;i++)
using namespace std;


Long numero(string a){    
    cout<<a<<endl;
    return stoi(a);
}

Long numeroDigitos (Long n){
    Long can=0;
    if(n==0)return 1;
    while(n>0){
        can++;
        n=n/10;
    }
    return can;
}

string separando(string c){ 
    
    for(Long i=1;i<=c.size()/2;i++){
        bool encon=true;
        Long min=numero(c.substr(0,i));

        Long numDigitosAct=numeroDigitos(min);
        Long numDigitosSig=numeroDigitos(min+1);
        Long numeroPrevio=numDigitosAct;       

        for(Long k=0; k<(Long)c.size()-numDigitosAct;k += numeroPrevio){            
            Long numeroActual = numero(c.substr(k,numDigitosAct));
            Long numeroSiguiente =numero(c.substr( k + numDigitosAct , numDigitosSig ));          
            if  ( numeroActual+1 != numeroSiguiente){
                encon=false;
                break;
            }else{
                numeroPrevio=numDigitosAct;
                numDigitosAct=numDigitosSig;
                numDigitosSig=numeroDigitos(numeroSiguiente+1);                
            }
            
        }

        if(encon){
            string resp;
            resp.append("YES ");
            resp.append(to_string(min));
            return resp;
        }

    }    
    return "NO";
}


int main(){

    Long n;
    cin>>n;
    para(i,n){
        string palabra;
        cin>>palabra;
        cout<<separando(palabra)<<endl;
    }

    return 0;
}
