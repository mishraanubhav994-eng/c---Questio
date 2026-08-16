#include<iostream>
using namespace std;

int main(){
    string value ;
    cout<<"Enter the value to be checked:"<<endl;
    cin>>value;
    cout<<"the size of value is:"<<value.size()<<endl;
    int countV = 0;
    int countC =0;
    for(int i = 0; i < value.size();  i++){
        if(value[i]=='a' || value[i]== 'e' || value[i]== 'i' || value[i]== 'o'|| value[i]== 'u'||value[i]== 'A'||value[i]== 'E'|| value[i]== 'I'||value[i]== 'O'||value[i]== 'U'){
         countV++;
        }
        else {
            countC++;
        }
    }
    cout<<"The number of vovel in value is :"<<countV<<endl;
    cout<<"The number of consonent in value is :"<<countC<<endl;




}