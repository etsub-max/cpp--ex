#include<iostream>
using namespace std;
int main(){
int age;
cout<< "enteryour age:";
cin>> age;	
while(age<1 || age>120) {
cout<<"invalid age! please enter avalid age:";
cin>>age;
}
cout <<"thank you! your age is "<<age<<"_"<<endl;
return 0;
}	
	
