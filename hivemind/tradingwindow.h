#ifndef TRADINGWINDOW_H
#define TRADINGWINDOW_H

#include <QMainWindow>

namespace Ui {
class TradingWindow;
}

class TradingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TradingWindow(QWidget *parent = 0);
    ~TradingWindow();

private:
    Ui::TradingWindow *ui;
};

#endif // TRADINGWINDOW_H
