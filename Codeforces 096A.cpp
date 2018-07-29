#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string a;
    cin >> a;
    n = a.length();
    if (n < 7){
        cout << "NO";
        return 0;
    }
    for (int i = 6; i < n; i++){
        if (a[i] == a[i - 1] && a[i] == a[i - 2] && a[i] == a[i - 3] && a[i] == a[i - 4] && a[i] == a[i - 5] && a[i] == a[i - 6]){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
