// divyansh rastogi 
// 23070123048
// aim :- function overloding
#include <iostream>
using namespace std;

    class addition{
    public:

int sum(int a , int b ){
        return a+b;
       
    }
int sum(int a , int b , int c){
        return a+b+c;
       
    }
    
double sum(double d , double f ){
        return d+f;
       
    }
   
};
int main(){

    addition obj;
    cout<< obj.sum(10,20)<<endl;
    cout<< obj.sum(10,20,20)<<endl;
    cout<< obj.sum(10.8,20.34)<<endl;

    return 0;
}
/* output:-
30
50
31.14
    */
