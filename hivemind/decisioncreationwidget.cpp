#include "decisioncreationwidget.h"
#include "ui_decisioncreationwidget.h"

DecisionCreationWidget::DecisionCreationWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DecisionCreationWidget)
{
    ui->setupUi(this);
}

DecisionCreationWidget::~DecisionCreationWidget()
{
    delete ui;
}
