#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int no_of_elements;
    cin>>no_of_elements;
    map<string,string> dict;
    
    string name, phone;
    for(int i=0;i!=no_of_elements;++i){
        cin>>name>>phone;
        dict.insert(pair<string,string>(name,phone));
    }

    string input_name;
    while(cin>>input_name){
        if(dict.find(input_name)!=dict.end()){
            cout<<input_name<<"="<<dict.find(input_name)->second<<endl;
        }
        else cout<<"Not found"<<endl;
    }
    return 0;
}

