#include<iostream>
using namespace std;
class x{
    public:int m1,m2;
    void f(int k1,int k2){//sample method
       m1=k1;//implicit access w/o 'this' pointer
       this->m2=k2;//Explicit access w/ 'this' pointer
       cout<<"Id="<<this<<endl;//Identify (address) of the object
    }
};
int main(){
    x a;
    a.f(2,3);
    cout<<"Addr="<<&a<<endl;//Address (identity) of the object 
    cout<<"a.m1="<<a.m1<<", a.m2="<<a.m2<<endl;
    return 0; 
}