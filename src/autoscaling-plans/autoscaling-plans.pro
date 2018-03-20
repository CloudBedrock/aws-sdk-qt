include(../../common.pri)

TARGET = autoscaling-plans
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    autoscalingplansclient.h \
    autoscalingplansclient_p.h \

SOURCES += \
    autoscalingplansclient.cpp \

win32:CONFIG += skip_target_version_ext
