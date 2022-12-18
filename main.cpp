#include <iostream>

int algevk(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    if (a >= b) {
        return algevk(a % b, b);
    }
    if (a <= b) {
        return algevk(a, b % a);
    }
}

bool proove_common_fraction(int n, int k){
    if (algevk(n, k) ==1){
        return true;
    }
    else{
        return true;
    }

}

void nearby_common_fraction(int n){
    double base = 3.0 / 7.0;
    int p, q;
    int a;
    double del;
    double near = 0, min_near = 0;
    for (int i = 2; i < n; i++) {
        del = base * i;
        a = int(del);
        double b = a;
        near = b / i;
        if (near >= base) {
            continue;
        }
        else if (base - near < base - min_near && near <= base && proove_common_fraction(a, i) == true) {
            min_near = near;
            p = a;
            q = i;
        }
    }

    std::cout << p <<"/" << q <<  std::endl;

}

int main() {
    nearby_common_fraction(8);
    nearby_common_fraction(1000000);
    return 0;
}
