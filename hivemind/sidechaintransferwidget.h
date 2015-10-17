#ifndef SIDECHAINTRANSFERWIDGET_H
#define SIDECHAINTRANSFERWIDGET_H

#include <QWidget>

namespace Ui {
class SidechainTransferWidget;
}

class SidechainTransferWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SidechainTransferWidget(QWidget *parent = 0);
    ~SidechainTransferWidget();

private slots:

    void on_pushButton_left_clicked();

    void on_pushButton_right_clicked();

private:
    Ui::SidechainTransferWidget *ui;
};

#endif // SIDECHAINTRANSFERWIDGET_H
