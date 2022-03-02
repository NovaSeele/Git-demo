#include<bits/stdc++.h>
using namespace std;

double* getPointerToPi(){
    double *p; //goi ra con tro
    double pi = 3.14159; //goi ra so pi
    p = &pi; //cho con tro tro toi dia chi của pi
    return p; //tra ve gia tri con tro
}

double* getPointerToP2(){
    double *ptr = new double; //goi ra con tro, cho phep con tro luu thang gia tri cua dia chi no dag tro den
    double pi = 3.14159; //goi ra so pi
    *ptr = pi; //cho con tro co gia tri pi
    return ptr; //tra ve gia tri con tro
}

double *getPointerToP3(){         
    return new double(3.14);
}

int main(){
    getPointerToPi();
    getPointerToP2();
    getPointerToP3();
}