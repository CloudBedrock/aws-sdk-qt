include(../../common.pri)

TARGET = QtAwsSqs
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addpermissionrequest.h \
    addpermissionrequest_p.h \
    addpermissionresponse.h \
    addpermissionresponse_p.h \
    changemessagevisibilitybatchrequest.h \
    changemessagevisibilitybatchrequest_p.h \
    changemessagevisibilitybatchresponse.h \
    changemessagevisibilitybatchresponse_p.h \
    changemessagevisibilityrequest.h \
    changemessagevisibilityrequest_p.h \
    changemessagevisibilityresponse.h \
    changemessagevisibilityresponse_p.h \
    createqueuerequest.h \
    createqueuerequest_p.h \
    createqueueresponse.h \
    createqueueresponse_p.h \
    deletemessagebatchrequest.h \
    deletemessagebatchrequest_p.h \
    deletemessagebatchresponse.h \
    deletemessagebatchresponse_p.h \
    deletemessagerequest.h \
    deletemessagerequest_p.h \
    deletemessageresponse.h \
    deletemessageresponse_p.h \
    deletequeuerequest.h \
    deletequeuerequest_p.h \
    deletequeueresponse.h \
    deletequeueresponse_p.h \
    getqueueattributesrequest.h \
    getqueueattributesrequest_p.h \
    getqueueattributesresponse.h \
    getqueueattributesresponse_p.h \
    getqueueurlrequest.h \
    getqueueurlrequest_p.h \
    getqueueurlresponse.h \
    getqueueurlresponse_p.h \
    listdeadlettersourcequeuesrequest.h \
    listdeadlettersourcequeuesrequest_p.h \
    listdeadlettersourcequeuesresponse.h \
    listdeadlettersourcequeuesresponse_p.h \
    listqueuesrequest.h \
    listqueuesrequest_p.h \
    listqueuesresponse.h \
    listqueuesresponse_p.h \
    listqueuetagsrequest.h \
    listqueuetagsrequest_p.h \
    listqueuetagsresponse.h \
    listqueuetagsresponse_p.h \
    purgequeuerequest.h \
    purgequeuerequest_p.h \
    purgequeueresponse.h \
    purgequeueresponse_p.h \
    receivemessagerequest.h \
    receivemessagerequest_p.h \
    receivemessageresponse.h \
    receivemessageresponse_p.h \
    removepermissionrequest.h \
    removepermissionrequest_p.h \
    removepermissionresponse.h \
    removepermissionresponse_p.h \
    sendmessagebatchrequest.h \
    sendmessagebatchrequest_p.h \
    sendmessagebatchresponse.h \
    sendmessagebatchresponse_p.h \
    sendmessagerequest.h \
    sendmessagerequest_p.h \
    sendmessageresponse.h \
    sendmessageresponse_p.h \
    setqueueattributesrequest.h \
    setqueueattributesrequest_p.h \
    setqueueattributesresponse.h \
    setqueueattributesresponse_p.h \
    sqsclient.h \
    sqsclient_p.h \
    sqsrequest.h \
    sqsrequest_p.h \
    sqsresponse.h \
    sqsresponse_p.h \
    tagqueuerequest.h \
    tagqueuerequest_p.h \
    tagqueueresponse.h \
    tagqueueresponse_p.h \
    untagqueuerequest.h \
    untagqueuerequest_p.h \
    untagqueueresponse.h \
    untagqueueresponse_p.h \

SOURCES += \
    addpermissionrequest.cpp \
    addpermissionresponse.cpp \
    changemessagevisibilitybatchrequest.cpp \
    changemessagevisibilitybatchresponse.cpp \
    changemessagevisibilityrequest.cpp \
    changemessagevisibilityresponse.cpp \
    createqueuerequest.cpp \
    createqueueresponse.cpp \
    deletemessagebatchrequest.cpp \
    deletemessagebatchresponse.cpp \
    deletemessagerequest.cpp \
    deletemessageresponse.cpp \
    deletequeuerequest.cpp \
    deletequeueresponse.cpp \
    getqueueattributesrequest.cpp \
    getqueueattributesresponse.cpp \
    getqueueurlrequest.cpp \
    getqueueurlresponse.cpp \
    listdeadlettersourcequeuesrequest.cpp \
    listdeadlettersourcequeuesresponse.cpp \
    listqueuesrequest.cpp \
    listqueuesresponse.cpp \
    listqueuetagsrequest.cpp \
    listqueuetagsresponse.cpp \
    purgequeuerequest.cpp \
    purgequeueresponse.cpp \
    receivemessagerequest.cpp \
    receivemessageresponse.cpp \
    removepermissionrequest.cpp \
    removepermissionresponse.cpp \
    sendmessagebatchrequest.cpp \
    sendmessagebatchresponse.cpp \
    sendmessagerequest.cpp \
    sendmessageresponse.cpp \
    setqueueattributesrequest.cpp \
    setqueueattributesresponse.cpp \
    sqsclient.cpp \
    sqsrequest.cpp \
    sqsresponse.cpp \
    tagqueuerequest.cpp \
    tagqueueresponse.cpp \
    untagqueuerequest.cpp \
    untagqueueresponse.cpp \

win32:CONFIG += skip_target_version_ext
