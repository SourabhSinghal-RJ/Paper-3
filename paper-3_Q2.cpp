#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &v1,int count,int d){
    d=d%count;
    cout<<"List before rotation : {";
	for(int k=0;k<count;k++){
	    cout<<v1[k];
	    if(k!=count-1){
	        cout<<",";
	    }
	}
	cout<<"}"<<endl;
    if(d!=0){
        vector<int> temp(count);
        for(int i=0;i<count;i++){
            temp[(i+count-d)%count]=v1[i];
        }
        for(int i=0;i<count;i++){
            v1[i]=temp[i];
        }
    }
    cout<<"List after rotation : {";
	for(int k=0;k<count;k++){
	    cout<<v1[k];
	    if(k!=count-1){
	        cout<<",";
	    }
	}
	cout<<"}"<<endl;
}

int main() {
	cout<<"Enter number of elements in list"<<endl;
	int count;
	cin>>count;
	vector<int> v1;
	cout<<"Enter elements of list"<<endl;
	for(int i=0;i<count;i++){
	    int temp;
	    cin>>temp;
	    v1.push_back(temp);
	}
	cout<<"Enter value by which you want to rotate your list"<<endl;
	int d;
	cin>>d;
	rotate(v1,count,d);
	return 0;
}
