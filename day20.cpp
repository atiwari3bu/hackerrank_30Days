#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int no_of_swaps=0;

vector<int> sort(vector<int> elements){
    for(auto iter=elements.begin();iter!=elements.end();++iter){
        for(auto iter1=iter;iter1!=elements.end();++iter1){
            if(*iter>*iter1){
                ++no_of_swaps;
                int temp=*iter;
                *iter=*iter1;
                *iter1=temp;
            }
        }   
    }
    return elements;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int no_of_elements;
    cin>>no_of_elements;

    vector<int> elements;
    while(cin){
        int temp;
        cin>>temp;
        elements.push_back(temp);
    }

    elements.pop_back();

    vector<int> result=sort(elements);
    std::cout<<"Array is sorted in "<<no_of_swaps<<" swaps."<<std::endl;
    std::cout<<"First Element: "<<result.front()<<std::endl;
    std::cout<<"Last Element: "<<result.back()<<std::endl;
    return 0;
}
