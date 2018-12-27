#include <bits/stdc++.h>

using namespace std;

void decimalToBinary(int n){
    int last_digit;
    int total=0;
    int max=0;
    bool is_consecutive=false;
    
	while(n!=0){
        last_digit=n&1;
        
				if(last_digit==1 && is_consecutive==false){
            is_consecutive=true;
            total+=1;
            if(max<total) max=total;
        }
        
				else if(last_digit ==1 && is_consecutive==true){
            total+=1;
            if(max<total) max=total;
        }
        
				else{
            is_consecutive=false;
            total=0;
        }
        
				n=n>>1;
    }
		cout<<max<<endl; // Answer
}


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    decimalToBinary(n);

    return 0;
}
