#include "persona.h"
#include "ui_persona.h"
#include "control.h"


Persona::Persona(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Persona)
{
    ui->setupUi(this);
}

Persona::~Persona()
{
    delete ui;
}


