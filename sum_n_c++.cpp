#include<iostream>
using namespace std;
int main(){
int n,sum=0;
cout<<"Input limit:"<<endl;
cin>>n;
for (int i=0;i<=n;++i){
sum=sum+i;
}
cout<<"sum of "<<n;
cout<<" number is: "<<sum<<endl;
return 0;
}
