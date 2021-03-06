//
// IMonitorModule.hpp for  in /home/grange_c/rendu/cpp_gkrellm/libmodule/include/
//
// Made by Benjamin Grange
// Login   <grange_c@epitech.eu>
//
// Started on  Sat Jan 21 15:27:33 2017 Benjamin Grange
// Last update Sun Jan 22 06:56:31 2017 Benjamin Grange
//

#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

# include "ModuleException.hpp"

struct IMonitorModule
{
    virtual ~IMonitorModule() = default;
    virtual void retrieveInformations(void) throw(ModuleException) = 0;
};

#endif /* !IMONITORMODULE_HPP */
