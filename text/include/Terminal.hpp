//
// Terminal.hpp for  in /home/guitta_l/worktree/Training/ncurses/
//
// Made by Louis Guittard
// Login   <guitta_l@epitech.eu>
//
// Started on  Sat Jan 21 14:20:44 2017 Louis Guittard
// Last update Sun Jan 22 06:56:02 2017 Louis Guittard
//

#ifndef TERMINAL_HPP_
# define TERMINAL_HPP_

# include <ncurses.h>
# include <vector>
# include "Window.hpp"
# include "TModuleHostUser.hpp"
# include "TModuleDate.hpp"
# include "TModuleOS.hpp"
# include "TModuleCPU.hpp"
# include "TModuleRAM.hpp"
# include "TModuleNetwork.hpp"

class			Terminal
{
public:
    Terminal();
    ~Terminal();
    Terminal(Terminal const &ref);
    Terminal	&operator=(Terminal const &ref);

public:
    int			getCols() const;
    int			getLines() const;
    std::vector<Window *>	getModules() const;
    bool		getSort() const;
    void		setTimeout(int);
    void		pushModule(Window &);
    void		addModule(char);
    void		removeModule();
    void		moveModule(int, int);
    Terminal	&operator++();

public:
    void		update() const;
    void		drawModules() const;
    void		sort();

private:
    WINDOW		*_screen;
    std::vector<Window *>	_modules;
    int			_cols;
    int			_lines;
    bool		_sort;
    int			_selected;
};

std::ostream		&operator<<(std::ostream &os, Terminal const &ref);

#endif /* !TERMINAL_HPP_ */
