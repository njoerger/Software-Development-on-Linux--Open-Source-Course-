/**
 * Hello World
 *
 * Copyright 2012 Cody Van De Mark
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either 
 * version 3.0 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 * 
 **/

#include <qapplication.h>
#include <qpushbutton.h>

int main( int argc, char **argv )
{
	QApplication a( argc, argv);

	QPushButton testButton( "Test Me", 0 );
	testButton.resize(150, 50);

	testButton.show();
	return a.exec();

}
