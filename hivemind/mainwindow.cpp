#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    authorWidget = new AuthorWidget(this);
    ui->stackedWidget->insertWidget(0, authorWidget);

    decisionWidget = new DecisionWidget(this);
    ui->stackedWidget->insertWidget(0, decisionWidget);

    marketWidget = new MarketWidget(this);
    ui->stackedWidget->insertWidget(0, marketWidget);

    votingWidget = new VotingWidget(this);
    ui->stackedWidget->insertWidget(0, votingWidget);

    sidechainWidget = new SidechainTransferWidget(this);
    ui->stackedWidget->insertWidget(0, sidechainWidget);

    ui->stackedWidget->setCurrentIndex(
                ui->stackedWidget->indexOf(marketWidget));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_author_clicked()
{
    ui->stackedWidget->setCurrentIndex(
                ui->stackedWidget->indexOf(authorWidget));
}

void MainWindow::on_pushButton_decisions_clicked()
{
    ui->stackedWidget->setCurrentIndex(
                ui->stackedWidget->indexOf(decisionWidget));
}

void MainWindow::on_pushButton_markets_clicked()
{
    ui->stackedWidget->setCurrentIndex(
                ui->stackedWidget->indexOf(marketWidget));
}

void MainWindow::on_pushButton_voting_clicked()
{
    ui->stackedWidget->setCurrentIndex(
                ui->stackedWidget->indexOf(votingWidget));
}

void MainWindow::on_pushButton_transfer_clicked()
{
    ui->stackedWidget->setCurrentIndex(
                ui->stackedWidget->indexOf(sidechainWidget));
}
