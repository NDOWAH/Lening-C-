#include <iostream>
int addNumbers(int firt_param, int second_param){
    int sum = firt_param + second_param;
    return sum;
}
int main(){
    int first_number{10};
    int second_number{29};
    int sum;
    sum = addNumbers(first_number, second_number);
    std:: cout <<"The sum of the two numbers is:" <<sum << std:: endl;

}