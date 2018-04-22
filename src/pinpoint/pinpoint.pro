include(../../common.pri)

TARGET = QtAwsPinpoint
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    createapprequest.h \
    createapprequest_p.h \
    createappresponse.h \
    createappresponse_p.h \
    createcampaignrequest.h \
    createcampaignrequest_p.h \
    createcampaignresponse.h \
    createcampaignresponse_p.h \
    createexportjobrequest.h \
    createexportjobrequest_p.h \
    createexportjobresponse.h \
    createexportjobresponse_p.h \
    createimportjobrequest.h \
    createimportjobrequest_p.h \
    createimportjobresponse.h \
    createimportjobresponse_p.h \
    createsegmentrequest.h \
    createsegmentrequest_p.h \
    createsegmentresponse.h \
    createsegmentresponse_p.h \
    deleteadmchannelrequest.h \
    deleteadmchannelrequest_p.h \
    deleteadmchannelresponse.h \
    deleteadmchannelresponse_p.h \
    deleteapnschannelrequest.h \
    deleteapnschannelrequest_p.h \
    deleteapnschannelresponse.h \
    deleteapnschannelresponse_p.h \
    deleteapnssandboxchannelrequest.h \
    deleteapnssandboxchannelrequest_p.h \
    deleteapnssandboxchannelresponse.h \
    deleteapnssandboxchannelresponse_p.h \
    deleteapnsvoipchannelrequest.h \
    deleteapnsvoipchannelrequest_p.h \
    deleteapnsvoipchannelresponse.h \
    deleteapnsvoipchannelresponse_p.h \
    deleteapnsvoipsandboxchannelrequest.h \
    deleteapnsvoipsandboxchannelrequest_p.h \
    deleteapnsvoipsandboxchannelresponse.h \
    deleteapnsvoipsandboxchannelresponse_p.h \
    deleteapprequest.h \
    deleteapprequest_p.h \
    deleteappresponse.h \
    deleteappresponse_p.h \
    deletebaiduchannelrequest.h \
    deletebaiduchannelrequest_p.h \
    deletebaiduchannelresponse.h \
    deletebaiduchannelresponse_p.h \
    deletecampaignrequest.h \
    deletecampaignrequest_p.h \
    deletecampaignresponse.h \
    deletecampaignresponse_p.h \
    deleteemailchannelrequest.h \
    deleteemailchannelrequest_p.h \
    deleteemailchannelresponse.h \
    deleteemailchannelresponse_p.h \
    deleteendpointrequest.h \
    deleteendpointrequest_p.h \
    deleteendpointresponse.h \
    deleteendpointresponse_p.h \
    deleteeventstreamrequest.h \
    deleteeventstreamrequest_p.h \
    deleteeventstreamresponse.h \
    deleteeventstreamresponse_p.h \
    deletegcmchannelrequest.h \
    deletegcmchannelrequest_p.h \
    deletegcmchannelresponse.h \
    deletegcmchannelresponse_p.h \
    deletesegmentrequest.h \
    deletesegmentrequest_p.h \
    deletesegmentresponse.h \
    deletesegmentresponse_p.h \
    deletesmschannelrequest.h \
    deletesmschannelrequest_p.h \
    deletesmschannelresponse.h \
    deletesmschannelresponse_p.h \
    getadmchannelrequest.h \
    getadmchannelrequest_p.h \
    getadmchannelresponse.h \
    getadmchannelresponse_p.h \
    getapnschannelrequest.h \
    getapnschannelrequest_p.h \
    getapnschannelresponse.h \
    getapnschannelresponse_p.h \
    getapnssandboxchannelrequest.h \
    getapnssandboxchannelrequest_p.h \
    getapnssandboxchannelresponse.h \
    getapnssandboxchannelresponse_p.h \
    getapnsvoipchannelrequest.h \
    getapnsvoipchannelrequest_p.h \
    getapnsvoipchannelresponse.h \
    getapnsvoipchannelresponse_p.h \
    getapnsvoipsandboxchannelrequest.h \
    getapnsvoipsandboxchannelrequest_p.h \
    getapnsvoipsandboxchannelresponse.h \
    getapnsvoipsandboxchannelresponse_p.h \
    getapplicationsettingsrequest.h \
    getapplicationsettingsrequest_p.h \
    getapplicationsettingsresponse.h \
    getapplicationsettingsresponse_p.h \
    getapprequest.h \
    getapprequest_p.h \
    getappresponse.h \
    getappresponse_p.h \
    getappsrequest.h \
    getappsrequest_p.h \
    getappsresponse.h \
    getappsresponse_p.h \
    getbaiduchannelrequest.h \
    getbaiduchannelrequest_p.h \
    getbaiduchannelresponse.h \
    getbaiduchannelresponse_p.h \
    getcampaignactivitiesrequest.h \
    getcampaignactivitiesrequest_p.h \
    getcampaignactivitiesresponse.h \
    getcampaignactivitiesresponse_p.h \
    getcampaignrequest.h \
    getcampaignrequest_p.h \
    getcampaignresponse.h \
    getcampaignresponse_p.h \
    getcampaignsrequest.h \
    getcampaignsrequest_p.h \
    getcampaignsresponse.h \
    getcampaignsresponse_p.h \
    getcampaignversionrequest.h \
    getcampaignversionrequest_p.h \
    getcampaignversionresponse.h \
    getcampaignversionresponse_p.h \
    getcampaignversionsrequest.h \
    getcampaignversionsrequest_p.h \
    getcampaignversionsresponse.h \
    getcampaignversionsresponse_p.h \
    getemailchannelrequest.h \
    getemailchannelrequest_p.h \
    getemailchannelresponse.h \
    getemailchannelresponse_p.h \
    getendpointrequest.h \
    getendpointrequest_p.h \
    getendpointresponse.h \
    getendpointresponse_p.h \
    geteventstreamrequest.h \
    geteventstreamrequest_p.h \
    geteventstreamresponse.h \
    geteventstreamresponse_p.h \
    getexportjobrequest.h \
    getexportjobrequest_p.h \
    getexportjobresponse.h \
    getexportjobresponse_p.h \
    getexportjobsrequest.h \
    getexportjobsrequest_p.h \
    getexportjobsresponse.h \
    getexportjobsresponse_p.h \
    getgcmchannelrequest.h \
    getgcmchannelrequest_p.h \
    getgcmchannelresponse.h \
    getgcmchannelresponse_p.h \
    getimportjobrequest.h \
    getimportjobrequest_p.h \
    getimportjobresponse.h \
    getimportjobresponse_p.h \
    getimportjobsrequest.h \
    getimportjobsrequest_p.h \
    getimportjobsresponse.h \
    getimportjobsresponse_p.h \
    getsegmentexportjobsrequest.h \
    getsegmentexportjobsrequest_p.h \
    getsegmentexportjobsresponse.h \
    getsegmentexportjobsresponse_p.h \
    getsegmentimportjobsrequest.h \
    getsegmentimportjobsrequest_p.h \
    getsegmentimportjobsresponse.h \
    getsegmentimportjobsresponse_p.h \
    getsegmentrequest.h \
    getsegmentrequest_p.h \
    getsegmentresponse.h \
    getsegmentresponse_p.h \
    getsegmentsrequest.h \
    getsegmentsrequest_p.h \
    getsegmentsresponse.h \
    getsegmentsresponse_p.h \
    getsegmentversionrequest.h \
    getsegmentversionrequest_p.h \
    getsegmentversionresponse.h \
    getsegmentversionresponse_p.h \
    getsegmentversionsrequest.h \
    getsegmentversionsrequest_p.h \
    getsegmentversionsresponse.h \
    getsegmentversionsresponse_p.h \
    getsmschannelrequest.h \
    getsmschannelrequest_p.h \
    getsmschannelresponse.h \
    getsmschannelresponse_p.h \
    pinpointclient.h \
    pinpointclient_p.h \
    pinpointrequest.h \
    pinpointrequest_p.h \
    pinpointresponse.h \
    pinpointresponse_p.h \
    puteventstreamrequest.h \
    puteventstreamrequest_p.h \
    puteventstreamresponse.h \
    puteventstreamresponse_p.h \
    sendmessagesrequest.h \
    sendmessagesrequest_p.h \
    sendmessagesresponse.h \
    sendmessagesresponse_p.h \
    sendusersmessagesrequest.h \
    sendusersmessagesrequest_p.h \
    sendusersmessagesresponse.h \
    sendusersmessagesresponse_p.h \
    updateadmchannelrequest.h \
    updateadmchannelrequest_p.h \
    updateadmchannelresponse.h \
    updateadmchannelresponse_p.h \
    updateapnschannelrequest.h \
    updateapnschannelrequest_p.h \
    updateapnschannelresponse.h \
    updateapnschannelresponse_p.h \
    updateapnssandboxchannelrequest.h \
    updateapnssandboxchannelrequest_p.h \
    updateapnssandboxchannelresponse.h \
    updateapnssandboxchannelresponse_p.h \
    updateapnsvoipchannelrequest.h \
    updateapnsvoipchannelrequest_p.h \
    updateapnsvoipchannelresponse.h \
    updateapnsvoipchannelresponse_p.h \
    updateapnsvoipsandboxchannelrequest.h \
    updateapnsvoipsandboxchannelrequest_p.h \
    updateapnsvoipsandboxchannelresponse.h \
    updateapnsvoipsandboxchannelresponse_p.h \
    updateapplicationsettingsrequest.h \
    updateapplicationsettingsrequest_p.h \
    updateapplicationsettingsresponse.h \
    updateapplicationsettingsresponse_p.h \
    updatebaiduchannelrequest.h \
    updatebaiduchannelrequest_p.h \
    updatebaiduchannelresponse.h \
    updatebaiduchannelresponse_p.h \
    updatecampaignrequest.h \
    updatecampaignrequest_p.h \
    updatecampaignresponse.h \
    updatecampaignresponse_p.h \
    updateemailchannelrequest.h \
    updateemailchannelrequest_p.h \
    updateemailchannelresponse.h \
    updateemailchannelresponse_p.h \
    updateendpointrequest.h \
    updateendpointrequest_p.h \
    updateendpointresponse.h \
    updateendpointresponse_p.h \
    updateendpointsbatchrequest.h \
    updateendpointsbatchrequest_p.h \
    updateendpointsbatchresponse.h \
    updateendpointsbatchresponse_p.h \
    updategcmchannelrequest.h \
    updategcmchannelrequest_p.h \
    updategcmchannelresponse.h \
    updategcmchannelresponse_p.h \
    updatesegmentrequest.h \
    updatesegmentrequest_p.h \
    updatesegmentresponse.h \
    updatesegmentresponse_p.h \
    updatesmschannelrequest.h \
    updatesmschannelrequest_p.h \
    updatesmschannelresponse.h \
    updatesmschannelresponse_p.h \

SOURCES += \
    createapprequest.cpp \
    createappresponse.cpp \
    createcampaignrequest.cpp \
    createcampaignresponse.cpp \
    createexportjobrequest.cpp \
    createexportjobresponse.cpp \
    createimportjobrequest.cpp \
    createimportjobresponse.cpp \
    createsegmentrequest.cpp \
    createsegmentresponse.cpp \
    deleteadmchannelrequest.cpp \
    deleteadmchannelresponse.cpp \
    deleteapnschannelrequest.cpp \
    deleteapnschannelresponse.cpp \
    deleteapnssandboxchannelrequest.cpp \
    deleteapnssandboxchannelresponse.cpp \
    deleteapnsvoipchannelrequest.cpp \
    deleteapnsvoipchannelresponse.cpp \
    deleteapnsvoipsandboxchannelrequest.cpp \
    deleteapnsvoipsandboxchannelresponse.cpp \
    deleteapprequest.cpp \
    deleteappresponse.cpp \
    deletebaiduchannelrequest.cpp \
    deletebaiduchannelresponse.cpp \
    deletecampaignrequest.cpp \
    deletecampaignresponse.cpp \
    deleteemailchannelrequest.cpp \
    deleteemailchannelresponse.cpp \
    deleteendpointrequest.cpp \
    deleteendpointresponse.cpp \
    deleteeventstreamrequest.cpp \
    deleteeventstreamresponse.cpp \
    deletegcmchannelrequest.cpp \
    deletegcmchannelresponse.cpp \
    deletesegmentrequest.cpp \
    deletesegmentresponse.cpp \
    deletesmschannelrequest.cpp \
    deletesmschannelresponse.cpp \
    getadmchannelrequest.cpp \
    getadmchannelresponse.cpp \
    getapnschannelrequest.cpp \
    getapnschannelresponse.cpp \
    getapnssandboxchannelrequest.cpp \
    getapnssandboxchannelresponse.cpp \
    getapnsvoipchannelrequest.cpp \
    getapnsvoipchannelresponse.cpp \
    getapnsvoipsandboxchannelrequest.cpp \
    getapnsvoipsandboxchannelresponse.cpp \
    getapplicationsettingsrequest.cpp \
    getapplicationsettingsresponse.cpp \
    getapprequest.cpp \
    getappresponse.cpp \
    getappsrequest.cpp \
    getappsresponse.cpp \
    getbaiduchannelrequest.cpp \
    getbaiduchannelresponse.cpp \
    getcampaignactivitiesrequest.cpp \
    getcampaignactivitiesresponse.cpp \
    getcampaignrequest.cpp \
    getcampaignresponse.cpp \
    getcampaignsrequest.cpp \
    getcampaignsresponse.cpp \
    getcampaignversionrequest.cpp \
    getcampaignversionresponse.cpp \
    getcampaignversionsrequest.cpp \
    getcampaignversionsresponse.cpp \
    getemailchannelrequest.cpp \
    getemailchannelresponse.cpp \
    getendpointrequest.cpp \
    getendpointresponse.cpp \
    geteventstreamrequest.cpp \
    geteventstreamresponse.cpp \
    getexportjobrequest.cpp \
    getexportjobresponse.cpp \
    getexportjobsrequest.cpp \
    getexportjobsresponse.cpp \
    getgcmchannelrequest.cpp \
    getgcmchannelresponse.cpp \
    getimportjobrequest.cpp \
    getimportjobresponse.cpp \
    getimportjobsrequest.cpp \
    getimportjobsresponse.cpp \
    getsegmentexportjobsrequest.cpp \
    getsegmentexportjobsresponse.cpp \
    getsegmentimportjobsrequest.cpp \
    getsegmentimportjobsresponse.cpp \
    getsegmentrequest.cpp \
    getsegmentresponse.cpp \
    getsegmentsrequest.cpp \
    getsegmentsresponse.cpp \
    getsegmentversionrequest.cpp \
    getsegmentversionresponse.cpp \
    getsegmentversionsrequest.cpp \
    getsegmentversionsresponse.cpp \
    getsmschannelrequest.cpp \
    getsmschannelresponse.cpp \
    pinpointclient.cpp \
    pinpointrequest.cpp \
    pinpointresponse.cpp \
    puteventstreamrequest.cpp \
    puteventstreamresponse.cpp \
    sendmessagesrequest.cpp \
    sendmessagesresponse.cpp \
    sendusersmessagesrequest.cpp \
    sendusersmessagesresponse.cpp \
    updateadmchannelrequest.cpp \
    updateadmchannelresponse.cpp \
    updateapnschannelrequest.cpp \
    updateapnschannelresponse.cpp \
    updateapnssandboxchannelrequest.cpp \
    updateapnssandboxchannelresponse.cpp \
    updateapnsvoipchannelrequest.cpp \
    updateapnsvoipchannelresponse.cpp \
    updateapnsvoipsandboxchannelrequest.cpp \
    updateapnsvoipsandboxchannelresponse.cpp \
    updateapplicationsettingsrequest.cpp \
    updateapplicationsettingsresponse.cpp \
    updatebaiduchannelrequest.cpp \
    updatebaiduchannelresponse.cpp \
    updatecampaignrequest.cpp \
    updatecampaignresponse.cpp \
    updateemailchannelrequest.cpp \
    updateemailchannelresponse.cpp \
    updateendpointrequest.cpp \
    updateendpointresponse.cpp \
    updateendpointsbatchrequest.cpp \
    updateendpointsbatchresponse.cpp \
    updategcmchannelrequest.cpp \
    updategcmchannelresponse.cpp \
    updatesegmentrequest.cpp \
    updatesegmentresponse.cpp \
    updatesmschannelrequest.cpp \
    updatesmschannelresponse.cpp \

win32:CONFIG += skip_target_version_ext
