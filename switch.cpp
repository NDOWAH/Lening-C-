# include<iostream>

int main(){
    int mark{85};
    /*
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
    }*/

    switch (mark)
    {
    case 90:
    case 88:
    case 85:
        {
         std::cout<<"A grade";
        }
        break;
    
    default:
        break;
    }

    return 0;
}