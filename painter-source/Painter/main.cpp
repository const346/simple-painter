#include "stdafx.h"
#include "painter.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("Windows-1251")); 

	QApplication a(argc, argv);

	//”казываем деректорию дл€ плагинов
	QStringList list_path;
	QDir dir =QDir(a.applicationDirPath()+"//plugins//");
	list_path << dir.absolutePath() << a.libraryPaths();
	a.setLibraryPaths(list_path);
	//---------------------------------

	Painter w;
	w.show();
	return a.exec();
}