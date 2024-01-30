# include <iostream>
# include <string>

int main(){
    char message[]{"Hello Jane, how are you doing?"};
    char *message_ptr[]{message};
   
    std::cout<<"The message length is: "<<std::strlen(message)<<std::endl;
    std::cout<<"The message pointer length is: "<<std::strlen(*message_ptr)<<std::endl;

    /*The sizeof function can be use in the same way but 
    it would include the null character as opposed by strlen function
    The sizeof can't be application in pointer*/ 
    std::cout<<"The message length is: "<<sizeof(message)<<std::endl;  //gives 31  
    std::cout<<"The message length is: "<<sizeof(*message_ptr)<<std::endl;  
}