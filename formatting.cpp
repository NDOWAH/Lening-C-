# include<iostream>

int main(){
    //endl give the option to move to a new line
    //Experimentation without endl from iostream library
    std::cout <<"Hello Jane ";
    std::cout <<"how are you doing?\n";
    std::cout <<"=========================================\n\n";
    //With endl
    std::cout <<"Hello Jane " << std::endl;
    std::cout <<"how are you doing?"<<std::endl;

   //========================================================
   //flush gives the option to send data directly to the terminal without passing through buffer
   //Experiement with flush from iostream library, no difference interm of display on how flush works unless behind the scences
   std::cout << "++++++++++++++++++++++++++++++++++++++++++++\n\n";
   std::cout <<"This is a begginner level C++ programming"<<std::endl<<std::flush;

}