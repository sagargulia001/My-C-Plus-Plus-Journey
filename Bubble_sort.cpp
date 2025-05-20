#include<bits/stdc++.h>
using namespace std;

vector<int> BubbleSort(vector<int>arr, int n){

    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-1-i; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    return arr;
}

int main(){

    vector<int> vec;
    int n;

    cout<<"Enter the number of elements you want to add :";
    cin>>n;

    vec.resize(n);

    cout<<"Enter the elements:\n";

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    cout<<"Array before sorting:\n";

    for(int x : vec){
        cout<<x<<" ";
    }

    cout<<endl<<"Array after sorting:\n";

    vec = BubbleSort(vec,n);

    for(int x : vec){
        cout<<x<<" ";
    }

    return 0;
}

