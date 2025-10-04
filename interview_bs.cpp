#include<iostream>
using namespace std;

int first_occurance(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    
    int answer=-1;


    while(start<=end){

        if(arr[mid]==key){
             answer=mid;
            end=mid-1;
        }

        if(arr[mid]<key){
            start=mid+1;
        }

        if(arr[mid]>key){
            end=mid-1;
        }
        
        mid=(start+end)/2;

    }
    return answer;
}

int second_occurance(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int answer=-1;


    while(start<=end){

        if(arr[mid]==key){
            answer=mid;
            start=mid+1;
        }

        if(arr[mid]<key){
            start=mid+1;
        }

        if(arr[mid]>key){
            end=mid-1;
        }
        
        mid=(start+end)/2;

    }
    return answer;
}

int main(){

    int even[]={1,2,3,4,5,6,6,6,6};
    int anku=first_occurance(even,9,6);
    int kumu=second_occurance(even,9,6);

    //total number of occurance of key
    int total_occurance= (kumu-anku)+1;

    cout<<"the element at index first index in :- "<<anku<<endl;
    cout<<"the element at index second index in :- "<<kumu<<endl;
    cout<<"the total number of occurance of key is :- "<<total_occurance;
    return 0;
}
