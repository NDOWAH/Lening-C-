# include <iostream>
int main(){
    int number0;
    int number1;
    char gender;
    std:: cout <<"Input the first number:? "<< std::endl;
    std:: cin >>number0;
    std:: cout <<"Input the second number:? "<<std::endl;
    std:: cin >>number1;
    std:: cout <<"What is the gender:? "<<std::endl;
    std:: cin>>gender;
    std:: cout << std::boolalpha;
    std:: cout <<((number0 > number1) ||(number0 == number1))<<std::endl;
    std:: cout <<((number0 > number1) && (gender =='M'))<< std::endl;
    std:: cout <<!( (number0 < number1) && (gender == 'M'))<< std::endl;

}