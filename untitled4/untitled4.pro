QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    destination.cpp \
    login_rider.cpp \
    main.cpp \
    login.cpp \
    rideaccepted.cpp \
    signup.cpp \
    viewrequests.cpp

HEADERS += \
    destination.h \
    login.h \
    login_rider.h \
    rideaccepted.h \
    signup.h \
    viewrequests.h

FORMS += \
    destination.ui \
    login.ui \
    login_rider.ui \
    rideaccepted.ui \
    signup.ui \
    viewrequests.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
