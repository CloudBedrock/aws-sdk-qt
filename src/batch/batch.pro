include(../../common.pri)

TARGET = QtAwsBatch
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    batchclient.h \
    batchclient_p.h \
    batchrequest.h \
    batchrequest_p.h \
    batchresponse.h \
    batchresponse_p.h \
    canceljobrequest.h \
    canceljobrequest_p.h \
    canceljobresponse.h \
    canceljobresponse_p.h \
    createcomputeenvironmentrequest.h \
    createcomputeenvironmentrequest_p.h \
    createcomputeenvironmentresponse.h \
    createcomputeenvironmentresponse_p.h \
    createjobqueuerequest.h \
    createjobqueuerequest_p.h \
    createjobqueueresponse.h \
    createjobqueueresponse_p.h \
    deletecomputeenvironmentrequest.h \
    deletecomputeenvironmentrequest_p.h \
    deletecomputeenvironmentresponse.h \
    deletecomputeenvironmentresponse_p.h \
    deletejobqueuerequest.h \
    deletejobqueuerequest_p.h \
    deletejobqueueresponse.h \
    deletejobqueueresponse_p.h \
    deregisterjobdefinitionrequest.h \
    deregisterjobdefinitionrequest_p.h \
    deregisterjobdefinitionresponse.h \
    deregisterjobdefinitionresponse_p.h \
    describecomputeenvironmentsrequest.h \
    describecomputeenvironmentsrequest_p.h \
    describecomputeenvironmentsresponse.h \
    describecomputeenvironmentsresponse_p.h \
    describejobdefinitionsrequest.h \
    describejobdefinitionsrequest_p.h \
    describejobdefinitionsresponse.h \
    describejobdefinitionsresponse_p.h \
    describejobqueuesrequest.h \
    describejobqueuesrequest_p.h \
    describejobqueuesresponse.h \
    describejobqueuesresponse_p.h \
    describejobsrequest.h \
    describejobsrequest_p.h \
    describejobsresponse.h \
    describejobsresponse_p.h \
    listjobsrequest.h \
    listjobsrequest_p.h \
    listjobsresponse.h \
    listjobsresponse_p.h \
    registerjobdefinitionrequest.h \
    registerjobdefinitionrequest_p.h \
    registerjobdefinitionresponse.h \
    registerjobdefinitionresponse_p.h \
    submitjobrequest.h \
    submitjobrequest_p.h \
    submitjobresponse.h \
    submitjobresponse_p.h \
    terminatejobrequest.h \
    terminatejobrequest_p.h \
    terminatejobresponse.h \
    terminatejobresponse_p.h \
    updatecomputeenvironmentrequest.h \
    updatecomputeenvironmentrequest_p.h \
    updatecomputeenvironmentresponse.h \
    updatecomputeenvironmentresponse_p.h \
    updatejobqueuerequest.h \
    updatejobqueuerequest_p.h \
    updatejobqueueresponse.h \
    updatejobqueueresponse_p.h \

SOURCES += \
    batchclient.cpp \
    batchrequest.cpp \
    batchresponse.cpp \
    canceljobrequest.cpp \
    canceljobresponse.cpp \
    createcomputeenvironmentrequest.cpp \
    createcomputeenvironmentresponse.cpp \
    createjobqueuerequest.cpp \
    createjobqueueresponse.cpp \
    deletecomputeenvironmentrequest.cpp \
    deletecomputeenvironmentresponse.cpp \
    deletejobqueuerequest.cpp \
    deletejobqueueresponse.cpp \
    deregisterjobdefinitionrequest.cpp \
    deregisterjobdefinitionresponse.cpp \
    describecomputeenvironmentsrequest.cpp \
    describecomputeenvironmentsresponse.cpp \
    describejobdefinitionsrequest.cpp \
    describejobdefinitionsresponse.cpp \
    describejobqueuesrequest.cpp \
    describejobqueuesresponse.cpp \
    describejobsrequest.cpp \
    describejobsresponse.cpp \
    listjobsrequest.cpp \
    listjobsresponse.cpp \
    registerjobdefinitionrequest.cpp \
    registerjobdefinitionresponse.cpp \
    submitjobrequest.cpp \
    submitjobresponse.cpp \
    terminatejobrequest.cpp \
    terminatejobresponse.cpp \
    updatecomputeenvironmentrequest.cpp \
    updatecomputeenvironmentresponse.cpp \
    updatejobqueuerequest.cpp \
    updatejobqueueresponse.cpp \

win32:CONFIG += skip_target_version_ext
