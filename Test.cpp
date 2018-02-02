#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n; 
	vector<int> V; 
	while(cin>>n){
		V. push_back(n);
		
	}
	int s=V.size();
	for(int i=0;i<s;i++){
		if(V[i]==42){
			break; 
		}
		else {
			cout<<V[i]<<endl; 
		}
	}
	return 0;
}