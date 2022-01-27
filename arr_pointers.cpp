/******************************************************************************

 Write a C++ program to create an array of pointers. Invoke functions using array objects.
 
 
*******************************************************************************/
#include<iostream>
using namespace std;
class base{
        int x;
    public:
      
        void getX(){
            cout<<"enter the value of x"<<endl;
            cin>>x;
            }
        void display(){
            cout<<"value of x: "<<x<<endl;
        }
};

int main(){
    
    base *ptr = new base[5];
    int i;
    
    for(i=0;i<5;i++){
        ptr->getX();
        ptr->display();
    }
   
    
    return 0;
}
