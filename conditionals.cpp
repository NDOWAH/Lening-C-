# include <iostream>
# include <string>

int main(){
    char drink_choice{};
    int age{};
    std::string name{};
    std::cout<<"What is your name please? \n";
    std::cin>>name;
    std::cout<<"How old are you? \n";
    std::cin >>age;
    std::cout <<"What is your choice of drink? \n";
    std::cin >>drink_choice;
    if(age == 25){
        std::cout<<"Got it!\n";
    }
    if(name == "Jane"){
        std::cout<<"Hey "<<name<<std::endl;
        if (drink_choice == 'W'){
            std::cout<<"Your drink choice is wine!"<<std::endl;
        }

    }
  



    return 0;
}