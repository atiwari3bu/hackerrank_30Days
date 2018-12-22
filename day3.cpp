#include <bits/stdc++.h>

using namespace std;

void weirdOrNot(int n){
    if(n%2==1) cout<<"Weird"<<endl;
    else if(n%2==0 && (n>=2 && n<=5)) cout<<"Not Weird"<<endl;
    else if(n%2==0 && (n>=6 && n<=20)) cout<<"Weird"<<endl;
    else if(n%2 ==0 && n>20) cout<<"Not Weird"<<endl;
}



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    weirdOrNot(N);

    return 0;
}

