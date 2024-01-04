#include<iostream>

int main(){
    bool is_green_light{true};
    bool is_red_light{false};
    if (is_green_light ==true){
        std::cout<<"It safe to go!"<<std::endl;
    }
    else{
        std::cout<<"Please wait until the green light show up.";
    }
    

}