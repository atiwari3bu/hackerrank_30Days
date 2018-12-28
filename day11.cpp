#include <bits/stdc++.h>

using namespace std;

void hourGlass(vector<vector<int>> arr){
    int arr_size=arr.size();
    int max=-1000;
    int sum=0;
    
    for(int r=0;r<arr_size-2;++r){
        for(int c=0;c<arr_size-2;++c){
            for(int i=0;i<3;++i){
                for(int j=0;j<3;++j){
                    if(i==1 && j!=1) continue;
                    sum+=arr[i+r][j+c];
                }
            }
            if(max<sum) max=sum;
            sum=0;
        }
    }
    
    cout<<max<<endl; // Answer
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    hourGlass(arr);

    return 0;
}
