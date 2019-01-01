#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	Difference(vector<int> elem){
        this->elements=elem;
    }

    void computeDifference(){
        for(auto iter=elements.begin();iter!=elements.end();++iter){
            for(auto iter1=elements.begin();iter1!=elements.end();++iter1){
                int diff=*iter-*iter1;
                if(diff<0) diff=diff*-1;
                if(diff>maximumDifference) maximumDifference=diff;
            }
            
        }
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
