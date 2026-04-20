#include <iostream>
#include <cmath>

//1
/*


using namespace std;


int main(){
    double x, y, z;
    cout << 'input x, y';
    cin >> x >> y;
    z = pow(x, y);
    cout << 'z=' << z << scientific << z << '\n';
}
*/

//2
/*
#include <cstdlib>

int main(){
    char str[10];
    unsigned long long x, y;
    y=0;
    while (std::cin.get(str,10)){
        x = strtoull(str, NULL, 0);
        y+=x;
    }
    std::cout << "y = " << std::endl;
}*/


//3

/*

using namespace std;

int main(){
    unsigned n;
    cout << "n=";
    cin >> n;
    for (unsigned i = 1; i <= n; i++){
        cout.width(7);
        cout << i;
    }
    for (unsigned i = 1; i <= n; i++){
        cout.width(7);
        cout.precision(3);
        cout << sqrt(i);
    }
}*/

//4

#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout << "n=";
    cin >> n;
    int* m = new int[n];
    for (int, i = 0; i < n; i++){
        cout << "m[" << i << "] = ";
        cin >> m[i];
    }

    double* x = 
}