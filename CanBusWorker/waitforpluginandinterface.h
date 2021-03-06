#ifndef WAITFORPLUGINANDINTERFACE_H
#define WAITFORPLUGINANDINTERFACE_H

#include <QState>
#include <QTimer>
#include "canbusworkerdb.h"

class waitForPluginAndInterface : public QState
{
public:
    waitForPluginAndInterface(CanBusWorkerDB * database, quint32 TimerIntervalInMiliSecond = 0);
protected:
    void onEntry(QEvent *) override;
    void onExit(QEvent *) override;
private:
    QTimer timer;
    quint32 TimerIntervalMSecs = 0;
};

#endif // WAITFORPLUGINANDINTERFACE_H
