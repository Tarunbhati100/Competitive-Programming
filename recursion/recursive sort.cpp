#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void insert(vector<int> &v , int val){
    if(val>v[v.size()-1]||v.size()==0){
        v.push_back(val);
        return;
    }
    int temp = v[v.size()-1];
    v.pop_back();
    insert(v,val);
    v.push_back(temp);
}


void mysort(vector<int> &v){
    if(v.size()==1){
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    mysort(v);
    insert(v,val);
}

int main() {
	// your code goes here
	vector<int> a{1, 5 , 6, 6, 7, 9, 5, 4, 9};
	mysort(a);
	for(int i :a){
	    cout<<i<<" ";
	}
	return 0;
}
