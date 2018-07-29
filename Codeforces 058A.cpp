#include<bits.stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int pos = 0;
    while (pos < s.length() && s[pos] != 'h'){
        pos++;
    }
    pos++;
    while (pos < s.length() && s[pos] != 'e'){
        pos++;
    }
    pos++;
    while (pos < s.length() && s[pos] != 'l'){
        pos++;
    }
    pos++;
    while (pos < s.length() && s[pos] != 'l'){
        pos++;
    }
    pos++;
    while (pos < s.length() && s[pos] != 'o'){
        pos++;
    }
    pos++;
    if (pos <= s.length()){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}
