#include "marketwidget.h"
#include "ui_marketwidget.h"

#include <QDebug>

MarketWidget::MarketWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MarketWidget)
{
    ui->setupUi(this);

    // Set phony graphs for ui mockup
    ui->tableWidget->item(0, 0)->setData(
                Qt::DecorationRole,
                QPixmap::fromImage(QImage(":/icons/graph").scaled(QSize(265, 200)))
                );

    qDebug() << "what\n";

    ui->tableWidget->item(1, 0)->setData(
                Qt::DecorationRole,
                QPixmap::fromImage(QImage(":/icons/graph").scaled(QSize(265, 200)))
                );

    qDebug() << "the\n";

    ui->tableWidget->item(2, 0)->setData(
                Qt::DecorationRole,
                QPixmap::fromImage(QImage(":/icons/graph").scaled(QSize(265, 200)))
                );

    ui->tableWidget->setColumnWidth(0, 265);
    ui->tableWidget->setRowHeight(0, 155);
    ui->tableWidget->setRowHeight(1, 155);
    ui->tableWidget->setRowHeight(2, 155);
}

MarketWidget::~MarketWidget()
{
    delete ui;
}

void MarketWidget::on_tableWidget_cellDoubleClicked(int row, int column)
{
    tradingWindow = new TradingWindow(this);
    tradingWindow->show();
}
