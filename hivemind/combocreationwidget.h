#ifndef COMBOCREATIONWIDGET_H
#define COMBOCREATIONWIDGET_H

#include <QWidget>
#include <QHBoxLayout>

#include "decisioncreationwidget.h"
#include "decisionmarketcreationwidget.h"

namespace Ui {
class ComboCreationWidget;
}

class ComboCreationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ComboCreationWidget(QWidget *parent = 0);
    ~ComboCreationWidget();

private:
    Ui::ComboCreationWidget *ui;

    DecisionCreationWidget *decisionCreationWidget;
    DecisionMarketCreationWidget *marketCreationWidget;
};

#endif // COMBOCREATIONWIDGET_H
