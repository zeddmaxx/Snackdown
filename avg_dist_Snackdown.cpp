#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<limits.h>
int main() {
	int t;
	cin>>t;
	while(t>0){
	     //map<int, int> ma;
	   //  vector <pair <int,int> > vec;
	    t--;
	    int n,m;
	    cin>>n>>m;
	    char arr[n][m];
	    int o=0;
	    int x1,y1,x2,y2;
	    int ma[n+m-1]={0};
	    for(int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            cin>>arr[i][j];
	            if(arr[i][j]=='1'){
	                o++;
	               }
	            }
	        }
	    int pre[o*2] = {0};
	    int k=0;
	    for(int i=0;i<n;i++){
	        for(int j=0; j<m; j++){
	            if(arr[i][j]=='1'){
	               pre[k] = i;
	               pre[k+1] = j;
	               k+=2;
	            }
	        }
	    }
	   //cout<<o*2<<endl;
	   
	   for(int i=0;i<o*2;i+=2){
	       x1 = pre[i];
	       y1 = pre[i+1];
	       for(int j=i+2;j<o*2;j+=2){
	          x2 = pre[j];
	          y2 = pre[j+1];
	            ++ma[abs(x1-x2)+abs(y1-y2)];
	       }
	       
	   }
	         
    for(int i=1; i<=n+m-2; i++)
	     cout<<ma[i]<<" ";
	}
	return 0;
}