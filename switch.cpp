# include<iostream>

int main(){
    int mark{90};
    switch (mark)
    {
    case 90:{
        std::cout<<"A grade\n";
    }
        break;
    case 80:{
        std::cout<<"B+ grade\n";
    }
    break;
    case 70:{
        std::cout<<"B grade\n";
    }
    default:{
        std::cout<<"You failed";
    }
        break;
    }

    return 0;
}