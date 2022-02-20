#include <iostream>
using std::cout;
using std::endl;
template<typename T>
T zamien(T a, T b)
{
    std::cout <<"przed a:"<< a << "b:" << b<<"\n"; //2 1
    T c;
    c=a;
    a=b;
    b=c;
    std::cout <<"po a:"<< a << "b:" << b<<"\n"; //2 1
}
int a = 1;
int b = 2;

void swap() {
    zamien(a,b);
};
