#include <bits/stdc++.h>
#include<string>
using namespace std;

string reverseWord(string str){
 int len=str.length();//we can also use str.size()
    for(int i=0;i<len/2;i++)
    {
        char c;
        c=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=c;
    }
    return str;
}
void rvereseArray(int arr[], int start, int end)//arr is pointer to real array[0]
{
    /* we can't use "int n=sizeof(arr)/sizeof(arr[0]);"
     because arr[] here is a pointer to real array
     so, n will be 1 as arr is pointer which is taken as int */
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
  
 
int main(){
    string s="Sirsa";
    cout<<reverseWord(s)<<endl;
    //actual string does'nt change because func. is taking pass by value
    cout<<s<<endl;
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);//n=(5*4)/4=5
    rvereseArray(arr,0,n-1);//arr is passed by adress
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}