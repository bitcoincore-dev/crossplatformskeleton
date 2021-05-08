// Copyright (c) 2018 Jonas Schnelli
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef APPLICATION_MAINWINDOW_H
#define APPLICATION_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/** Overview ("home") page widget */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QMainWindow *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // APPLICATION_MAINWINDOW_H
