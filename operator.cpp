/*This file is intended to experiment prefix and post fix how the work and also to 
experiment compouded operators in c++*/
# include<iostream>

int main(){
    int value{5};
    std::cout<<"The value is: "<<value++<<std::endl;
    std::cout<<"The new value is: "<<value<<std::endl;
    std::cout<<"===================================="<<std::endl;

    std::cout<<"value: "<<++value<<std::endl;
    std::cout <<"new value: "<<value<<std::endl;
    //Operator compounding
    value = value + 5;
    std::cout <<value<<std::endl;
    std::cout <<"+++++++++++++++++++++++++++++++++++++"<<std::endl;
    value +=5;
    std::cout<<"compound value is: "<<value<<std::endl;
    value -=6;
    std::cout<<"new compound value is: "<<value<<std::endl;


}