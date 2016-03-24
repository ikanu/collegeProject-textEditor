#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    fileName = "";
    ui->textEdit->setPlainText("");
}



void MainWindow::on_actionOpen_triggered()
{
    QString file = QFileDialog::getOpenFileName(this, "Open a file");
    if(!file.isEmpty()){
        QFile streamFile(file);
        if(streamFile.open(QFile::ReadOnly | QFile::Text)){

            fileName = file;
            QTextStream in(&streamFile);
            QString text = in.readAll();
            streamFile.close();
            ui->textEdit->setPlainText(text);

        }

    }
}

void MainWindow::on_actionSave_triggered()
{
    //Test for filename
    QFile streamFile(fileName);
    if(streamFile.open(QFile::WriteOnly | QFile::Text)){

        QTextStream out (&streamFile);
        out << ui->textEdit->toPlainText();
        streamFile.flush();
        streamFile.close();
    }



}

void MainWindow::on_actionSave_As_triggered()
{
    QString file = QFileDialog::getSaveFileName(this, "Open a file");
    if(!file.isEmpty()){
        fileName = file;
        on_actionSave_triggered();
    }
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this , tr("About") , tr("Text Editing Program\n" "Created by - Kartik\n""Vocational Training 3rd year mini-project.\n"));
}

void MainWindow::on_actionQuit_triggered()
{

    QApplication::quit();

}


void MainWindow::on_actionBold_triggered()
{
    ui->textEdit->setFontWeight(75);

}

void MainWindow::on_actionNormal_triggered()
{
    ui->textEdit->setFontWeight(50);
    ui->textEdit->setFontUnderline(false);
    ui->textEdit->setFontItalic(false);
}



void MainWindow::on_actionUnderline_triggered()
{
    ui->textEdit->setFontUnderline(true);
}



void MainWindow::on_actionItalic_triggered()
{
    ui->textEdit->setFontItalic(true);
}
