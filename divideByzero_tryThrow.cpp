/******************************************************************************

EXCEPTION HANDLING
    DIVIDE BY ZERO USING TRY THROW AND CATCH

*******************************************************************************/
#include<iostream>
using namespace std;
class divideByZero{
    public:
        void getmsg(){
            cout<<"b cannot be zero"<<endl;
        }
};

int main(){
    int a,b;
    cout<<"enter values of a and b";
    cin>>a>>b;
    try{
        if(b==0)
            throw new divideByZero();
        cout<<"a/b = "<<(a/b)<<endl;
    }
    catch(divideByZero *obj){
        obj->getmsg();
    }
    return 0;
}

