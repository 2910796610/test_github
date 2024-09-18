#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMessageBox>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actAbout_triggered(); // 槽函数声明

private:
    Ui::MainWindow *ui;
};

inline void MainWindow::on_actAbout_triggered()
{
     QMessageBox::about(this, "关于", "陈意铭2022414040206");
}
#endif // MAINWINDOW_H
