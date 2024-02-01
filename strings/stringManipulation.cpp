# include <iostream>
# include <string>
using namespace std;

int main(){
    char message[]{"Hello Jane, how are you doing?"};
    char *message_ptr[]{message};
    string city{"Alabama"};
    string city1{"Blabama"};
    cout<<"The message length is: "<<strlen(message)<<endl;
    cout<<"The message pointer length is: "<<strlen(*message_ptr)<<endl;
    cout<<"===================================================\n"<<endl;

    /*The sizeof function can be use in the same way but 
    it would include the null character as opposed by strlen function
    The sizeof can't be application in pointer*/ 
    cout<<"The message length is: "<<sizeof(message)<<endl;  //gives 31  
    cout<<"The message length is: "<<sizeof(*message_ptr)<<endl;  
    cout<<std::strcmp(city1, city)<<std::endl;
    cout<<"Concatenate the strings: "<<std::strcat(city, city1)<<std::endl;
    cout<<"Concatenate the strings: "<<std::strcat(city, city1)<<std::endl;
}