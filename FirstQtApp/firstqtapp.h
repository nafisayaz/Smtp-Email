#ifndef FIRSTQTAPP_H
#define FIRSTQTAPP_H

#include <QMainWindow>

namespace Ui {
class FirstQtApp;
}

class FirstQtApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstQtApp(QWidget *parent = 0);
    ~FirstQtApp();

private:
    Ui::FirstQtApp *ui;
};

#endif // FIRSTQTAPP_H
