#ifndef CONTROL_H
#define CONTROL_H


#include <QMainWindow>
#include <persona.h>
#include <nodopersona.h>
#include <lista.h>


namespace Ui {
class Control;
}

class Control : public QMainWindow
{
    Q_OBJECT

public:
    explicit Control(QWidget *parent = 0);
    ~Control();
    Lista lstPersona;








private slots:
    void on_pushButton_6_clicked();



private:
    Ui::Control *ui;
};

#endif // CONTROL_H
