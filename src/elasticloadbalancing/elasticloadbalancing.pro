include(../../common.pri)

TARGET = QtAwsElasticLoadBalancing
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addtagsrequest.h \
    addtagsrequest_p.h \
    addtagsresponse.h \
    addtagsresponse_p.h \
    applysecuritygroupstoloadbalancerrequest.h \
    applysecuritygroupstoloadbalancerrequest_p.h \
    applysecuritygroupstoloadbalancerresponse.h \
    applysecuritygroupstoloadbalancerresponse_p.h \
    attachloadbalancertosubnetsrequest.h \
    attachloadbalancertosubnetsrequest_p.h \
    attachloadbalancertosubnetsresponse.h \
    attachloadbalancertosubnetsresponse_p.h \
    configurehealthcheckrequest.h \
    configurehealthcheckrequest_p.h \
    configurehealthcheckresponse.h \
    configurehealthcheckresponse_p.h \
    createappcookiestickinesspolicyrequest.h \
    createappcookiestickinesspolicyrequest_p.h \
    createappcookiestickinesspolicyresponse.h \
    createappcookiestickinesspolicyresponse_p.h \
    createlbcookiestickinesspolicyrequest.h \
    createlbcookiestickinesspolicyrequest_p.h \
    createlbcookiestickinesspolicyresponse.h \
    createlbcookiestickinesspolicyresponse_p.h \
    createloadbalancerlistenersrequest.h \
    createloadbalancerlistenersrequest_p.h \
    createloadbalancerlistenersresponse.h \
    createloadbalancerlistenersresponse_p.h \
    createloadbalancerpolicyrequest.h \
    createloadbalancerpolicyrequest_p.h \
    createloadbalancerpolicyresponse.h \
    createloadbalancerpolicyresponse_p.h \
    createloadbalancerrequest.h \
    createloadbalancerrequest_p.h \
    createloadbalancerresponse.h \
    createloadbalancerresponse_p.h \
    deleteloadbalancerlistenersrequest.h \
    deleteloadbalancerlistenersrequest_p.h \
    deleteloadbalancerlistenersresponse.h \
    deleteloadbalancerlistenersresponse_p.h \
    deleteloadbalancerpolicyrequest.h \
    deleteloadbalancerpolicyrequest_p.h \
    deleteloadbalancerpolicyresponse.h \
    deleteloadbalancerpolicyresponse_p.h \
    deleteloadbalancerrequest.h \
    deleteloadbalancerrequest_p.h \
    deleteloadbalancerresponse.h \
    deleteloadbalancerresponse_p.h \
    deregisterinstancesfromloadbalancerrequest.h \
    deregisterinstancesfromloadbalancerrequest_p.h \
    deregisterinstancesfromloadbalancerresponse.h \
    deregisterinstancesfromloadbalancerresponse_p.h \
    describeaccountlimitsrequest.h \
    describeaccountlimitsrequest_p.h \
    describeaccountlimitsresponse.h \
    describeaccountlimitsresponse_p.h \
    describeinstancehealthrequest.h \
    describeinstancehealthrequest_p.h \
    describeinstancehealthresponse.h \
    describeinstancehealthresponse_p.h \
    describeloadbalancerattributesrequest.h \
    describeloadbalancerattributesrequest_p.h \
    describeloadbalancerattributesresponse.h \
    describeloadbalancerattributesresponse_p.h \
    describeloadbalancerpoliciesrequest.h \
    describeloadbalancerpoliciesrequest_p.h \
    describeloadbalancerpoliciesresponse.h \
    describeloadbalancerpoliciesresponse_p.h \
    describeloadbalancerpolicytypesrequest.h \
    describeloadbalancerpolicytypesrequest_p.h \
    describeloadbalancerpolicytypesresponse.h \
    describeloadbalancerpolicytypesresponse_p.h \
    describeloadbalancersrequest.h \
    describeloadbalancersrequest_p.h \
    describeloadbalancersresponse.h \
    describeloadbalancersresponse_p.h \
    describetagsrequest.h \
    describetagsrequest_p.h \
    describetagsresponse.h \
    describetagsresponse_p.h \
    detachloadbalancerfromsubnetsrequest.h \
    detachloadbalancerfromsubnetsrequest_p.h \
    detachloadbalancerfromsubnetsresponse.h \
    detachloadbalancerfromsubnetsresponse_p.h \
    disableavailabilityzonesforloadbalancerrequest.h \
    disableavailabilityzonesforloadbalancerrequest_p.h \
    disableavailabilityzonesforloadbalancerresponse.h \
    disableavailabilityzonesforloadbalancerresponse_p.h \
    elasticloadbalancingclient.h \
    elasticloadbalancingclient_p.h \
    elasticloadbalancingrequest.h \
    elasticloadbalancingrequest_p.h \
    elasticloadbalancingresponse.h \
    elasticloadbalancingresponse_p.h \
    enableavailabilityzonesforloadbalancerrequest.h \
    enableavailabilityzonesforloadbalancerrequest_p.h \
    enableavailabilityzonesforloadbalancerresponse.h \
    enableavailabilityzonesforloadbalancerresponse_p.h \
    modifyloadbalancerattributesrequest.h \
    modifyloadbalancerattributesrequest_p.h \
    modifyloadbalancerattributesresponse.h \
    modifyloadbalancerattributesresponse_p.h \
    registerinstanceswithloadbalancerrequest.h \
    registerinstanceswithloadbalancerrequest_p.h \
    registerinstanceswithloadbalancerresponse.h \
    registerinstanceswithloadbalancerresponse_p.h \
    removetagsrequest.h \
    removetagsrequest_p.h \
    removetagsresponse.h \
    removetagsresponse_p.h \
    setloadbalancerlistenersslcertificaterequest.h \
    setloadbalancerlistenersslcertificaterequest_p.h \
    setloadbalancerlistenersslcertificateresponse.h \
    setloadbalancerlistenersslcertificateresponse_p.h \
    setloadbalancerpoliciesforbackendserverrequest.h \
    setloadbalancerpoliciesforbackendserverrequest_p.h \
    setloadbalancerpoliciesforbackendserverresponse.h \
    setloadbalancerpoliciesforbackendserverresponse_p.h \
    setloadbalancerpoliciesoflistenerrequest.h \
    setloadbalancerpoliciesoflistenerrequest_p.h \
    setloadbalancerpoliciesoflistenerresponse.h \
    setloadbalancerpoliciesoflistenerresponse_p.h \

SOURCES += \
    addtagsrequest.cpp \
    addtagsresponse.cpp \
    applysecuritygroupstoloadbalancerrequest.cpp \
    applysecuritygroupstoloadbalancerresponse.cpp \
    attachloadbalancertosubnetsrequest.cpp \
    attachloadbalancertosubnetsresponse.cpp \
    configurehealthcheckrequest.cpp \
    configurehealthcheckresponse.cpp \
    createappcookiestickinesspolicyrequest.cpp \
    createappcookiestickinesspolicyresponse.cpp \
    createlbcookiestickinesspolicyrequest.cpp \
    createlbcookiestickinesspolicyresponse.cpp \
    createloadbalancerlistenersrequest.cpp \
    createloadbalancerlistenersresponse.cpp \
    createloadbalancerpolicyrequest.cpp \
    createloadbalancerpolicyresponse.cpp \
    createloadbalancerrequest.cpp \
    createloadbalancerresponse.cpp \
    deleteloadbalancerlistenersrequest.cpp \
    deleteloadbalancerlistenersresponse.cpp \
    deleteloadbalancerpolicyrequest.cpp \
    deleteloadbalancerpolicyresponse.cpp \
    deleteloadbalancerrequest.cpp \
    deleteloadbalancerresponse.cpp \
    deregisterinstancesfromloadbalancerrequest.cpp \
    deregisterinstancesfromloadbalancerresponse.cpp \
    describeaccountlimitsrequest.cpp \
    describeaccountlimitsresponse.cpp \
    describeinstancehealthrequest.cpp \
    describeinstancehealthresponse.cpp \
    describeloadbalancerattributesrequest.cpp \
    describeloadbalancerattributesresponse.cpp \
    describeloadbalancerpoliciesrequest.cpp \
    describeloadbalancerpoliciesresponse.cpp \
    describeloadbalancerpolicytypesrequest.cpp \
    describeloadbalancerpolicytypesresponse.cpp \
    describeloadbalancersrequest.cpp \
    describeloadbalancersresponse.cpp \
    describetagsrequest.cpp \
    describetagsresponse.cpp \
    detachloadbalancerfromsubnetsrequest.cpp \
    detachloadbalancerfromsubnetsresponse.cpp \
    disableavailabilityzonesforloadbalancerrequest.cpp \
    disableavailabilityzonesforloadbalancerresponse.cpp \
    elasticloadbalancingclient.cpp \
    elasticloadbalancingrequest.cpp \
    elasticloadbalancingresponse.cpp \
    enableavailabilityzonesforloadbalancerrequest.cpp \
    enableavailabilityzonesforloadbalancerresponse.cpp \
    modifyloadbalancerattributesrequest.cpp \
    modifyloadbalancerattributesresponse.cpp \
    registerinstanceswithloadbalancerrequest.cpp \
    registerinstanceswithloadbalancerresponse.cpp \
    removetagsrequest.cpp \
    removetagsresponse.cpp \
    setloadbalancerlistenersslcertificaterequest.cpp \
    setloadbalancerlistenersslcertificateresponse.cpp \
    setloadbalancerpoliciesforbackendserverrequest.cpp \
    setloadbalancerpoliciesforbackendserverresponse.cpp \
    setloadbalancerpoliciesoflistenerrequest.cpp \
    setloadbalancerpoliciesoflistenerresponse.cpp \

win32:CONFIG += skip_target_version_ext
