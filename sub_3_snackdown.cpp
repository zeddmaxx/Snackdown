#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<limits.h>


int main() {
	int t;
	cin>>t;
	while(t>0){
	    t--;
	    int n;
	    cin>>n;
	    int arr[n] = {0};
	    for(int i=0; i<n;i++){
	        cin>>arr[i];
	    }
	    int o=0;
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            if(__gcd(arr[i], arr[j])==1){
	                o=1;
	                break;
	            }
	        }
	        if(o==0){
	            break;
	        }
	    }
	   if(o==1)
	            cout<<0<<endl;
	   
	  else{
	        cout<<1<<endl;
	        if(arr[0]==47)
	            arr[0] = 43;
	        else
	            arr[0] = 47;
	  }
	  //print output
	  for(int i=0;i<n;i++){
	                cout<<arr[i]<<" ";
	            }
	  cout<<endl;
	        
	}
	return 0;
}