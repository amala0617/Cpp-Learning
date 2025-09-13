#include <iostream>
using namespace std;
int main(){
    string var1,var2,temp;
    cout<<"Enter a variable";
    cout<<"Enter another variable";
    cin>>var1>>var2;
    temp=var1;
    var1=var2;
    var2=temp;
    cout<<"The variables"<<var1<<var2<<"swap to"<<var1<<var2;
}