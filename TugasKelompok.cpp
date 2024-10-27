#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string a;
    cout << "Check Kata" << "\nInput kata: ";
    getline(cin, a);

    string b = a;
    reverse(b.begin(),b.end());
    
    cout << "Hasil: ";
    if(a == b){
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}