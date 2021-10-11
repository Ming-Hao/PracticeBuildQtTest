INCLUDEPATH += \
    $$PWD/

VPATH += \
    $$PWD/

SOURCES += \
    modelbar.cpp \
    modelfoo.cpp

HEADERS += \
    modelbar.h \
    modelfoo.h

contains(QT, gui) {
  include(ui/ui.pri)
}

