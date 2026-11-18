#include<iostream>

int main(){
char op;
double num1;
double num2;
double result;

 std::cout<<"**************************CALCULATOR*************************************"<<std::endl;

 std::cout<<"enter either (+, -, *, /): ";
 std::cin>>op;

 std::cout<<"enter number one: ";
 std::cin>>num1;

 std::cout<<"enter number two: ";
 std::cin>>num2;

 switch(op){

 case '+':
     result = num1 + num2;
     std::cout<<"result: "<<result<<'\n';
     break;

 case '-':
     result = num1 - num2;
     std::cout<<"result: "<<result<<'\n';
     break;

 case '*':
     result = num1 * num2;
     std::cout<<"result: "<<result<<'\n';
     break;

 case '/':
     result = num1 / num2;
     std::cout<<"result: "<<result<<'\n';
     break;
 default:
  std::cout<<"this is not valid response"<<'/n';


 }
 std::cout<<"**************************************************************************"<<std::endl;
return 0;
}
