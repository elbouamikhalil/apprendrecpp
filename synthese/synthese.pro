TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        alveoleslibres.cpp \
        chariot.cpp \
        magasin.cpp \
        main.cpp \
        menu.cpp \
        rouleau.cpp \
        stock.cpp \
        testRouleaux.cpp \
        testStock.cpp

HEADERS += \
    alveoleslibres.h \
    chariot.h \
    magasin.h \
    menu.h \
    rouleau.h \
    stock.h

DISTFILES += \
    magasin.txt \
    menu.txt \
    stock.txt
