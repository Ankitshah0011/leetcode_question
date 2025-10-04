#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        if(arr[mid<key]){
            start=mid+1;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
    mid=(start+end)/2;
}
return -1;
}
int main(){
    int even[]={2,3,4,5,6};
    int ankit=binary_search(even,5,5);
   
    cout<<"the result is :- "<<ankit<<endl;
    return 0;
}