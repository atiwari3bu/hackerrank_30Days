#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printIssueAndReturn(int* issue, int* retur){
    std::cout<<"Issue: "<<issue[0]<<" "<<issue[1]<<" "<<issue[2]<<std::endl;
    std::cout<<"Return: "<<retur[0]<<" "<<retur[1]<<" "<<retur[2]<<std::endl;
}

void calculateRevenue(int* issue, int* retur){
    if(retur[2]<issue[2]) std::cout<<0<<std::endl;
    else if(retur[2]<=issue[2] && retur[1]<=issue[1]){
        //std::cout<<"Coming in big if"<<std::endl;
        if(retur[2]==issue[2] && retur[1]==issue[1]){
            if(retur[0]<issue[0]){ 
                std::cout<<0<<std::endl; 
                return;
            }
            else{
                std::cout<<(retur[0]-issue[0])*15<<std::endl;
                return;
            }
        }
        else if(retur[1]<issue[1]){
            std::cout<<0<<std::endl;
        }
    }
    else if(retur[2]<=issue[2] && retur[1]>issue[1]){
        //std::cout<<"Coming in big Else if"<<std::endl;
        if(retur[2]==issue[2] && retur[1] >issue[1]){
            std::cout<<(retur[1]-issue[1])*500<<std::endl;
            return;
        }
    }
    else if(retur[2]>issue[2]){
        //std::cout<<"Coming in big Else"<<endl;
        std::cout<<10000<<std::endl;
        return;
    }

}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int issue[3];
    int retur[3];

    for(int i=0;i<3;++i){
        int temp;
        cin>>temp;
        retur[i]=temp;
    }
        
    for(int i=0;i<3;++i){
        int temp;
        cin>>temp;
        issue[i]=temp;
    }

    //retur[0]=31;
    //retur[1]=12;
    //retur[2]=2009;

    //issue[0]=1;
    //issue[1]=1;
    //issue[2]=2010;
    //printIssueAndReturn(issue,retur); // Debugging
    calculateRevenue(issue,retur);
    return 0;
}
