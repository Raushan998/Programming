#include<iostream>
#include<vector>
using namespace std;
int main(){
cout <<"Enter the number of elements:";
int count,j,sum=0;
cin>>count;
vector<int>arr;//Default Size
arr.resize(count);//set resize
for(int i=0;i<arr.size()+1;i++){
    arr[i]=i;
    sum+=arr[i];
}
cout<<"Array Sum:"<<sum<<endl;
printf("hello world!");
return 0;

}


