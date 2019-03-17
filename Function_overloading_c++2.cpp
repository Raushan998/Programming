#include<iostream>
using namespace std;
int  Area(int a,int b){return (a*b);}
int Area(int c){return (c*c);}
int main(){
int x=10,y=12,z=5,t,u,c=5;
t=Area(x,y);
cout<<"Area of rectangle="<<t<<endl;
u=Area(c);
cout<<"Area of square="<<u<<endl;
return 0;
}
