#ifndef ARDUINO_H
#define ARDUINO_H

#include <QSerialPort>
#include <QString>
#include <QObject>

class Arduino : public QObject {
    Q_OBJECT

public:
    explicit Arduino(QObject *parent = nullptr);
    ~Arduino();

    bool ouvrirPort(const QString &portName);
    void fermerPort();
    bool envoyerCommande(const QByteArray &commande);
    bool estPortOuvert() const;

private:
    QSerialPort *serialPort;
};

#endif // ARDUINO_H
