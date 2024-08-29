#include <iostream>

using namespace std;

int main() {

    string t;
    cin >> t;
    bool found = false;

    for(int i = t.length()-1; i > t.length()/2; i--) {
        if(t.substr(0, i)==t.substr(t.length()-i,t.length())) {
            cout << "YES" << endl;
            cout << t.substr(0, i);
            found = true;
            break;
        }
    }
    if(!found) cout << "NO";

}
