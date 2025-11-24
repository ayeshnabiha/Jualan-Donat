#ifndef NOTA_H
#define NOTA_H

#include <QWidget>
#include <QTimer>
#include <QTime>
#include <QLabel>

namespace Ui {
class Nota;
}

class MainWindow;
class CustomerName;
class Nota : public QWidget
{
    Q_OBJECT

public:
    explicit Nota(QWidget *parent = nullptr);
    ~Nota();
    void setCustomerName(const QString &name);
    void updateCustomerName();


private slots:
    void on_pushButton_Print_clicked();
    void updateTime();

private:
    Ui::Nota *ui;
    QTimer *timer;
};

#endif // NOTA_H
