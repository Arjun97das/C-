#include <iostream>
using namespace std;

int main() {
string name;
int age;
char gender;
float weight;

cout <<"Enter your name:";
cin >>name;
cout <<"Enter age:";
cin >>age;
cout <<"Enter your gender(M/F):";
cin >>gender;
cout <<"Enter your weight(in kg):";
cin >>weight;
cout <<"\nDetails entered:\n";
cout <<"Name:"<<name<<endl;
cout <<"Age:"<<age<<"years"<<endl;
cout <<"Gender:"<<gender<<endl;
cout <<"Weight:"<<weight<<"kg"<<endl;
return 0;
}