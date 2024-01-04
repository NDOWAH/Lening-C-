#include<iostream>

int main(){
   int is_green_light{true};
    int is_red_light{false};
    /*
    if (is_green_light ==true){
        std::cout<<"It safe to go!"<<std::endl;
    }
    else{
        std::cout<<"Please wait until the green light show up.";
    }
    */
   //exploring the if statement.
   if (is_green_light){
    std::cout <<"it's safe to go now.";
   }
   else{
    std::cout <<"Please be patience there's no safty at the moment";
   }

}