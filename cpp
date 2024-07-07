#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<char,bool>x;

int main() {
    char a = 'a';
    for(int i = 0;i<26;i++) {
        x[a++]= false;
    }

    int n;
    string s;
    int count = 0;
    cin>>n;
    cin>>s;
    if(n<26)
        cout<<"NO"<<endl;
    else {
    for(int i = 0;i<n;i++) {
    if(x[tolower(s[i])] == false) {
        x[tolower(s[i])] = true;
        count++;
    }
    }
        if(count == 26)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
