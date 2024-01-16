# include <iostream>
# include <string>

int main(){
    int age{};
    std::string name{};
    std::cout<<"What is your name please? \n";
    std::cin>>name;
    std::cout<<"How old are you? \n";
    std::cin >>age;
    if(age == 25){
        std::cout<<"Got it!\n";
    }
    if(name == "Jane"){
        std::cout<<"Hey "<<name<<std::endl;
    }
  



    return 0;
}