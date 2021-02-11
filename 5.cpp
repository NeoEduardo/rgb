#include <iostream>
#include <string.h>
int main(int argc,char *argv[]){
char kelime[1000] ="";
strcat(kelime,argv[2]);
    for(int i=3;i<argc;i++){
        strcat(kelime," ");
        strcat(kelime,argv[i]);
    }
std::cout<<"\033["<<argv[1]<<";1m"<<kelime<<"\033[0m"<<std::endl;
}
