######################################################################
# Automatically generated by qmake (2.01a) jeu. avr. 19 09:56:19 2007
######################################################################

CONFIG += debug ; if you want the debug symbols for gdb

TEMPLATE = app
#TARGET =

DESTDIR = bin
OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build

QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

DEPENDPATH += .
#INCLUDEPATH += . /usr/include/ImageMagick
#INCLUDEPATH += .

# Magick++
#LIBS += -lMagick++

# Input
FORMS += \
    photoTweaker.ui \
    preferencesDialog.ui\
    effect/effectPreferences.ui\
    effect/disabledPreferences.ui\
    effect/rotatePreferences.ui\
    effect/scalePreferences.ui
SOURCES += \
    main.cpp \
    photoTweaker.cpp \
    undocommand.cpp \
    preferencesDialog.cpp \
    instrument/abstractinstrument.cpp \
    instrument/selectionInstrument.cpp \
    instrument/selection.cpp \
    photo.cpp \
    effect/abstracteffect.cpp \
    effect/disabled.cpp\
    effect/grayscale.cpp \
    effect/rotate.cpp \
    effect/scale.cpp\
    effect/effectPreferences.cpp\
    effect/disabledPreferences.cpp\
    effect/rotatePreferences.cpp\
    effect/scalePreferences.cpp
HEADERS += \
    photoTweaker.h \
    undocommand.h \
    preferencesDialog.h \
    instrument/abstractinstrument.h \
    instrument/selectionInstrument.h \
    instrument/selection.h \
    photo.h \
    effect/abstracteffect.h \
    effect/disabled.h\
    effect/grayscale.h \
    effect/rotate.h \
    effect/scale.h\
    effect/effectPreferences.h\
    effect/disabledPreferences.h\
    effect/rotatePreferences.h\
    effect/scalePreferences.h

RESOURCES += \
    resources.qrc
