//Atharva Verma
//2010991839
//05
//Question 1

#include <iostream>
using namespace std;

void display(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    try{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    int sum=0,len=0,s=0,e=0;
    int max=0;//to check max length
    cout<<"Subarrays with given sum are "<<endl;
    for(int i=0;i<n;i++){
        sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(sum==0){
                display(arr,i,j);
                cout<<endl;
            }
        }
    }
    cout<<"Max lenght sub array ";
    display(arr,s,e);
    }
  //Execptional handling
    catch(exception e){
        
    }
}
