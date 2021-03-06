include(../../common.pri)

TARGET = QtAwsSecretsManager
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    cancelrotatesecretrequest.h \
    cancelrotatesecretrequest_p.h \
    cancelrotatesecretresponse.h \
    cancelrotatesecretresponse_p.h \
    createsecretrequest.h \
    createsecretrequest_p.h \
    createsecretresponse.h \
    createsecretresponse_p.h \
    deletesecretrequest.h \
    deletesecretrequest_p.h \
    deletesecretresponse.h \
    deletesecretresponse_p.h \
    describesecretrequest.h \
    describesecretrequest_p.h \
    describesecretresponse.h \
    describesecretresponse_p.h \
    getrandompasswordrequest.h \
    getrandompasswordrequest_p.h \
    getrandompasswordresponse.h \
    getrandompasswordresponse_p.h \
    getsecretvaluerequest.h \
    getsecretvaluerequest_p.h \
    getsecretvalueresponse.h \
    getsecretvalueresponse_p.h \
    listsecretsrequest.h \
    listsecretsrequest_p.h \
    listsecretsresponse.h \
    listsecretsresponse_p.h \
    listsecretversionidsrequest.h \
    listsecretversionidsrequest_p.h \
    listsecretversionidsresponse.h \
    listsecretversionidsresponse_p.h \
    putsecretvaluerequest.h \
    putsecretvaluerequest_p.h \
    putsecretvalueresponse.h \
    putsecretvalueresponse_p.h \
    restoresecretrequest.h \
    restoresecretrequest_p.h \
    restoresecretresponse.h \
    restoresecretresponse_p.h \
    rotatesecretrequest.h \
    rotatesecretrequest_p.h \
    rotatesecretresponse.h \
    rotatesecretresponse_p.h \
    secretsmanagerclient.h \
    secretsmanagerclient_p.h \
    secretsmanagerrequest.h \
    secretsmanagerrequest_p.h \
    secretsmanagerresponse.h \
    secretsmanagerresponse_p.h \
    tagresourcerequest.h \
    tagresourcerequest_p.h \
    tagresourceresponse.h \
    tagresourceresponse_p.h \
    untagresourcerequest.h \
    untagresourcerequest_p.h \
    untagresourceresponse.h \
    untagresourceresponse_p.h \
    updatesecretrequest.h \
    updatesecretrequest_p.h \
    updatesecretresponse.h \
    updatesecretresponse_p.h \
    updatesecretversionstagerequest.h \
    updatesecretversionstagerequest_p.h \
    updatesecretversionstageresponse.h \
    updatesecretversionstageresponse_p.h \

SOURCES += \
    cancelrotatesecretrequest.cpp \
    cancelrotatesecretresponse.cpp \
    createsecretrequest.cpp \
    createsecretresponse.cpp \
    deletesecretrequest.cpp \
    deletesecretresponse.cpp \
    describesecretrequest.cpp \
    describesecretresponse.cpp \
    getrandompasswordrequest.cpp \
    getrandompasswordresponse.cpp \
    getsecretvaluerequest.cpp \
    getsecretvalueresponse.cpp \
    listsecretsrequest.cpp \
    listsecretsresponse.cpp \
    listsecretversionidsrequest.cpp \
    listsecretversionidsresponse.cpp \
    putsecretvaluerequest.cpp \
    putsecretvalueresponse.cpp \
    restoresecretrequest.cpp \
    restoresecretresponse.cpp \
    rotatesecretrequest.cpp \
    rotatesecretresponse.cpp \
    secretsmanagerclient.cpp \
    secretsmanagerrequest.cpp \
    secretsmanagerresponse.cpp \
    tagresourcerequest.cpp \
    tagresourceresponse.cpp \
    untagresourcerequest.cpp \
    untagresourceresponse.cpp \
    updatesecretrequest.cpp \
    updatesecretresponse.cpp \
    updatesecretversionstagerequest.cpp \
    updatesecretversionstageresponse.cpp \

win32:CONFIG += skip_target_version_ext
