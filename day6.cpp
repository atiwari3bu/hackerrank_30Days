#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printEvenAndOdd(string* s,int no_of_strings){
    for(int i=0;i<no_of_strings;++i){
        for(int j=0;j!=s[i].length();++j){
            if(j%2==0) cout<<s[i][j];
        }
        cout<<" ";
        for(int j=0;j!=s[i].length();++j){
            if(j%2==1) cout<<s[i][j];
        }
        cout<<endl;
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int no_of_strings;
    cin>>no_of_strings;
    
    string s[no_of_strings];
    string temp;
    int i=0;
    while(cin>>temp){
        s[i]=temp;
        ++i;
    }
    printEvenAndOdd(s,no_of_strings);
    return 0;
}

