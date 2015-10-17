#ifndef AUTHORWIDGET_H
#define AUTHORWIDGET_H

#include <QWidget>
#include "combocreationwidget.h"

namespace Ui {
class AuthorWidget;
}

class AuthorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AuthorWidget(QWidget *parent = 0);
    ~AuthorWidget();

private slots:
    void on_pushButton_newDecision_clicked();

    void on_pushButton_newMarket_clicked();

    void on_pushButton_newCombo_clicked();

private:
    Ui::AuthorWidget *ui;

    ComboCreationWidget *comboCreationWidget;
};

#endif // AUTHORWIDGET_H
