#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void insert(stack<int> &v , int val){
    if(v.size()==0||val>=v.top()){
        v.push(val);
        return;
    }
    int temp = v.top();
    v.pop();
    insert(v,val);
    v.push(temp);
}


void sortstack(stack<int> &v){
    if(v.size()==1){
        return;
    }
    int val = v.top();
    v.pop();
    sortstack(v);
    insert(v,val);
}

int main() {
	// your code goes here
	stack<int> a;
	a.push(5);
	a.push(4);
	a.push(9);
	a.push(2);
	a.push(55);
	a.push(3);
	sortstack(a);
	while (!a.empty()) 
    { 
        cout<< a.top()<<" "; 
        a.pop(); 
    } 
	return 0;
}
