#include<iostream>
#include<cstring>
using namespace std;
typedef struct _string{char *str;
} String;
int main(){
 String fName,lName,name;
 fName.str=strdup("Raushan");
 lName.str=strdup("Raman");
 name.str=(char *)malloc(strlen(fName.str)+
                         strlen(lName.str)+1);
 strcpy(name.str,fName.str);
 strcat(name.str,lName.str);
 cout<<"First Name:"<<fName.str<<endl;
 cout<<"Last Name:"<<lName.str<<endl;
 cout<<"Full Name:"<<name.str<<endl;
 return 0;
}
