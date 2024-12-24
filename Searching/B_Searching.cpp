#include<iostream>
using namespace std;
int main(){
    const int SIZE = 100000;
    int n,y;
    cin>>n;
    int a[SIZE];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    
    cin>>y;
    int flag = -1;
    for(int i =0; i<n ; i++){
        if (a[i] == y){
            flag =i;
            break;
        }
    }
        
            cout<< flag <<endl;
    
    
    return 0;
}