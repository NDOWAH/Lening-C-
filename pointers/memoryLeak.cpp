# include <iostream>

/*This occurs when we have lost access to a piece of memory 
that was dynamically allocated to a program*/
int main(){
    int *p_NUMBER(new int(67));
    int score{45};
    /*Because p_NUMBER now has been assign the address of score, we lost access
    to the memory location of 67 and thus can not longer release this memory
    At this point we can not use the memory in our program since we do not have access
    The OS can not alway use this memory since it has been reserve*/
    p_NUMBER = &score;

    std::cout<<"p_NUMBER: "<<p_NUMBER<<" value: "<<*p_NUMBER<<std::endl;
    std::cout<<"value: "<<score<<std::endl;
    delete p_NUMBER; //program crashes based on the explanations above.
    p_NUMBER = nullptr;
}