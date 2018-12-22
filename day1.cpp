#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i1;
    double d1;
    string s1;
    
    // Read and save an integer, double, and String to your variables.
    cin>>i1>>d1;
    
    // Print the sum of both integer variables on a new line.
    cout<<i+i1<<endl;
    
    // Print the sum of the double variables on a new line.
    cout<<setprecision(1)<<fixed<<d+d1<<endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s;
    while(cin>>s1){
        cout<<s1<<" ";
    }
    cout<<endl;

    return 0;
}
