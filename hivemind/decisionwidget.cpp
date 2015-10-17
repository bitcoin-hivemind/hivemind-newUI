#include "decisionwidget.h"
#include "ui_decisionwidget.h"

#include <QDialog>
#include <QHBoxLayout>
#include "decisiondetailswidget.h"

DecisionWidget::DecisionWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DecisionWidget)
{
    ui->setupUi(this);
}

DecisionWidget::~DecisionWidget()
{
    delete ui;
}

void DecisionWidget::on_tableWidget_cellDoubleClicked(int row, int column)
{
    DecisionDetailsWidget *detailsWidget = new DecisionDetailsWidget(this);
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(detailsWidget);

    QDialog *dialog = new QDialog(this);
    dialog->setLayout(hbox);
    dialog->show();
}
