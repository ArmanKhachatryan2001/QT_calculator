#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <vector>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void ACbuttonClick(int default_value = 0);
    void ADDSUBbuttonClick();
    void PERCENTbuttonClick();
    void DIVbuttonClick();

    void SEVENbuttonClick();
    void EIGHTbuttonClick();
    void NINEbuttonClick();
    void MULbuttonClick();

    void FOURbuttonClick();
    void FIVEbuttonClick();
    void SIXbuttonClick();
    void SUBbuttonClick();

    void ONEbuttonClick();
    void TWObuttonClick();
    void THREEbuttonClick();
    void ADDbuttonClick();

    void ZERObuttonClick();
    void COMMAbuttonClick();
    void EQUALbuttonClick();

private:
    void initializationVector();
    void helperIncreaserNumber(int);
    void initializationResultLable();
    void initializationFirstLineButtons();
    void initializationSecondLineButtons();
    void initializationThirdLineButtons();
    void initializationFourthLineButtons();
    void initializationFivetyLineButtons();
    void calculate();

private:
    QPushButton* buttonAC;
    QPushButton* buttonADDSUB;
    QPushButton* buttonPERCENT;
    QPushButton* buttonDIV;

    QPushButton* buttonSEVEN;
    QPushButton* buttonEIGHT;
    QPushButton* buttonNINE;
    QPushButton* buttonMUL;

    QPushButton* buttonFOUR;
    QPushButton* buttonFIVE;
    QPushButton* buttonSIX;
    QPushButton* buttonSUB;

    QPushButton* buttonONE;
    QPushButton* buttonTWO;
    QPushButton* buttonTHREE;
    QPushButton* buttonADD;

    QPushButton* buttonZERO;
    QPushButton* buttonCOMMA;
    QPushButton* buttonEQUAL;

    QLabel* resultLabel;
    QString Input;
    int sizeNumbers = 9;
    int increase;
    bool flagIncrease = false;
    std::vector<int> fontsizemin;


    bool flag = false;
    bool check = false;
    char sign;
    int result = 0;
    bool corectCode = true;
    bool subcheck = false;

};
#endif // MAINWINDOW_H
