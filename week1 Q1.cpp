#include<iostream>
using namespace std;
int search (int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    if(arr[i]==x)
    return i;
}
//driver code
int main(void)
{
    int arr[]={2,3,4,10,40};
    int x=10;
    int n= sizeof(arr)/sizeof(arr[0]);

    //Function call
    int result=search(arr,n,x);
    (result==-1)
    ?cout<<"element is not present in array"
    :cout<<"element is present at index"<<result;
    return 0;
}