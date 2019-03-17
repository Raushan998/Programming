#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main(){
char str[10];
cout<<"Enter the string"<<endl;
cin>>str;
stack<char>s;
int i;
for(i=0;i<strlen(str);i++)
    s.push(str[i]);
while(!s.empty()){
    cout<<s.top();
    s.pop();
}
return 0;

}
