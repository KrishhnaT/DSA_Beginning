#include <bits/stdc++.h>
#define MAX 100
using namespace std;
int main (){
     int n;
      int arr[MAX];
      cout<<"enter number N"<<endl;
      cin>>n;

      for (int i=0;i<n;i++){
          arr[i] = rand();
      }
      for(int j=0;j<n;j++){
          cout<<arr[j]<<" ";
      }

      for(int i=0;i<n;i++){
          for(int j=11+i;j<n;j++){
               if(arr[j]<arr[i]){
                    int temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }

          }
      }
      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;

}