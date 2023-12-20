#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this -> setFixedSize(232, 299);
    this -> setWindowTitle("Calculator");
    this -> initializationVector();
    this -> initializationResultLable();
    this -> initializationFirstLineButtons();
    this -> initializationSecondLineButtons();
    this -> initializationThirdLineButtons();
    this -> initializationFourthLineButtons();
    this -> initializationFivetyLineButtons();
}

void MainWindow::initializationResultLable() {
    resultLabel = new QLabel("0", this);
    QFont fontsize;
    fontsize.setPointSize(40);
    resultLabel -> setFont(fontsize);
    resultLabel -> setAlignment(Qt::AlignRight);
    resultLabel->setGeometry(0, 9, 226, 70);
}


void MainWindow::initializationFirstLineButtons() {
    this -> buttonAC = new QPushButton("AC", this);
    buttonAC -> setStyleSheet("background-color: #3B3A38;");
    buttonAC -> setGeometry(0, 65, 58, 46);
    connect(buttonAC, SIGNAL(clicked()), this, SLOT(ACbuttonClick()));

    this -> buttonADDSUB = new QPushButton("+/-", this);
    buttonADDSUB -> setStyleSheet("background-color: #3B3A38;");
    buttonADDSUB -> setGeometry(59, 65, 57, 46);
    connect(buttonADDSUB, SIGNAL(clicked()), this, SLOT(ADDSUBbuttonClick()));

    this -> buttonPERCENT = new QPushButton("%", this);
    buttonPERCENT -> setStyleSheet("background-color: #3D3A38;");
    buttonPERCENT -> setGeometry(117, 65, 57, 46);
    connect(buttonPERCENT, SIGNAL(clicked()), this, SLOT(PERCENTbuttonClick()));

    this -> buttonDIV = new QPushButton("/", this);
    buttonDIV -> setStyleSheet("background-color: #FFA500;");
    buttonDIV -> setGeometry(175, 65, 57, 46);
    connect(buttonDIV, SIGNAL(clicked()), this, SLOT(DIVbuttonClick()));
}

void MainWindow::initializationSecondLineButtons() {
    this -> buttonSEVEN = new QPushButton("7", this);
    buttonSEVEN -> setGeometry(-6, 107, 70, 55);
    connect(buttonSEVEN, SIGNAL(clicked()), this, SLOT(SEVENbuttonClick()));

    this -> buttonEIGHT = new QPushButton("8", this);
    buttonEIGHT -> setGeometry(52, 107, 70, 55);
    connect(buttonEIGHT, SIGNAL(clicked()), this, SLOT(EIGHTbuttonClick()));

    this -> buttonNINE = new QPushButton("9", this);
    buttonNINE -> setGeometry(110, 107, 70, 55);
    connect(buttonNINE, SIGNAL(clicked()), this, SLOT(NINEbuttonClick()));

    this -> buttonMUL = new QPushButton("*", this);
    buttonMUL -> setStyleSheet("background-color: #FFA500;");
    buttonMUL -> setGeometry(175, 112, 57, 46);
    connect(buttonMUL, SIGNAL(clicked()), this, SLOT(MULbuttonClick()));
}

void MainWindow::initializationThirdLineButtons() {
    this -> buttonFOUR = new QPushButton("4", this);
    buttonFOUR -> setGeometry(-6, 154, 70, 55);
    connect(buttonFOUR, SIGNAL(clicked()), this, SLOT(FOURbuttonClick()));

    this -> buttonFIVE = new QPushButton("5", this);
    buttonFIVE -> setGeometry(52, 154, 70, 55);
    connect(buttonFIVE, SIGNAL(clicked()), this, SLOT(FIVEbuttonClick()));

    this -> buttonSIX = new QPushButton("6", this);
    buttonSIX -> setGeometry(110, 154, 70, 55);
    connect(buttonSIX, SIGNAL(clicked()), this, SLOT(SIXbuttonClick()));

    this -> buttonSUB = new QPushButton("-", this);
    buttonSUB -> setStyleSheet("background-color: #FFA500;");
    buttonSUB -> setGeometry(175, 159, 57, 46);
    connect(buttonSUB, SIGNAL(clicked()), this, SLOT(SUBbuttonClick()));
}

void MainWindow::initializationFourthLineButtons() {
    this -> buttonONE = new QPushButton("1", this);
    buttonONE -> setGeometry(-6, 201, 70, 55);
    connect(buttonONE, SIGNAL(clicked()), this, SLOT(ONEbuttonClick()));

    this -> buttonTWO = new QPushButton("2", this);
    buttonTWO -> setGeometry(52, 201, 70, 55);
    connect(buttonTWO, SIGNAL(clicked()), this, SLOT(TWObuttonClick()));

    this -> buttonTHREE = new QPushButton("3", this);
    buttonTHREE -> setGeometry(110, 201, 70, 55);
    connect(buttonTHREE, SIGNAL(clicked()), this, SLOT(THREEbuttonClick()));

    this -> buttonADD = new QPushButton("+", this);
    buttonADD -> setStyleSheet("background-color: #FFA500;");
    buttonADD -> setGeometry(175, 206, 57, 46);
    connect(buttonADD, SIGNAL(clicked()), this, SLOT(ADDbuttonClick()));
}

void MainWindow::initializationFivetyLineButtons() {
    this -> buttonZERO = new QPushButton("0", this);
    buttonZERO -> setGeometry(-6, 248, 128, 55);
    connect(buttonZERO, SIGNAL(clicked()), this, SLOT(ZERObuttonClick()));

    this -> buttonCOMMA = new QPushButton(",", this);
    buttonCOMMA -> setGeometry(110, 248, 70, 55);
    connect(buttonCOMMA, SIGNAL(clicked()), this, SLOT(COMMAbuttonClick()));

    this -> buttonEQUAL = new QPushButton("=", this);
    buttonEQUAL -> setStyleSheet("background-color: #FFA500;");
    buttonEQUAL -> setGeometry(175, 253, 57, 46);
    connect(buttonEQUAL, SIGNAL(clicked()), this, SLOT(EQUALbuttonClick()));
}


void MainWindow::ACbuttonClick(int default_value) {
    this -> resultLabel -> clear();
    this -> flagIncrease = false;
    this -> increase = 0;
    QFont fontsize;
    fontsize.setPointSize(40);
    resultLabel -> setFont(fontsize);
    if (!default_value) {
        this -> resultLabel -> setText(QString::number(0));
        result = 0;
        flag = false;
        corectCode = true;
    }
    check = false;
}

void MainWindow::helperIncreaserNumber(int value) {

    if (increase == fontsizemin.size()) {
        return;
    }

    subcheck = true;

    if (check) {
        ACbuttonClick(1);
    }

    QString tmp = resultLabel -> text();

    if (!flag) {
        this -> resultLabel -> clear();
        this -> resultLabel -> setText(QString::number(value));
        flag = true;
        return;
    }

    if (tmp.size() == sizeNumbers) {
        flagIncrease = true;
        increase = 0;
    }
    if (flagIncrease) {
        QFont currentFont = resultLabel->font();
        int newSize = currentFont.pointSize() - fontsizemin[increase++];
        currentFont.setPointSize(newSize);
        resultLabel->setFont(currentFont);
    }
    resultLabel -> setText(tmp + QString::number(value));
}

void MainWindow::calculate() {
    if (corectCode && sign != ',') {
        QString str;
        str = resultLabel -> text();
        result = str.toInt();
        corectCode = false;
        check = true;
        return;
    }
    QString str;
    str = resultLabel -> text();
    if (sign == '+') {
        result += str.toInt();
    } else if (sign == '-') {
        result -= str.toInt();
    } else if (sign == '*') {
        result *= str.toInt();
    } else if (sign == '/') {
        result /= str.toInt();
    } else if (sign == '%') {
        result %= str.toInt();
    } else if (sign == ',') {
        resultLabel -> clear();
        resultLabel -> setText(str + ".");
        return;
    } else {
        return;
    }
    this -> resultLabel -> clear();
    resultLabel -> setText(QString::number(result));
    this -> check = true;
}

void MainWindow::ADDSUBbuttonClick() {
    QString str = resultLabel -> text();
    this -> resultLabel -> clear();
    resultLabel -> setText("-" + str);
}

void MainWindow::PERCENTbuttonClick() {
    sign = '%';
    calculate();
}

void MainWindow::DIVbuttonClick() {
    sign = '/';
    calculate();
}

void MainWindow::SEVENbuttonClick() {
    helperIncreaserNumber(7);
}

void MainWindow::EIGHTbuttonClick() {
    helperIncreaserNumber(8);
}

void MainWindow::NINEbuttonClick() {
    helperIncreaserNumber(9);
}

void MainWindow::MULbuttonClick() {
    sign = '*';
    if (corectCode) {
        result = 1;
        corectCode = false;
    }
    calculate();
}

void MainWindow::FOURbuttonClick() {
    helperIncreaserNumber(4);
}

void MainWindow::FIVEbuttonClick() {
    helperIncreaserNumber(5);
}

void MainWindow::SIXbuttonClick() {
    helperIncreaserNumber(6);
}

void MainWindow::SUBbuttonClick() {
    sign = '-';
    if (subcheck) {
        calculate();
        subcheck = false;
    }
}

void MainWindow::ONEbuttonClick() {
    helperIncreaserNumber(1);
}

void MainWindow::TWObuttonClick() {
    helperIncreaserNumber(2);
}

void MainWindow::THREEbuttonClick() {
    helperIncreaserNumber(3);
}

void MainWindow::ADDbuttonClick() {
        sign = '+';
        calculate();
}

void MainWindow::ZERObuttonClick() {
    helperIncreaserNumber(0);
}

void MainWindow::COMMAbuttonClick() {
    sign = ',';
    calculate();
    sign = '_';
    subcheck = false;
}

void MainWindow::EQUALbuttonClick() {
    calculate();
    if (sign == '+') {
        this -> result = 0;
    } else if (sign == '*' || sign == '/' || sign == '%') {
        this -> result = 1;
    }
    subcheck = false;
    sign = '_';
}

void MainWindow::initializationVector() {
    fontsizemin = {5, 4, 2, 3, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0};
}

MainWindow::~MainWindow()
{
    delete buttonAC;
    delete buttonADDSUB;
    delete buttonPERCENT;
    delete buttonDIV;

    delete buttonSEVEN;
    delete buttonEIGHT;
    delete buttonNINE;
    delete buttonMUL;

    delete buttonFOUR;
    delete buttonFIVE;
    delete buttonSIX;
    delete buttonSUB;

    delete buttonONE;
    delete buttonTWO;
    delete buttonTHREE;
    delete buttonADD;

    delete buttonZERO;
    delete buttonCOMMA;
    delete buttonEQUAL;
    delete resultLabel;
}
