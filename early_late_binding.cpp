/******************************************************************************

early and late binding

*******************************************************************************/
#include<iostream>
using namespace std;
class base{
    public:
        void show(){
            cout<<"early binding in base class"<<endl;
        }
        virtual void display(){
            cout<<"late binding in base class"<<endl;
        }
};

class derived:public base{
    public:
        void show(){
            cout<<"early binding in derived class"<<endl;
        }
        void display(){
            cout<<"late binding in derived class"<<endl;
        }
};

int main(){
    base *bp = new derived;
    bp->show();
    bp->display();
    return 0;
}

