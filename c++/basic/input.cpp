#include<iostream>
#include<string>
int main(){
    std::string s,s1;
    std::cout<<"enter strings ";
    std::cin>>s;
    std::getline(std::cin,s1);
    std::cout<<s<<"\n";
    std::cout<<s1;
}