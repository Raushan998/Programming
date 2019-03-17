#include<iostream>
#include<algorithm>
using namespace std;
//compare Function pointer
bool compare (int i,int j){
return(i>j);
}
int main(){
int data[]={32,71,12,45,26};
//start ptr,end ptr,func.ptr
sort(data,data+5,compare);
for (int i=0;i<5;i++)
cout <<data[i]<<" ";
return 0;
}
