#include <iostream>
int addNumbers(int firt_param, int second_param){
    int sum = firt_param + second_param;
    return sum;
}
int multiplyIntegers(int first_param, int second_param){
    int result = first_param * second_param;
    return result;
    }

int main(){
    int first_number{10};
    int second_number{29};
    int sum, product;
    sum = addNumbers(first_number, second_number);
    product = multiplyIntegers(first_number, second_number);
    std:: cout <<"The sum of the two numbers is:" <<sum
               <<"and their product is: "<<product << std::endl;

}