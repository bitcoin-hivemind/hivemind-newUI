#include "sidechaintransferwidget.h"
#include "ui_sidechaintransferwidget.h"

SidechainTransferWidget::SidechainTransferWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SidechainTransferWidget)
{
    ui->setupUi(this);
}

SidechainTransferWidget::~SidechainTransferWidget()
{
    delete ui;
}

void SidechainTransferWidget::on_pushButton_left_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void SidechainTransferWidget::on_pushButton_right_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
