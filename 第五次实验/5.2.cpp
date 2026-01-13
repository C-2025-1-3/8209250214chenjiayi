// student.h
class Student{
public:
void display();
void set_value(int n,const char* na,char s);
private:
int num;
char name[20];
char sex;
};

// student.cpp
#include<iostream>
#include"student.h"
using namespace std;
void Student::display(){
cout<<"num："<<num<<endl;
cout<<"name："<<name<<endl;
cout<<"sex："<<sex<<endl;
}
void Student::set_value(int n,const char* na,char s){
num=n;
int i=0;
while(na[i]!='\0'){name[i]=na[i];i++;}
name[i]='\0';
sex=s;
}

// main.cpp
#include<iostream>
#include"student.h"
using namespace std;
int main(){
Student stud,stud1;
stud.set_value(0,"",' ');
stud1.set_value(7,"tcg",'m');
stud.display();
stud1.display();
return 0;
}
