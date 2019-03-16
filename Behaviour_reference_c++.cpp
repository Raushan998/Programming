#include<iostream>
using namespace std;
int main(){
int a=10,&b=a;
cout<<"a="<<a<<",b="<<b<<endl;
cout<<"&a="<<&a<<",&b="<<&b<<endl;
++a;
cout<<"a="<<a<<",b="<<b<<endl;
++b;
cout<<"a="<<a<<",b="<<b<<endl;
return 0;
}
