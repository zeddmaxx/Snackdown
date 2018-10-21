#include<iostream>
#include<limits.h>
using namespace std;
int checkSort(int arr[], int n) {
		//make circular array!!
		int s = arr[0];
		int ind=0;
		for(int j=1;j<n;j++) {
			if(arr[j]<=s) {
				s = arr[j];
				ind = j;
			}
		}
		for(int i=ind;i<=n+ind-1;i++) {
			if(arr[i%n] > arr[(i+1)%n]&&(arr[(i+1)%n]!=s)) {
			    
				return 0;
			}
		}
		return 1;
	}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            }
         if(checkSort(arr,n)==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}