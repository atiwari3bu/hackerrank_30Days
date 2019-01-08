#include <bits/stdc++.h>
#include <string>

using namespace std;

vector<string> split_string(string);

void printNames(vector<vector<string>> input, int n){

    vector<string> names;
    for(int i=0;i<n;++i){
        string str=input[i][1];
        string str1="@gmail.com";
        size_t found = str.find(str1); 
        if (found != string::npos) {
            names.push_back(input[i][0]);
        }
    }

    for(auto iter=names.begin();iter!=names.end();++iter){
        for(auto iter1=iter;iter1!=names.end();++iter1){
            if((*iter).compare(*iter1)>0){
                string temp=*iter;
                *iter=*iter1;
                *iter1=temp;
            }
        }
    }

    for(auto iter=names.begin();iter!=names.end();++iter){
        std::cout<<*iter<<std::endl;
    }
           
}

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<vector<string>> names;

    for (int N_itr = 0; N_itr < N; N_itr++) {
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);

        vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

        string firstName = firstNameEmailID[0];

        string emailID = firstNameEmailID[1];
        names.push_back(firstNameEmailID);
    }

    printNames(names,N);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

