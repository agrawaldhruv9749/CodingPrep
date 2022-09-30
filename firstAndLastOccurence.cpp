#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
int mid, s=0,e=n-1,ans=-1;
while(s<=e){
    mid= s+(e-s)/2;
    if(arr[mid]==key){
        ans=mid;
        e=mid-1;
    }
    else if (arr[mid]>key)
    {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    
}
return ans;
}
int last(int arr[],int n,int key){
int mid, s=0,e=n-1,ans=-1;
while(s<=e){
    mid= s+(e-s)/2;
    if(arr[mid]==key){
        ans=mid;
        s=mid+1;
    }
    else if (arr[mid]>key)
    {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    
}
return ans;
}

int main(){
    int arr[]={1,2,4,4,4,4,6,7,8,9};
    cout<<first(arr,10,4)<<endl;
    cout<<last(arr,10,4);

}