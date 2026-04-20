#ifndef__Rat.h_
#define__Rat_h__

class Rational{
    int num;
    unsigned den;
    public:
    Rational(int x, unsigned y){
        num=x;
        den=y;
    }
    void input();
    void output();
    Rational add (Rational z);
}

#include <iostream>

void Rational::input(){
    std::cout<<"input num, den";
    std::cin>>num>>den;
}

void Rational::output(){
    std::cout<<num<<"/"<<den<<"/";
}

Rational Rational::add(Rational z){
    Rational n;
    n.num=num*z.den+z.num*den;
    n.den=den*z.den;
    return n;
}

#include "Rat.h"

int main(){
    Rational b(1,2);
    Rational c;
    c.input();
    Rational q=b.add(c);
    q.output();
}