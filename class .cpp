#include<iostream>
using namespace std;

class human{
    public:
  string name;
  int age;
  string loc;

  // constructor--> special fun which take diffrent type of value and assign to the keys
  // name of the constructor same as name of the class

  human(string n, int a, string l){
    name=n;
    age=a;
    loc=l;
  }
};
int main(){
    human obj("shalu","20","Ajmer");
    cout<<obj.name<<endl;
    cout<<obj.age<<endl;
    cout<<obj.loc<<endl;

    return 0;
}

