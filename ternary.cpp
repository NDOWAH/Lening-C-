/*Alternative and shorter form of if else statments
signature: result = (condition)? option1: option2;
option1 and option2 must be of same type or convertable type 
for implicit conversion to take place*/
# include<iostream>
int main(){
    int a{34};
    int b{30};
    int result =0;
    bool fast = true;
   std::cout<<"==============using if statement======================\n";
   if (a > b){
     result = a;
   }
   else{
    result = b;
   }
   std::cout<<result<<std::endl; 
   std::cout<<"==================using ternary operation=============\n";
       /*
    auto result = (a >b)? a : b;
    std::cout<<result;
    */
   std::cout<<"==========other ways of using ternary operation=======\n";
   std::cout<<"----Speed---"<<std::endl;
   int speed {fast? 300: 150};
   std::cout<<"The speed is: "<<speed<<std::endl;

    return 0;
}