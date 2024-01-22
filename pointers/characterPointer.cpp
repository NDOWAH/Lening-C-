# include <iostream>

int main(){
    /*
    in the code below, the string is transform into an array of constant
    characters and message will point to the addresss of the first character.
    to fixed the problem we have to declare message as const
    */
   //char *message{"hellow world!"};
   const char *message{"hellow world!"};
   std::cout <<"Message: "<<message<<std::endl;
   /*the code below will print h.
   This is because the 'hellow world' would be tranformed into 
   an array of constant characters and the pointer message will point
   to the first character*/
   std::cout <<*message<<std::endl;

}