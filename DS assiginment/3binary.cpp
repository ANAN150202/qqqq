#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;

    while(s<=e){
            int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;}
            else if(arr[mid]<key){
                    s=mid+1;}

            else{
                e=mid-1;
            }

            } return -1;
        }




int main()
{ int n,key;

 cout<<"Enter the array size: "<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter elements of the array in a sorted way"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       cout<<"Enter the element you want to search"<<endl;
        cin>>key;
        cout<<"The index is: ";
        cout<<binarysearch(arr,n,key)<<endl;
 return 0;
}
