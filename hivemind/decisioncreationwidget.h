#ifndef DECISIONCREATIONWIDGET_H
#define DECISIONCREATIONWIDGET_H

#include <QWidget>

namespace Ui {
class DecisionCreationWidget;
}

class DecisionCreationWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DecisionCreationWidget(QWidget *parent = 0);
    ~DecisionCreationWidget();

private:
    Ui::DecisionCreationWidget *ui;
};

#endif // DECISIONCREATIONWIDGET_H
