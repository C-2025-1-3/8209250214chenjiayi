#include<iostream>
using namespace std;
class Student{
public:
int num;
int score;
};
void max(Student* p){
int maxScore=p[0].score,maxNum=p[0].num;
for(int i=1;i<5;i++){
if(p[i].score>maxScore){
maxScore=p[i].score;
maxNum=p[i].num;
}
}
cout<<maxNum<<endl;
}
int main(){
Student s[5];
for(int i=0;i<5;i++)cin>>s[i].num>>s[i].score;
max(s);
return 0;
}
