#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double calculateSquareRoot(int number){
    double temp=pow(number,0.5);
    return temp;
}

void primeOrNot(int number){
    double sq_rt_no=calculateSquareRoot(number);

    if(number==1){
        cout<<"Not prime"<<endl;
        return;
    }
    for(int i=2;(i<=sq_rt_no);++i){
        if(number%i==0){
            cout<<"Not prime"<<endl;
            return;
        }
    }
    cout<<"Prime"<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int total_numbers;
    cin>>total_numbers;

    vector<int> numbers;
    int temp;

    while(cin){
        cin>>temp;
        numbers.push_back(temp);
    }

    numbers.pop_back();
    for(auto iter=numbers.begin();iter!=numbers.end();++iter){
        primeOrNot(*iter);
    }

    return 0;
}

