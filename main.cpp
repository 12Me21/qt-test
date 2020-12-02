#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <stdio.h>

void test() {
	puts("test");
}

int main(int argc, char **argv) {
	QApplication app {argc, argv};
	QMainWindow window;
	QPushButton hello {"Hello &World!", &window};
	QObject::connect(&hello, &QPushButton::released, &window, test);
	
	window.resize(100, 40);
	window.show();
	return app.exec();
}
