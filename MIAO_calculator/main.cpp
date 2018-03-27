#include "MIAO_calculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
//	a.setStyleSheet(
//		"Q{font:15px;}"
//		"Q"
//	);
//	a.setStyleSheet(
//		"QPushButton{min-height:50px; min-width: 80px; background:#DDDDDD; border-right:2px solid #646464; border-bottom:2px solid #646464; "
//		"border-left:2px solid #FFFFFF; border-top:2px solid #FFFFFF; border-radius:2px;}"
//		"QPushButton:disabled{min-height:50px; min-width: 50px; background:#DDDDDD; border-right:2px solid #FFFFFF; border-bottom:2px solid #FFFFFF; "
//		"border-left:2px solid #646464; border-top:2px solid #646464; border-radius:2px;}"
//		"QPushButton:pressed{min-height:50px; min-width: 50px; background:#DDDDDD; border-right:2px solid #FFFFFF; border-bottom:2px solid #FFFFFF; "
//		"border-left:2px solid #646464; border-top:2px solid #646464; border-radius:2px;}"
//		"QPushButton:hover{outline:1px solid #0066FF;}"
//		"QPushButton:hover{background:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(100,100,100,200),stop: 0.5 rgba(0,255,100,200), stop:1 rgba(100,100,100,200));}"
//		"QPushButton:focus{background:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(150,150,150,150), stop: 0.5 rgba(50,50,50,255), stop:1 rgba(0,0,0,200));}"
//	);

	MIAO_calculator w;
	w.setWindowTitle("TEST NAME");
	w.show();
	return a.exec();
}
