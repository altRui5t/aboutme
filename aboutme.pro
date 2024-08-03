QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    baseentity.cpp \
    content.cpp \
    datebar.cpp \
    main.cpp \
    aboutme.cpp \
    mainmenu.cpp \
    memory.cpp \
    timeline.cpp \
    timelinecolon.cpp \
    workwindow.cpp

HEADERS += \
    aboutme.h \
    baseentity.h \
    content.h \
    datebar.h \
    mainmenu.h \
    memory.h \
    timeline.h \
    timelinecolon.h \
    workwindow.h

FORMS += \
    aboutme.ui

TRANSLATIONS += \
    aboutme_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
