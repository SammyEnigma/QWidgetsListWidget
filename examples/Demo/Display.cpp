#include "Display.h"
#include "ui_Display.h"

Display::Display(const QModelIndex &index) :
    QWidgetsListWidgetDisplay(index),
    ui(new Ui::Display)
{
    ui->setupUi(this);
}

Display::~Display()
{
    delete ui;
}