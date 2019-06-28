#include "firstqtapp.h"
#include "ui_firstqtapp.h"

FirstQtApp::FirstQtApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstQtApp)
{
    ui->setupUi(this);
}

FirstQtApp::~FirstQtApp()
{
    delete ui;
}
