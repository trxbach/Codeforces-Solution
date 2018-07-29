#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int len;
    bool c = false;
    cin >> a;
    n = a.length();
    for (int i = 1; i < n; i++){
        if (islower(a[i])){
            c = true;
            break;
        }
    }
    if (!c){
        if (islower(a[0])){
            a[0] = toupper(a[0]);
        }
        else{
            a[0] = tolower(a[0]);
        }
        for (i = 1; i < len; i++){
            a[i] = tolower(a[i]);
        }
    }
    cout << a;
}
