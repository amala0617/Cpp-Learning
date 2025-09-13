#include <iostream>
using namespace std;
int main(){
    int amount,year,rate,simple_interest;
    cout<<"Enter amount\n";
    cout<<"Number of years\n";
    cout<<"Rate of interest\n";
    cin>>amount>>year>>rate;
    simple_interest=(amount* year*rate)/100;
    cout<<"The simple interest is:"<< simple_interest << endl;
    return 0;
}