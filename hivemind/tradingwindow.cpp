#include "tradingwindow.h"
#include "ui_tradingwindow.h"

TradingWindow::TradingWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TradingWindow)
{
    ui->setupUi(this);
}

TradingWindow::~TradingWindow()
{
    delete ui;
}
