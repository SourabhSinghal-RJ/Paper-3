#include <bits/stdc++.h>
using namespace std;

int main() {
	int count;
	vector<int> v1;
	vector<int> v2;
	cout<<"Enter number of elements in first list"<<endl;
	cin>>count;
	cout<<"Enter elements of first list"<<endl;
	for(int i=0;i<count;i++){
	    int temp;
	    cin>>temp;
	    v1.push_back(temp);
	}
	cout<<"Enter number of elements in second list"<<endl;
	cin>>count;
	cout<<"Enter elements of second list"<<endl;
	for(int i=0;i<count;i++){
	    int temp;
	    cin>>temp;
	    v2.push_back(temp);
	}
	vector<int> unio;
	int i=0;
	int j=0;
	int size1=v1.size();
	int size2=v2.size();
	while(i<size1 && j<size2){
	    if(v1[i]<v2[j]){
	        unio.push_back(v1[i]);
	        i++;
	    }
	    else if(v1[i]>v2[j]){
	        unio.push_back(v2[j]);
	        j++;
	    }
	    else{
	        unio.push_back(v1[i]);
	        i++;
	        j++;
	    }
	}
	while(i<size1){
	    unio.push_back(v1[i]);
	    i++;
	}
	while(j<size2){
	    unio.push_back(v2[j]);
	    j++;
	}
	cout<<"union : {";
	for(int k=0;k<unio.size();k++){
	    cout<<unio[k];
	    if(k!=unio.size()-1){
	        cout<<",";
	    }
	}
	cout<<"}"<<endl;
	
	vector<int> inter;
	i=0;
	j=0;
	while(i<size1 && j<size2){
	    if(v1[i]<v2[j]){
	        i++;
	    }
	    else if(v1[i]>v2[j]){
	        j++;
	    }
	    else{
	        inter.push_back(v1[i]);
	        i++;
	        j++;
	    }
	}
	cout<<"intersection : {";
	for(int k=0;k<inter.size();k++){
	    cout<<inter[k];
	    if(k!=inter.size()-1){
	        cout<<",";
	    }
	}
	cout<<"}"<<endl;
	return 0;
}
