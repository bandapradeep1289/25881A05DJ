#include<iostream>
using namespace std;
class addition
{
public:
       int add(int a , int b)
      {
     return a+b;
}
    float add(float a,float b)
{
        return a+b;
}
int add(int a,int b,int c)
{
       return a+b+c; 
}
};
int main()
{
addition m;
cout<<"Addition of two integers: "<<m.add(10,20)<<endl;
cout<<"Addition of two floats: "<<m.add(4.5f,2.4f)<<endl;
cout<<Addition of three numbers: <<m.add(10,40,20)<<endl;
}