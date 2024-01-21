# include <iostream>

int main(){
    char message[]{'H', 'e', 'l','l','o','\0'};
    int COUNT{sizeof(message)};
   /* for (int i=0; i< COUNT; i++){
        std::cout<<message[i];

    }*/
    /*The statement below will print hello with gabbage values 
    appended at the end of hello. To avoid this, we need to tell
    std:cout when to notice the the end of the string by adding '\0'
    to the end of the character array or declare the arry size 1 plus higher
    this will help the compiler insert the null terminator*/
    std::cout<<message;
    std::cout<<std::endl;
    /*The following is a better and recommended
    workaround for this with this c++ implicitly insert the null
    terminator thus making the size of the character 6*/
    char message1[]{"Hello"};
    std::cout<<message1<<std::endl;
}
