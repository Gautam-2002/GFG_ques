#include <bits/stdc++.h>
using namespace std;

bool checkUniqueOccurences(int arr[],int size){
    sort(arr,arr+size);
   
   vector<int> v;
   
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=i;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                i=j-1;
                break;
            }
            
        }
          v.push_back(count);
      
    }

       for(int i=0;i<v.size()-1;i++){
          if(v[i]==v[i+1]){
              return false;
          }
        }
        return true;   
}

int main(){
    int arr1[6]={1,1,1,2,2,3};
    int arr2[5]={1,2,1,1,3};
    cout<<checkUniqueOccurences(arr1,5)<<endl;
    return 0;
}