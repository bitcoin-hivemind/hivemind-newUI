#include "combocreationwidget.h"
#include "ui_combocreationwidget.h"

#include "decisioncreationwidget.h"

ComboCreationWidget::ComboCreationWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ComboCreationWidget)
{
    ui->setupUi(this);

    decisionCreationWidget = new DecisionCreationWidget(this);
    marketCreationWidget = new DecisionMarketCreationWidget(this);

    ui->frame_decision->layout()->addWidget(decisionCreationWidget);
    ui->frame_market->layout()->addWidget(marketCreationWidget);
}

ComboCreationWidget::~ComboCreationWidget()
{
    delete ui;
}
