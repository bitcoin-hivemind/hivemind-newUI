#include "decisionmarketcreationwidget.h"
#include "ui_decisionmarketcreationwidget.h"

DecisionMarketCreationWidget::DecisionMarketCreationWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DecisionMarketCreationWidget)
{
    ui->setupUi(this);
}

DecisionMarketCreationWidget::~DecisionMarketCreationWidget()
{
    delete ui;
}
