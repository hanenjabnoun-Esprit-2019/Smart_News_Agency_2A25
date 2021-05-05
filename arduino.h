#ifndef ARDUINO_H
#define ARDUINO_H
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

class Arduino
{
public:
    Arduino();
    int connect_Arduino(); //Connecter pc/Arduino
    int close_Arduino(); // Fermer conexion
    int Write_to_Arduino(QByteArray); // Envoyer vers arduino
    QByteArray read_from_Arduino(); // Recevoir de arduino
    QSerialPort *getserial(); //acesseur
    QString getarduino_port_name();
 private :
    QSerialPort *serial;
    static const quint16 arduino_uno_vendor_id=9025;
    static const quint16 arduino_uno_producy_id=67;
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data; // Contenue les données lu à partir d'arduino


};

#endif // ARDUINO_H
