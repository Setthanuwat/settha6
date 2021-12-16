#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include <cmath>
using namespace std;

int main()
{
double count = 0;
double sum =0;
double D = 0;
double A,B,C,Z;
string text;
ifstream source("score.txt");
while (getline(source,text))
{
    sum += (atof(text.c_str()));
    D = D+(atof(text.c_str())*atof(text.c_str()));
    count++;
}
A = sum/count;   
Z=sqrt((D/count)-(A*A));
B =roundf( A* 1000) / 1000;
C =roundf( Z* 1000) / 1000;

cout << "Number of data = " << count<<endl;
cout << "Mean = "<< B <<endl;
cout << "Standard deviation = "<< C<<endl;
}