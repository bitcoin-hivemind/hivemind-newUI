#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "authorwidget.h"
#include "decisionwidget.h"
#include "marketwidget.h"
#include "votingwidget.h"
#include "sidechaintransferwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_author_clicked();

    void on_pushButton_decisions_clicked();

    void on_pushButton_markets_clicked();

    void on_pushButton_voting_clicked();

    void on_pushButton_transfer_clicked();

private:
    Ui::MainWindow *ui;

    AuthorWidget *authorWidget;
    DecisionWidget *decisionWidget;
    MarketWidget *marketWidget;
    VotingWidget *votingWidget;
    SidechainTransferWidget *sidechainWidget;

};

#endif // MAINWINDOW_H
