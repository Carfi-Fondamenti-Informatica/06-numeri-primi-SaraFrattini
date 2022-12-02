#include "libreria1.h"
#include <iostream>
using namespace std;
bool SCIAOBELLO (int i, int x){
    cout <<i<< endl;
    cout <<x/i<< endl;
    return x/i==0 ? x==i : SCIAOBELLO (i+1,x);
}
