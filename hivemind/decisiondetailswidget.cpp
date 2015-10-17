#include "decisiondetailswidget.h"
#include "ui_decisiondetailswidget.h"

DecisionDetailsWidget::DecisionDetailsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DecisionDetailsWidget)
{
    ui->setupUi(this);
}

DecisionDetailsWidget::~DecisionDetailsWidget()
{
    delete ui;
}
