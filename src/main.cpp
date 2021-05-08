#include <QApplication>
#include "mainwindow.h"

int main(int argc, char** argv)
{
  QApplication app(argc, argv);
 MainWindow *newWin = new MainWindow();
  newWin->show();
  app.exec();
}
