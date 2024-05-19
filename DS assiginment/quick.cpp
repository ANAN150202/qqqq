# include <iostream>
using namespace std;

int Partition(int arr[], int s, int e)
{
 int pivot = arr[e];
 int pindex = s;

 for(int i = s;i<e;i++)
 {
 if(arr[i]<pivot)
 {
 int temp = arr[i];
 arr[i] = arr[pindex];
 arr[pindex] = temp;
 pindex++;
 }
 }

 int temp = arr[e];
 arr[e] = arr[pindex];
 arr[pindex] = temp;

 return pindex
 ;
}

void QuickSort(int arr[], int s, int e)
{
 if(s<e)
 {
 int p = Partition(arr,s, e);
 QuickSort(arr, s, (p-1));
 QuickSort(arr, (p+1), e);
 }
}

int main()
{

 int size=0;
 cout<<"Enter Size of array: "<<endl;
 cin>>size;
 int myarray[size];

 cout<<"Enter "<<size<<" integers in any order: "<<endl;
 for(int i=0;i<size;i++)
 {
 cin>>myarray[i];
 }

 cout<<endl;

 QuickSort(myarray,0,(size-1));  // quick sort called

 cout<<"Sorted array:"<<endl;
 for(int i=0;i<size;i++)
 {
 cout<<myarray[i]<<" ";
 }

 return 0;
}
