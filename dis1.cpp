#include <iostream>

using namespace std; 

void recursive_func(int i) {
    if (i == 0) {
        cout << "i is zero" << endl; 
        return;
    }
    cout << "int i is " << i << endl; 
    i--; 
    recursive_func(i);
    cout << "int i is now " << i << endl; 
    return;
}

int main() {
    cout << "Calling my recurisve function with i equal to 5" << endl; 
    recursive_func(5);
    return 0; 
}

// command do ssh into your caen account from a terminal:
// ssh -Y uniqname@login.engin.umich.edu
// the -Y allows X11 forwarding, which basically means you can open simulate
// any of the text editors you would usually use on a caen computer.

