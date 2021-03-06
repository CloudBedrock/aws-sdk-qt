include(../../common.pri)

TARGET = QtAwsKinesis
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagstostreamrequest.h \
    addtagstostreamrequest_p.h \
    addtagstostreamresponse.h \
    addtagstostreamresponse_p.h \
    createstreamrequest.h \
    createstreamrequest_p.h \
    createstreamresponse.h \
    createstreamresponse_p.h \
    decreasestreamretentionperiodrequest.h \
    decreasestreamretentionperiodrequest_p.h \
    decreasestreamretentionperiodresponse.h \
    decreasestreamretentionperiodresponse_p.h \
    deletestreamrequest.h \
    deletestreamrequest_p.h \
    deletestreamresponse.h \
    deletestreamresponse_p.h \
    describelimitsrequest.h \
    describelimitsrequest_p.h \
    describelimitsresponse.h \
    describelimitsresponse_p.h \
    describestreamrequest.h \
    describestreamrequest_p.h \
    describestreamresponse.h \
    describestreamresponse_p.h \
    describestreamsummaryrequest.h \
    describestreamsummaryrequest_p.h \
    describestreamsummaryresponse.h \
    describestreamsummaryresponse_p.h \
    disableenhancedmonitoringrequest.h \
    disableenhancedmonitoringrequest_p.h \
    disableenhancedmonitoringresponse.h \
    disableenhancedmonitoringresponse_p.h \
    enableenhancedmonitoringrequest.h \
    enableenhancedmonitoringrequest_p.h \
    enableenhancedmonitoringresponse.h \
    enableenhancedmonitoringresponse_p.h \
    getrecordsrequest.h \
    getrecordsrequest_p.h \
    getrecordsresponse.h \
    getrecordsresponse_p.h \
    getsharditeratorrequest.h \
    getsharditeratorrequest_p.h \
    getsharditeratorresponse.h \
    getsharditeratorresponse_p.h \
    increasestreamretentionperiodrequest.h \
    increasestreamretentionperiodrequest_p.h \
    increasestreamretentionperiodresponse.h \
    increasestreamretentionperiodresponse_p.h \
    kinesisclient.h \
    kinesisclient_p.h \
    kinesisrequest.h \
    kinesisrequest_p.h \
    kinesisresponse.h \
    kinesisresponse_p.h \
    listshardsrequest.h \
    listshardsrequest_p.h \
    listshardsresponse.h \
    listshardsresponse_p.h \
    liststreamsrequest.h \
    liststreamsrequest_p.h \
    liststreamsresponse.h \
    liststreamsresponse_p.h \
    listtagsforstreamrequest.h \
    listtagsforstreamrequest_p.h \
    listtagsforstreamresponse.h \
    listtagsforstreamresponse_p.h \
    mergeshardsrequest.h \
    mergeshardsrequest_p.h \
    mergeshardsresponse.h \
    mergeshardsresponse_p.h \
    putrecordrequest.h \
    putrecordrequest_p.h \
    putrecordresponse.h \
    putrecordresponse_p.h \
    putrecordsrequest.h \
    putrecordsrequest_p.h \
    putrecordsresponse.h \
    putrecordsresponse_p.h \
    removetagsfromstreamrequest.h \
    removetagsfromstreamrequest_p.h \
    removetagsfromstreamresponse.h \
    removetagsfromstreamresponse_p.h \
    splitshardrequest.h \
    splitshardrequest_p.h \
    splitshardresponse.h \
    splitshardresponse_p.h \
    startstreamencryptionrequest.h \
    startstreamencryptionrequest_p.h \
    startstreamencryptionresponse.h \
    startstreamencryptionresponse_p.h \
    stopstreamencryptionrequest.h \
    stopstreamencryptionrequest_p.h \
    stopstreamencryptionresponse.h \
    stopstreamencryptionresponse_p.h \
    updateshardcountrequest.h \
    updateshardcountrequest_p.h \
    updateshardcountresponse.h \
    updateshardcountresponse_p.h \

SOURCES += \
    addtagstostreamrequest.cpp \
    addtagstostreamresponse.cpp \
    createstreamrequest.cpp \
    createstreamresponse.cpp \
    decreasestreamretentionperiodrequest.cpp \
    decreasestreamretentionperiodresponse.cpp \
    deletestreamrequest.cpp \
    deletestreamresponse.cpp \
    describelimitsrequest.cpp \
    describelimitsresponse.cpp \
    describestreamrequest.cpp \
    describestreamresponse.cpp \
    describestreamsummaryrequest.cpp \
    describestreamsummaryresponse.cpp \
    disableenhancedmonitoringrequest.cpp \
    disableenhancedmonitoringresponse.cpp \
    enableenhancedmonitoringrequest.cpp \
    enableenhancedmonitoringresponse.cpp \
    getrecordsrequest.cpp \
    getrecordsresponse.cpp \
    getsharditeratorrequest.cpp \
    getsharditeratorresponse.cpp \
    increasestreamretentionperiodrequest.cpp \
    increasestreamretentionperiodresponse.cpp \
    kinesisclient.cpp \
    kinesisrequest.cpp \
    kinesisresponse.cpp \
    listshardsrequest.cpp \
    listshardsresponse.cpp \
    liststreamsrequest.cpp \
    liststreamsresponse.cpp \
    listtagsforstreamrequest.cpp \
    listtagsforstreamresponse.cpp \
    mergeshardsrequest.cpp \
    mergeshardsresponse.cpp \
    putrecordrequest.cpp \
    putrecordresponse.cpp \
    putrecordsrequest.cpp \
    putrecordsresponse.cpp \
    removetagsfromstreamrequest.cpp \
    removetagsfromstreamresponse.cpp \
    splitshardrequest.cpp \
    splitshardresponse.cpp \
    startstreamencryptionrequest.cpp \
    startstreamencryptionresponse.cpp \
    stopstreamencryptionrequest.cpp \
    stopstreamencryptionresponse.cpp \
    updateshardcountrequest.cpp \
    updateshardcountresponse.cpp \

win32:CONFIG += skip_target_version_ext
