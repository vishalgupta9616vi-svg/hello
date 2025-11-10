#include<iostream>
using namespace std;
int findmissing(int arr[],int brr[],int size,int n){
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            return 1;
        }
    }
    return 0; 
}
int main(){
    int arr[]={1,3,5,3,4};
    int brr[]={1,2,3,4,5};
    int size = 5;
    for(int i=0;i<5;i++){
        int n = brr[i];
        if(findmissing(arr,brr,size,n)){

        }
        else{
            cout<<"it is not found "<<brr[i];
        }
        
    }

}