/*
 * =====================================================================================
 *
 *       Filename:  GModule.cpp
 *
 *    Description:
 *
 *        Created:  01/21/2017 03:41:09 PM
 *
 *         Author:  Flora Huot, flora.huot@epitech.eu
 *
 * =====================================================================================
 */

#include "GModule.hpp"

GModule::GModule(QString const &name, QWidget *parent, int x, int y, int width, int height)
	: QDockWidget(name, parent, Qt::Dialog | Qt::CustomizeWindowHint),
	_monitorModule(nullptr),
	_name(name), _x(x), _y(y), _width(width), _height(height), _closed(false) {

		setFocusPolicy(Qt::StrongFocus);
	}

GModule::GModule(GModule const &other)
	: QDockWidget(other._name, other.parentWidget(), Qt::Dialog),
	 _monitorModule(other._monitorModule),
	_name(other._name), _x(other._x), _y(other._y), _width(other._width), _height(other._height) {

		setFocusPolicy(Qt::StrongFocus);
	}

GModule &GModule::operator=(GModule const &other) {

	GModule tmp(other);
	std::swap(_monitorModule, tmp._monitorModule);
	std::swap(_name, tmp._name);
	std::swap(_x, tmp._x);
	std::swap(_y, tmp._y);
	std::swap(_width, tmp._width);
	std::swap(_height, tmp._height);
	std::swap(_closed, tmp._closed);
	return *this;
}

GModule::~GModule() {
	
	delete _monitorModule;
}

/* ===================================================================================== */

// void GModule::keyPressEvent(QKeyEvent *event) {
// 	if (event->key() == Qt::Key_A) {
// 		close();
// 		_closed = true;
// 	}
// 	QWidget::keyPressEvent(event);
// }

// bool GModule::event(QEvent *event) {
//
// 	if (event->type() == QEvent::WindowStateChange) {
// 		QWidget::event(event);
// 		move(_x, _y);
// 		resize(_width, _height);
// 	}
//
// 	return QWidget::event(event);
// }
