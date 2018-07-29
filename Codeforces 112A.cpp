#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int n = a.length();
    for (int i = 0; i < n; i++){
        if (isupper(a[i])){
            a[i] = (char)(a[i] + 32);
        if (isupper(b[i])){
            b[i] = (char)(b[i] + 32);
        }
    }
    if (a.compare(b) > 0){
        cout << 1;
        return 0;
    }
    if (a.compare(b) < 0){
        cout << -1;
        return 0;
    }
    cout << 0;
}
