#include "authorwidget.h"
#include "ui_authorwidget.h"

#include "combocreationwidget.h"
#include "decisioncreationwidget.h"
#include "decisionmarketcreationwidget.h"
#include <QDialog>

AuthorWidget::AuthorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthorWidget)
{
    ui->setupUi(this);
}

AuthorWidget::~AuthorWidget()
{
    delete ui;
}

void AuthorWidget::on_pushButton_newDecision_clicked()
{
    DecisionCreationWidget *creationWidget = new DecisionCreationWidget(this);
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(creationWidget);

    QDialog *dialog = new QDialog(this);
    dialog->setLayout(hbox);
    dialog->show();
}

void AuthorWidget::on_pushButton_newMarket_clicked()
{
    DecisionMarketCreationWidget *marketCreationWidget = new DecisionMarketCreationWidget(this);
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(marketCreationWidget);

    QDialog *dialog = new QDialog(this);
    dialog->setLayout(hbox);
    dialog->show();
}

void AuthorWidget::on_pushButton_newCombo_clicked()
{
    ComboCreationWidget *comboCreationWidget = new ComboCreationWidget(this);

    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(comboCreationWidget);

    QDialog *dialog = new QDialog(this);
    dialog->setLayout(hbox);
    dialog->show();
}
