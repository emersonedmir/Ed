#ifndef PERSONA_H
#define PERSONA_H

#include <QWidget>
#include <QString>

namespace Ui {
class Persona;
}

class Persona : public QWidget
{
    Q_OBJECT

public:
    explicit Persona(QWidget *parent = 0);
    QString nombres;
    QString apellidos;
    QString id;
    QString telefono;
    double altura;
    double peso;
    QString ciudad;


    ~Persona();

public slots:
    QString on_pushButton_clicked();

public:
    Ui::Persona *ui;
};

#endif // PERSONA_H
