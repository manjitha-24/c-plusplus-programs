/******************************************************************************

pointer to class

*******************************************************************************/
#include<iostream>
using namespace std;
class base{
    public:
       
        virtual void display(){
            cout<<"in base class"<<endl;
        }
};

class derived:public base{
    public:
        
        void display(){
            cout<<"in derived class"<<endl;
        }
};

int main(){
    derived d;
    base *bp = new derived;
    derived *dp;
    dp = &d;
    
    bp->display();
   
    dp->display();
    return 0;
}
