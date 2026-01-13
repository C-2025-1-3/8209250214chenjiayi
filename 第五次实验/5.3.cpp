#include<iostream>
using namespace std;
class Cuboid{
private:
double length,width,height;
public:
void input(){cin>>length>>width>>height;}
double getVolume(){return length*width*height;}
};
int main(){
Cuboid c[3];
for(int i=0;i<3;i++)c[i].input();
for(int i=0;i<3;i++)cout<<c[i].getVolume()<<endl;
return 0;
}
