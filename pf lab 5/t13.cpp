#include<iostream>
using namespace std;
int pool1(int volume,int pipe1,int pipe2,float time );
int pool2(int volume,int pipe1,int pipe2,float time );
int pool3(int volume,int pipe1,int pipe2,float time );
int pool(int volume,int pipe1,int pipe2,float time );
int main()
{
 cout<<"Enter volume of the pool in liters :";
 int volume;
 cin>>volume;
 cout<<"Enter the flow rate of the first pipe : ";
 int pipe1;
 cin>>pipe1;
  cout<<"Enter the flow rate of the second  pipe : ";
 int pipe2;
 cin>>pipe2;
 cout<<"Enter the hours in which the worker is absent : ";
 float hours;
 cin>>hours;
 int result=pool( volume, pipe1, pipe2, hours );
 int result1=pool1( volume, pipe1, pipe2, hours );
 int result2=pool2( volume, pipe1, pipe2, hours );
 int result3=pool3( volume, pipe1, pipe2, hours );
 if(volume>pipe1&&pipe2)
 {
 cout<<"The pool is "<<result<<"%"<<" full."<<"Pipe 1:"<<result1<<"%"<<" Pipe 2:"<<result2<<"%";
 }
 if(volume<=pipe1&&pipe2)
 {
 cout<<"For "<<hours<<" hours,the pool over flows with "<<result3<<" liters";
 }
}
int pool(int volume,int pipe1,int pipe2,float time )
{
    int vpool=((pipe1*time+pipe2*time)/volume)*100;;
    return vpool;
      
}
int pool1(int volume,int pipe1,int pipe2,float time )
{
    int p=(pipe1*time);
    p=p/(pipe1*time+pipe2*time)*100; 
    return p;
}
int pool2(int volume,int pipe1,int pipe2,float time )
{
   int p=(pipe2*time);
    p=p/(pipe1*time+pipe2*time)*100; 
    return p;
}
int pool3(int volume,int pipe1,int pipe2,float time )
{
      if(volume<=pipe1<=pipe2)
    {
        int vpool=((pipe1*time+pipe2*time)/volume)*100;
        return vpool;
    }
}
