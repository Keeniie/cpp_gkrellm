//
// main.cpp for  in /home/grange_c/rendu/cpp_gkrellm/graphic/source/
//
// Made by Benjamin Grange
// Login   <grange_c@epitech.eu>
//
// Started on  Sat Jan 21 11:49:31 2017 Benjamin Grange
// Last update Sat Jan 21 15:00:33 2017 Benjamin Grange
//

#include <iostream>

void		libmodule(void);

int main()
{
    std::cout << "Hello World (Graphic !)" << std::endl;
    libmodule();
    #ifdef _DEBUG
    std::cout << "Debug !" << std::endl;
    #endif
    return (0);
}
