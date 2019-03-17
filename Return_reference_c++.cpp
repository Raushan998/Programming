#include<iostream>
using namespace std;
int& Function_Return_By_Ref(int &x) {
cout<<"x="<<x<<" &x="<<&x<<endl;
return (x);
}
int main(){
int a=10;
cout<<"a="<<a<<" &a="<<&a<<endl;
const int &b=//constant needed.
Function_Return_By_Ref(a);
cout<<"b="<<b <<" &b= "<<&b<<endl;
return 0;
}
