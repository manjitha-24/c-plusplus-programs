/******************************************************************************

program on istream

*******************************************************************************/
#include<iostream>
using namespace std;
int main(){
    char c;
    string name;
    cout<<"enter the character";
    cin.get(c);
    cout<<"character given from keyboard is:";
    cout.put(c);
    cout.write("BVRITH",5);
    cout<<"\n";
    cin.getline(name,10);
    return 0;
}
