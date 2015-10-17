#include "votingwidget.h"
#include "ui_votingwidget.h"

VotingWidget::VotingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VotingWidget)
{
    ui->setupUi(this);
    feeDisplayEnabled = false;
}

VotingWidget::~VotingWidget()
{
    delete ui;
}

void VotingWidget::on_tabWidget_tabBarClicked(int index)
{
    if (!feeDisplayEnabled) {
        ui->tableWidget_2->insertColumn(2);
        QStringList labels;
        labels << tr("Prompt") << tr("Answer") << tr("Trading Fee");
        ui->tableWidget_2->setHorizontalHeaderLabels(labels);
        feeDisplayEnabled = true;

        ui->tabWidget->removeTab(2);
    }
}

