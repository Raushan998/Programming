#include<iostream>
using namespace std;
class point{public://class point
    int x;int y;
    //Data Members
};
class Rect {public:
    //Rect uses point
    point TL;//TOP_LEFT
    point BR;//Bottom-Right
};
int main(){
Rect r={{0,2},{5,7}};
cout<<"[("<<r.TL.x<<","<<r.TL.y<<"),("<<r.BR.x<<","<<r.BR.y<<")]";
return  0;
}
