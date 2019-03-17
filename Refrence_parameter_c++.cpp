#include<iostream>
using namespace std;

int Ref_const(const int&x){
   return(x+1);
}
int main(){
int a=10,b;
b=Ref_const(a);
cout<<"a= "<<a<<" and "<<" b= "<<b<<endl;
return 0;
}
