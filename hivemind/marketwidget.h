#ifndef MARKETWIDGET_H
#define MARKETWIDGET_H

#include <QWidget>

#include "tradingwindow.h"

namespace Ui {
class MarketWidget;
}

class MarketWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MarketWidget(QWidget *parent = 0);
    ~MarketWidget();

private slots:
    void on_tableWidget_cellDoubleClicked(int row, int column);

private:
    Ui::MarketWidget *ui;
    TradingWindow *tradingWindow;
};

#endif // MARKETWIDGET_H
