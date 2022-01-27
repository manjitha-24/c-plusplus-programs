/******************************************************************************

Write a C++ to illustrate the concepts of console I/O operations.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
char x;

cout<<"Enter the character:";
cin.get(x);

cout<<"The given Character is:";
cout.put(x);
cout<<"\n";
cout.write("BVRITH", 5);

}
