#include "barchart.h"
#include <iostream>

///tela de abbertura do barchart
void Barchart::welcome(){
  std::cout<<"=================================================="<<std::endl;
  std::cout<<"      Welcome to the Bar Chart Race, v.01 "<<std::endl;
  std::cout<<"              Coryright (C) 2022"<<std::endl;
  std::cout<<"=================================================="<<std::endl;
}
void Barchart::init(){
  std::cout << ">>> Animation speed is: " << animation_speed << std::endl;
  std::cout << ">>> Title: " << data.get_title() <<std::endl;
  std::cout << ">>> Value is: " << data.get_source()<<std::endl;
  std::cout << ">>> Source: " << data.get_unity()<< std::endl;
  std::cout << ">>> # Category found: " << std::endl;
  std::cout << ">>> Press enter to continue " << std::endl;
  
}