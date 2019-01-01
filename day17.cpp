#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here

struct MyException : public exception {
   const char * what () const throw () {
      return "n and p should be non-negative";
   }
};

struct Calculator{
    int power(int base, int raised_to){
        int result=1;
        if(base< 0 || raised_to<0) throw MyException();
        else{
            for(int i=0;i<raised_to;++i){
                result=base*result;
            }
        }
        return result;
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
