#include<bits/stdc++.h>
using namespace std;
vector<int> selectionsort(vector<int>vec,int n);
int main(){
    int a;
    int n;
    cout<<"Enter the no of elements :";
    cin>>n;
    vector<int>v;
    for(auto it = 0; it<n;it++ ){
        cin>>a;
        v.push_back(a);
    }
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;

    v = selectionsort(v,n);

    for(int y : v){
    cout<<y<<" ";
    }

    return 0;
}

vector<int> selectionsort(vector<int>vec,int n){
    for(int j = 0; j<n-1; j++){
    int min = j;
        for(int i=j+1; i<n; i++){
            if(vec[i] < vec[min]){
                min = i;
            }
        }
        swap(vec[j],vec[min]);    
    }
    return vec;
}