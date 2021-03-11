#ifndef HANGMAN1_H
#define HANGMAN1_H

#include <QMainWindow>
#include <string>
#include <QMainWindow>
#include<QPainter>
#include<QGraphicsItem>
#include<QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include<QTimer>
//#include<QLabel>
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class hangman1; }
QT_END_NAMESPACE

class hangman1 : public QMainWindow
{
    Q_OBJECT

public:
     string word;
     void KnowinTheSize(int& number);
     string* FillingTheArray(int number);
     string knowinTheWord(string* array, int number);
    hangman1(QWidget *parent = nullptr);
    void inc();
    int getcount();
    void shape();
    ~hangman1();

private slots:
    void on_A_clicked();

    void on_H_clicked();

    void on_C_clicked();

    void on_D_clicked();

    void on_E_clicked();

    void on_F_clicked();

    void on_G_clicked();

    void on_I_clicked();

    void on_P_clicked();

    void on_Q_clicked();

    void on_R_clicked();

    void on_S_clicked();

    void on_T_clicked();

    void on_U_clicked();

    void on_V_clicked();

    void on_W_clicked();

    void on_X_clicked();

    void on_Y_clicked();

    void on_Z_clicked();

    void checkLetter(QString);

    void on_B_clicked();

    void on_J_clicked();

    void on_K_clicked();

    void on_L_clicked();

    void on_M_clicked();

    void on_N_clicked();

    void on_O_clicked();

   // QString ctos(char);

    void on_word_linkActivated(const QString &link);

private:
    Ui::hangman1 *ui;
    std::string s_word;
    bool* CheckLetter = new bool[26];
    QString displayedWord;
    //QLabel *label;
    QGraphicsScene* scene;
    QGraphicsEllipseItem* ellipse; //we will draw an ellipse
    QGraphicsLineItem* Line;
    QGraphicsRectItem* rectangle; //we are not using it, just an
    static int count;
};
#endif // HANGMAN1_H
