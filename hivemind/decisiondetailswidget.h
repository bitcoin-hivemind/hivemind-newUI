#ifndef DECISIONDETAILSWIDGET_H
#define DECISIONDETAILSWIDGET_H

#include <QWidget>

namespace Ui {
class DecisionDetailsWidget;
}

class DecisionDetailsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DecisionDetailsWidget(QWidget *parent = 0);
    ~DecisionDetailsWidget();

private:
    Ui::DecisionDetailsWidget *ui;
};

#endif // DECISIONDETAILSWIDGET_H
