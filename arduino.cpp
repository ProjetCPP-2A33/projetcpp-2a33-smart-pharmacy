#include "arduino.h"
#include <QDebug>

Arduino::Arduino(QObject *parent) : QObject(parent) {
    serialPort = new QSerialPort(this);
}

Arduino::~Arduino() {
    if (serialPort->isOpen()) {
        serialPort->close();
    }
    delete serialPort;
}

bool Arduino::connectToArduino(const QString &portName) {
    serialPort->setPortName(portName);
    serialPort->setBaudRate(QSerialPort::Baud9600);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if (serialPort->open(QIODevice::ReadOnly)) {
        connect(serialPort, &QSerialPort::readyRead, this, &Arduino::readSerialData);
        qDebug() << "Connecté à Arduino sur" << portName;
        return true;
    } else {
        qDebug() << "Impossible de se connecter à Arduino sur" << portName;
        return false;
    }
}

void Arduino::disconnectFromArduino() {
    if (serialPort->isOpen()) {
        serialPort->close();
    }
}

void Arduino::readSerialData() {
    while (serialPort->canReadLine()) {
        QByteArray data = serialPort->readLine().trimmed();
        emit idReceived(QString::fromUtf8(data)); // Émettre l'ID reçu
    }
}
