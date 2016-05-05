#include "control.h"
#include "ui_control.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <lista.h>
#include <persona.h>
#include <QDebug>



Control::Control(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Control)
{
    ui->setupUi(this);


}

Control::~Control()
{
    delete ui;
}




void Control::on_pushButton_6_clicked()
{
  if (ui->lineEdit->text()==""||ui->lineEdit_2->text()==""||ui->lineEdit_3->text()==""||ui->lineEdit_4->text()==""||ui->lineEdit_5->text()==""||ui->lineEdit_6->text()==""||ui->lineEdit_7->text()=="")
  {
      ui->lineEdit->setText("debe completar los datos");
  }
  else
  {
      NodoPersona *p=new NodoPersona();


      p->nombres=ui->lineEdit->text();
      p->apellidos=ui->lineEdit_2->text();
      p->id=ui->lineEdit_3->text();
      p->telefono=ui->lineEdit_4->text();
      QString str = ui->lineEdit_5->text();
      double x = str.toDouble();
      p->altura = x;
      p->peso = ui->lineEdit_6->text().toDouble();
      p->ciudad = ui->lineEdit_7->text();

      lstPersona.agregar(p);
            qDebug()<<"ya pase";

  }

}


