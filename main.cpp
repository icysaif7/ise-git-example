#include<iostream>
#include<utility>
#include<vector>
//Practice for DSA
//#include<bits/stdc++.h>
using namespace std;
void vector_function(){
     vector<int> vec={4,4};
    //  vector<int> vec2={3,3};
    //  \\swap(vec,vec2);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.insert(vec.begin()+2,5);

    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    // auto reversebegin= vec.rbegin();
    // auto reverseend= vec.rend();

    // for(auto i =reversebegin;i<reverseend;i++){  // FOR PRINTING IN REVERSE ORDER
    //     cout<<*i<<" ";
    // }
    // vec.erase(vec.begin()+1,vec.end()-1
    // );
    // for(auto i: vec){
    //     cout<<i<<" ";
    // }
    // cout<<vec[2];
}
void explain_stack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    
    while(st.empty()==false){
        cout<<st.top();
        st.pop();
        
        
    }
    
}
void explain_queue(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
    
//   while(q.empty()==false){
//      cout<<q.front()<<" ";
//      q.pop();
//   }
   priority_queue<int> pq;
   pq.push(1);
   pq.push(10);
   pq.push(6);   
   
//   cout<<pq.top();
   while(pq.empty()==false){
       cout<<pq.top()<<" ";
       pq.pop();
   }
    
    
}
void explain_set(){
   set<int> st;
    st.insert(10);
    st.insert(33);
    st.insert(42);
     st.insert(42);  // DOESNT ALLOW DUPLICATES
    st.insert(12);

    for(auto i: st){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<< "Multiset is heree"<<endl;
    
     multiset<int> ms;
    ms.insert(10);
    ms.insert(33);
    ms.insert(42);
     ms.insert(42);  //  ALLOWS DUPLICATES
    ms.insert(12);

    for(auto itr: ms){
        cout<<itr<<" ";
    }
    cout<<endl;
   
   auto it=ms.erase(ms.find(42));
   for(auto it: ms){
        cout<<it<<" ";
    }
    // cout<<endl;
    // auto it =st.find(12);
    // if(it!=st.end()){
    //     cout<<*it<<" ";
    // }
 
    
    
}
void explain(){
    int arr[5]={6, 2 , 4 ,5 ,1};
    cout<<accumulate(arr,arr+5,2);
}


int main(){
   
    explain();
    return 0;
    
    
    // pair<int,int>pr1={2,8};
    // cout<<pr1.first<<"  "<<pr1.second;
    // pair<pair<int,int>,char> pr1={{10,20},'R'};
    // cout<<pr1.second;
    
}
