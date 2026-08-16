#include<iostream>
using namespace std;

class Student{ //class creation

    public:
    string name;
    int age;
    int roll_num;
    string grade;
};
     int main(){
        Student s1; // Obejct declaration
        s1.name ="Anubhav Mishra";
        s1.age = 18;
        s1.roll_num= 21;
        s1.grade = "A";
        cout<<s1.name<<endl;
     }