#include<iostream>

int main(){
int a=1;
int b=1;
int c=1;
  for(int i=1;i<=10;i++){
   std::cout<<a<<"- "<<b<<"- "<<c<<"- ";
   a=a+b;
   b=b+c;
   c=c+a;
   
  } 
  return 0;
}
