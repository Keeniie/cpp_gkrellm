/*
 * =====================================================================================
 *
 *       Filename:  GModuleHostName.hpp
 *
 *    Description:
 *
 *        Created:  01/21/2017 06:27:00 PM
 *
 *         Author:  Flora Huot, flora.huot@epitech.eu
 *
 * =====================================================================================
 */

#ifndef GMODULEHOSTNAME_H_
# define GMODULEHOSTNAME_H_

# include "GModule.hpp"
# include "ModuleHostname.hpp"

class GModuleHostname : public GModule {

	private:
		QLabel *_labelHost;
		QLabel *_labelUser;

	protected:

	public:
		GModuleHostname(QWidget *, int x, int y);
		GModuleHostname(GModuleHostname const &);
		GModuleHostname &operator=(GModuleHostname const &);
		virtual ~GModuleHostname();
};

#endif /* !GMODULEHOSTNAME_H_ */
