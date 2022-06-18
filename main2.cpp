#include<iostream>

#include"rectangulo.h"
#include"circulo.h"

int main() {
    for (int i=0;i<10;i++) {
        rectangulo r = rectangulo(i+1,2*i+1);
        std::cout<<r.area()<<std::endl;
    }
    return 0;
}