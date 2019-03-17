#include<iostream>
#include"myFunc.h"
void g(int i,double f=0.0,char ch);
void g(int i=0,double f,char ch);
int main(){
    int i=5;double d=1.2;char c='b';
    g();//prints 0 0 a
    g(i);//prints 5 0 a
    g(i,d);//prints 5 1.2 a
    g(i,d,c);//prints 5 1.2 b
    return 0;
}
