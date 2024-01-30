# include <iostream>
# include <string>

int main(){
    char c_upper{'C'};
    char a_lower{'a'};
    std:: cout<<"======================================\n";
    if (isalpha(c_upper)){
        if(isupper(c_upper)){
            std::cout <<"C is in upper case"<<std::endl;
        }
        else{
            std::cout<<"C is in lower case"<<std::endl;
        }

    }
    else{
        std::cout<<c_upper<<" is not a character"<<std::endl;
        }
}