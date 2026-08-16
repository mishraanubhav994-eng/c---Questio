#include<iostream>
#include<vector>
using namespace std;


void a2Dvector(vector<vector<int> > &v){
        v[0][1]= 200;
    }
int main(){
    
  
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(4);
    vector<int>v2;
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(9);
    v2.push_back(10);

    vector<int>v3;
    v3.push_back(11);
    v3.push_back(13);

    //forming vectors of the Vector
    vector<vector<int> >v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    //printing the values of the random one

    cout<<v[0][1]<<endl;
    a2Dvector(v);
    cout<<v[0][1];
    
    

}
