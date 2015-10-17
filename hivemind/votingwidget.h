#ifndef VOTINGWIDGET_H
#define VOTINGWIDGET_H

#include <QWidget>

namespace Ui {
class VotingWidget;
}

class VotingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VotingWidget(QWidget *parent = 0);
    ~VotingWidget();

private slots:
    void on_tabWidget_tabBarClicked(int index);

private:
    Ui::VotingWidget *ui;
    bool feeDisplayEnabled;
};

#endif // VOTINGWIDGET_H
