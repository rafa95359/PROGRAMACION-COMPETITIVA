#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.


string gameOfThrones(string s) {
    int palabras[26]={0};
    for(int i=0;i<s.size();i++){
        palabras[s.at(i)-'a']++;
    }
    int cant=0;
    for(int i=0;i<26;i++){
        if(palabras[i]%2 !=0)cant++;

    }
    if(cant>1)return "NO";
    else return "YES";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
