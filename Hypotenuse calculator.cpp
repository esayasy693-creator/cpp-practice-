#include<iostream>
#include<cmath>

int main(){
double a , b;
std::cout<<"enter side A : ";
std::cin>>a;
std::cout<<"enter side B : ";
std::cin>>b;

 double c = sqrt((a*a) + (b*b));
std::cout<<"the final answer for hypotenuse is : "<< c;
return 0;
}
