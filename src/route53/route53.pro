include(../../common.pri)

TARGET = QtAwsRoute53
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    associatevpcwithhostedzonerequest.h \
    associatevpcwithhostedzonerequest_p.h \
    associatevpcwithhostedzoneresponse.h \
    associatevpcwithhostedzoneresponse_p.h \
    changeresourcerecordsetsrequest.h \
    changeresourcerecordsetsrequest_p.h \
    changeresourcerecordsetsresponse.h \
    changeresourcerecordsetsresponse_p.h \
    changetagsforresourcerequest.h \
    changetagsforresourcerequest_p.h \
    changetagsforresourceresponse.h \
    changetagsforresourceresponse_p.h \
    createhealthcheckrequest.h \
    createhealthcheckrequest_p.h \
    createhealthcheckresponse.h \
    createhealthcheckresponse_p.h \
    createhostedzonerequest.h \
    createhostedzonerequest_p.h \
    createhostedzoneresponse.h \
    createhostedzoneresponse_p.h \
    createqueryloggingconfigrequest.h \
    createqueryloggingconfigrequest_p.h \
    createqueryloggingconfigresponse.h \
    createqueryloggingconfigresponse_p.h \
    createreusabledelegationsetrequest.h \
    createreusabledelegationsetrequest_p.h \
    createreusabledelegationsetresponse.h \
    createreusabledelegationsetresponse_p.h \
    createtrafficpolicyinstancerequest.h \
    createtrafficpolicyinstancerequest_p.h \
    createtrafficpolicyinstanceresponse.h \
    createtrafficpolicyinstanceresponse_p.h \
    createtrafficpolicyrequest.h \
    createtrafficpolicyrequest_p.h \
    createtrafficpolicyresponse.h \
    createtrafficpolicyresponse_p.h \
    createtrafficpolicyversionrequest.h \
    createtrafficpolicyversionrequest_p.h \
    createtrafficpolicyversionresponse.h \
    createtrafficpolicyversionresponse_p.h \
    createvpcassociationauthorizationrequest.h \
    createvpcassociationauthorizationrequest_p.h \
    createvpcassociationauthorizationresponse.h \
    createvpcassociationauthorizationresponse_p.h \
    deletehealthcheckrequest.h \
    deletehealthcheckrequest_p.h \
    deletehealthcheckresponse.h \
    deletehealthcheckresponse_p.h \
    deletehostedzonerequest.h \
    deletehostedzonerequest_p.h \
    deletehostedzoneresponse.h \
    deletehostedzoneresponse_p.h \
    deletequeryloggingconfigrequest.h \
    deletequeryloggingconfigrequest_p.h \
    deletequeryloggingconfigresponse.h \
    deletequeryloggingconfigresponse_p.h \
    deletereusabledelegationsetrequest.h \
    deletereusabledelegationsetrequest_p.h \
    deletereusabledelegationsetresponse.h \
    deletereusabledelegationsetresponse_p.h \
    deletetrafficpolicyinstancerequest.h \
    deletetrafficpolicyinstancerequest_p.h \
    deletetrafficpolicyinstanceresponse.h \
    deletetrafficpolicyinstanceresponse_p.h \
    deletetrafficpolicyrequest.h \
    deletetrafficpolicyrequest_p.h \
    deletetrafficpolicyresponse.h \
    deletetrafficpolicyresponse_p.h \
    deletevpcassociationauthorizationrequest.h \
    deletevpcassociationauthorizationrequest_p.h \
    deletevpcassociationauthorizationresponse.h \
    deletevpcassociationauthorizationresponse_p.h \
    disassociatevpcfromhostedzonerequest.h \
    disassociatevpcfromhostedzonerequest_p.h \
    disassociatevpcfromhostedzoneresponse.h \
    disassociatevpcfromhostedzoneresponse_p.h \
    getaccountlimitrequest.h \
    getaccountlimitrequest_p.h \
    getaccountlimitresponse.h \
    getaccountlimitresponse_p.h \
    getchangerequest.h \
    getchangerequest_p.h \
    getchangeresponse.h \
    getchangeresponse_p.h \
    getcheckeriprangesrequest.h \
    getcheckeriprangesrequest_p.h \
    getcheckeriprangesresponse.h \
    getcheckeriprangesresponse_p.h \
    getgeolocationrequest.h \
    getgeolocationrequest_p.h \
    getgeolocationresponse.h \
    getgeolocationresponse_p.h \
    gethealthcheckcountrequest.h \
    gethealthcheckcountrequest_p.h \
    gethealthcheckcountresponse.h \
    gethealthcheckcountresponse_p.h \
    gethealthchecklastfailurereasonrequest.h \
    gethealthchecklastfailurereasonrequest_p.h \
    gethealthchecklastfailurereasonresponse.h \
    gethealthchecklastfailurereasonresponse_p.h \
    gethealthcheckrequest.h \
    gethealthcheckrequest_p.h \
    gethealthcheckresponse.h \
    gethealthcheckresponse_p.h \
    gethealthcheckstatusrequest.h \
    gethealthcheckstatusrequest_p.h \
    gethealthcheckstatusresponse.h \
    gethealthcheckstatusresponse_p.h \
    gethostedzonecountrequest.h \
    gethostedzonecountrequest_p.h \
    gethostedzonecountresponse.h \
    gethostedzonecountresponse_p.h \
    gethostedzonelimitrequest.h \
    gethostedzonelimitrequest_p.h \
    gethostedzonelimitresponse.h \
    gethostedzonelimitresponse_p.h \
    gethostedzonerequest.h \
    gethostedzonerequest_p.h \
    gethostedzoneresponse.h \
    gethostedzoneresponse_p.h \
    getqueryloggingconfigrequest.h \
    getqueryloggingconfigrequest_p.h \
    getqueryloggingconfigresponse.h \
    getqueryloggingconfigresponse_p.h \
    getreusabledelegationsetlimitrequest.h \
    getreusabledelegationsetlimitrequest_p.h \
    getreusabledelegationsetlimitresponse.h \
    getreusabledelegationsetlimitresponse_p.h \
    getreusabledelegationsetrequest.h \
    getreusabledelegationsetrequest_p.h \
    getreusabledelegationsetresponse.h \
    getreusabledelegationsetresponse_p.h \
    gettrafficpolicyinstancecountrequest.h \
    gettrafficpolicyinstancecountrequest_p.h \
    gettrafficpolicyinstancecountresponse.h \
    gettrafficpolicyinstancecountresponse_p.h \
    gettrafficpolicyinstancerequest.h \
    gettrafficpolicyinstancerequest_p.h \
    gettrafficpolicyinstanceresponse.h \
    gettrafficpolicyinstanceresponse_p.h \
    gettrafficpolicyrequest.h \
    gettrafficpolicyrequest_p.h \
    gettrafficpolicyresponse.h \
    gettrafficpolicyresponse_p.h \
    listgeolocationsrequest.h \
    listgeolocationsrequest_p.h \
    listgeolocationsresponse.h \
    listgeolocationsresponse_p.h \
    listhealthchecksrequest.h \
    listhealthchecksrequest_p.h \
    listhealthchecksresponse.h \
    listhealthchecksresponse_p.h \
    listhostedzonesbynamerequest.h \
    listhostedzonesbynamerequest_p.h \
    listhostedzonesbynameresponse.h \
    listhostedzonesbynameresponse_p.h \
    listhostedzonesrequest.h \
    listhostedzonesrequest_p.h \
    listhostedzonesresponse.h \
    listhostedzonesresponse_p.h \
    listqueryloggingconfigsrequest.h \
    listqueryloggingconfigsrequest_p.h \
    listqueryloggingconfigsresponse.h \
    listqueryloggingconfigsresponse_p.h \
    listresourcerecordsetsrequest.h \
    listresourcerecordsetsrequest_p.h \
    listresourcerecordsetsresponse.h \
    listresourcerecordsetsresponse_p.h \
    listreusabledelegationsetsrequest.h \
    listreusabledelegationsetsrequest_p.h \
    listreusabledelegationsetsresponse.h \
    listreusabledelegationsetsresponse_p.h \
    listtagsforresourcerequest.h \
    listtagsforresourcerequest_p.h \
    listtagsforresourceresponse.h \
    listtagsforresourceresponse_p.h \
    listtagsforresourcesrequest.h \
    listtagsforresourcesrequest_p.h \
    listtagsforresourcesresponse.h \
    listtagsforresourcesresponse_p.h \
    listtrafficpoliciesrequest.h \
    listtrafficpoliciesrequest_p.h \
    listtrafficpoliciesresponse.h \
    listtrafficpoliciesresponse_p.h \
    listtrafficpolicyinstancesbyhostedzonerequest.h \
    listtrafficpolicyinstancesbyhostedzonerequest_p.h \
    listtrafficpolicyinstancesbyhostedzoneresponse.h \
    listtrafficpolicyinstancesbyhostedzoneresponse_p.h \
    listtrafficpolicyinstancesbypolicyrequest.h \
    listtrafficpolicyinstancesbypolicyrequest_p.h \
    listtrafficpolicyinstancesbypolicyresponse.h \
    listtrafficpolicyinstancesbypolicyresponse_p.h \
    listtrafficpolicyinstancesrequest.h \
    listtrafficpolicyinstancesrequest_p.h \
    listtrafficpolicyinstancesresponse.h \
    listtrafficpolicyinstancesresponse_p.h \
    listtrafficpolicyversionsrequest.h \
    listtrafficpolicyversionsrequest_p.h \
    listtrafficpolicyversionsresponse.h \
    listtrafficpolicyversionsresponse_p.h \
    listvpcassociationauthorizationsrequest.h \
    listvpcassociationauthorizationsrequest_p.h \
    listvpcassociationauthorizationsresponse.h \
    listvpcassociationauthorizationsresponse_p.h \
    route53client.h \
    route53client_p.h \
    route53request.h \
    route53request_p.h \
    route53response.h \
    route53response_p.h \
    testdnsanswerrequest.h \
    testdnsanswerrequest_p.h \
    testdnsanswerresponse.h \
    testdnsanswerresponse_p.h \
    updatehealthcheckrequest.h \
    updatehealthcheckrequest_p.h \
    updatehealthcheckresponse.h \
    updatehealthcheckresponse_p.h \
    updatehostedzonecommentrequest.h \
    updatehostedzonecommentrequest_p.h \
    updatehostedzonecommentresponse.h \
    updatehostedzonecommentresponse_p.h \
    updatetrafficpolicycommentrequest.h \
    updatetrafficpolicycommentrequest_p.h \
    updatetrafficpolicycommentresponse.h \
    updatetrafficpolicycommentresponse_p.h \
    updatetrafficpolicyinstancerequest.h \
    updatetrafficpolicyinstancerequest_p.h \
    updatetrafficpolicyinstanceresponse.h \
    updatetrafficpolicyinstanceresponse_p.h \

SOURCES += \
    associatevpcwithhostedzonerequest.cpp \
    associatevpcwithhostedzoneresponse.cpp \
    changeresourcerecordsetsrequest.cpp \
    changeresourcerecordsetsresponse.cpp \
    changetagsforresourcerequest.cpp \
    changetagsforresourceresponse.cpp \
    createhealthcheckrequest.cpp \
    createhealthcheckresponse.cpp \
    createhostedzonerequest.cpp \
    createhostedzoneresponse.cpp \
    createqueryloggingconfigrequest.cpp \
    createqueryloggingconfigresponse.cpp \
    createreusabledelegationsetrequest.cpp \
    createreusabledelegationsetresponse.cpp \
    createtrafficpolicyinstancerequest.cpp \
    createtrafficpolicyinstanceresponse.cpp \
    createtrafficpolicyrequest.cpp \
    createtrafficpolicyresponse.cpp \
    createtrafficpolicyversionrequest.cpp \
    createtrafficpolicyversionresponse.cpp \
    createvpcassociationauthorizationrequest.cpp \
    createvpcassociationauthorizationresponse.cpp \
    deletehealthcheckrequest.cpp \
    deletehealthcheckresponse.cpp \
    deletehostedzonerequest.cpp \
    deletehostedzoneresponse.cpp \
    deletequeryloggingconfigrequest.cpp \
    deletequeryloggingconfigresponse.cpp \
    deletereusabledelegationsetrequest.cpp \
    deletereusabledelegationsetresponse.cpp \
    deletetrafficpolicyinstancerequest.cpp \
    deletetrafficpolicyinstanceresponse.cpp \
    deletetrafficpolicyrequest.cpp \
    deletetrafficpolicyresponse.cpp \
    deletevpcassociationauthorizationrequest.cpp \
    deletevpcassociationauthorizationresponse.cpp \
    disassociatevpcfromhostedzonerequest.cpp \
    disassociatevpcfromhostedzoneresponse.cpp \
    getaccountlimitrequest.cpp \
    getaccountlimitresponse.cpp \
    getchangerequest.cpp \
    getchangeresponse.cpp \
    getcheckeriprangesrequest.cpp \
    getcheckeriprangesresponse.cpp \
    getgeolocationrequest.cpp \
    getgeolocationresponse.cpp \
    gethealthcheckcountrequest.cpp \
    gethealthcheckcountresponse.cpp \
    gethealthchecklastfailurereasonrequest.cpp \
    gethealthchecklastfailurereasonresponse.cpp \
    gethealthcheckrequest.cpp \
    gethealthcheckresponse.cpp \
    gethealthcheckstatusrequest.cpp \
    gethealthcheckstatusresponse.cpp \
    gethostedzonecountrequest.cpp \
    gethostedzonecountresponse.cpp \
    gethostedzonelimitrequest.cpp \
    gethostedzonelimitresponse.cpp \
    gethostedzonerequest.cpp \
    gethostedzoneresponse.cpp \
    getqueryloggingconfigrequest.cpp \
    getqueryloggingconfigresponse.cpp \
    getreusabledelegationsetlimitrequest.cpp \
    getreusabledelegationsetlimitresponse.cpp \
    getreusabledelegationsetrequest.cpp \
    getreusabledelegationsetresponse.cpp \
    gettrafficpolicyinstancecountrequest.cpp \
    gettrafficpolicyinstancecountresponse.cpp \
    gettrafficpolicyinstancerequest.cpp \
    gettrafficpolicyinstanceresponse.cpp \
    gettrafficpolicyrequest.cpp \
    gettrafficpolicyresponse.cpp \
    listgeolocationsrequest.cpp \
    listgeolocationsresponse.cpp \
    listhealthchecksrequest.cpp \
    listhealthchecksresponse.cpp \
    listhostedzonesbynamerequest.cpp \
    listhostedzonesbynameresponse.cpp \
    listhostedzonesrequest.cpp \
    listhostedzonesresponse.cpp \
    listqueryloggingconfigsrequest.cpp \
    listqueryloggingconfigsresponse.cpp \
    listresourcerecordsetsrequest.cpp \
    listresourcerecordsetsresponse.cpp \
    listreusabledelegationsetsrequest.cpp \
    listreusabledelegationsetsresponse.cpp \
    listtagsforresourcerequest.cpp \
    listtagsforresourceresponse.cpp \
    listtagsforresourcesrequest.cpp \
    listtagsforresourcesresponse.cpp \
    listtrafficpoliciesrequest.cpp \
    listtrafficpoliciesresponse.cpp \
    listtrafficpolicyinstancesbyhostedzonerequest.cpp \
    listtrafficpolicyinstancesbyhostedzoneresponse.cpp \
    listtrafficpolicyinstancesbypolicyrequest.cpp \
    listtrafficpolicyinstancesbypolicyresponse.cpp \
    listtrafficpolicyinstancesrequest.cpp \
    listtrafficpolicyinstancesresponse.cpp \
    listtrafficpolicyversionsrequest.cpp \
    listtrafficpolicyversionsresponse.cpp \
    listvpcassociationauthorizationsrequest.cpp \
    listvpcassociationauthorizationsresponse.cpp \
    route53client.cpp \
    route53request.cpp \
    route53response.cpp \
    testdnsanswerrequest.cpp \
    testdnsanswerresponse.cpp \
    updatehealthcheckrequest.cpp \
    updatehealthcheckresponse.cpp \
    updatehostedzonecommentrequest.cpp \
    updatehostedzonecommentresponse.cpp \
    updatetrafficpolicycommentrequest.cpp \
    updatetrafficpolicycommentresponse.cpp \
    updatetrafficpolicyinstancerequest.cpp \
    updatetrafficpolicyinstanceresponse.cpp \

win32:CONFIG += skip_target_version_ext
