#include<iostream>
using namespace std;
class point{
    public:int x;int y;
};
class Rect{
public:point TL;//Top-left
point BR;//Bottom-Right
//method
void computeArea(){
    cout<<abs(TL.x-BR.x)*abs(BR.y-TL.y);
}
};
int main(){
    Rect r={{0,2},{5,7}};//method invocation
    r.computeArea();
    return 0;
}