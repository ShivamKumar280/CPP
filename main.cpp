#include <iostream>
using namespace std;
void dup(int arr[],int n){
    int i = 0;
    int count = 1;
    for(int j = 0; j < n; j++){
        if(arr[i]!=arr[j]){
            count++;
            i++;
            arr[i]=arr[j];
        }
    }
    for(int k = 0; k < n; k++){
        if(k>=count){
            arr[k]=0;
        }
    }
}
int main (){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    dup(arr,n);
    for(int i = 0; i < n; i++){
        cout<< arr[i] <<" ";
    }

    return 0;
}
