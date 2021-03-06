include(../../common.pri)

TARGET = QtAwsMarketplaceEntitlementService
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    getentitlementsrequest.h \
    getentitlementsrequest_p.h \
    getentitlementsresponse.h \
    getentitlementsresponse_p.h \
    marketplaceentitlementserviceclient.h \
    marketplaceentitlementserviceclient_p.h \
    marketplaceentitlementservicerequest.h \
    marketplaceentitlementservicerequest_p.h \
    marketplaceentitlementserviceresponse.h \
    marketplaceentitlementserviceresponse_p.h \

SOURCES += \
    getentitlementsrequest.cpp \
    getentitlementsresponse.cpp \
    marketplaceentitlementserviceclient.cpp \
    marketplaceentitlementservicerequest.cpp \
    marketplaceentitlementserviceresponse.cpp \

win32:CONFIG += skip_target_version_ext
