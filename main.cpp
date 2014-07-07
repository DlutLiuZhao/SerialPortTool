#include<QApplication>
#include"qextserialport.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QextSerialPort* serialPort = new QextSerialPort();



    return app.exec();
}
