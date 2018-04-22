include(../../common.pri)

TARGET = QtAwsRoute53Domains
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    checkdomainavailabilityrequest.h \
    checkdomainavailabilityrequest_p.h \
    checkdomainavailabilityresponse.h \
    checkdomainavailabilityresponse_p.h \
    checkdomaintransferabilityrequest.h \
    checkdomaintransferabilityrequest_p.h \
    checkdomaintransferabilityresponse.h \
    checkdomaintransferabilityresponse_p.h \
    deletetagsfordomainrequest.h \
    deletetagsfordomainrequest_p.h \
    deletetagsfordomainresponse.h \
    deletetagsfordomainresponse_p.h \
    disabledomainautorenewrequest.h \
    disabledomainautorenewrequest_p.h \
    disabledomainautorenewresponse.h \
    disabledomainautorenewresponse_p.h \
    disabledomaintransferlockrequest.h \
    disabledomaintransferlockrequest_p.h \
    disabledomaintransferlockresponse.h \
    disabledomaintransferlockresponse_p.h \
    enabledomainautorenewrequest.h \
    enabledomainautorenewrequest_p.h \
    enabledomainautorenewresponse.h \
    enabledomainautorenewresponse_p.h \
    enabledomaintransferlockrequest.h \
    enabledomaintransferlockrequest_p.h \
    enabledomaintransferlockresponse.h \
    enabledomaintransferlockresponse_p.h \
    getcontactreachabilitystatusrequest.h \
    getcontactreachabilitystatusrequest_p.h \
    getcontactreachabilitystatusresponse.h \
    getcontactreachabilitystatusresponse_p.h \
    getdomaindetailrequest.h \
    getdomaindetailrequest_p.h \
    getdomaindetailresponse.h \
    getdomaindetailresponse_p.h \
    getdomainsuggestionsrequest.h \
    getdomainsuggestionsrequest_p.h \
    getdomainsuggestionsresponse.h \
    getdomainsuggestionsresponse_p.h \
    getoperationdetailrequest.h \
    getoperationdetailrequest_p.h \
    getoperationdetailresponse.h \
    getoperationdetailresponse_p.h \
    listdomainsrequest.h \
    listdomainsrequest_p.h \
    listdomainsresponse.h \
    listdomainsresponse_p.h \
    listoperationsrequest.h \
    listoperationsrequest_p.h \
    listoperationsresponse.h \
    listoperationsresponse_p.h \
    listtagsfordomainrequest.h \
    listtagsfordomainrequest_p.h \
    listtagsfordomainresponse.h \
    listtagsfordomainresponse_p.h \
    registerdomainrequest.h \
    registerdomainrequest_p.h \
    registerdomainresponse.h \
    registerdomainresponse_p.h \
    renewdomainrequest.h \
    renewdomainrequest_p.h \
    renewdomainresponse.h \
    renewdomainresponse_p.h \
    resendcontactreachabilityemailrequest.h \
    resendcontactreachabilityemailrequest_p.h \
    resendcontactreachabilityemailresponse.h \
    resendcontactreachabilityemailresponse_p.h \
    retrievedomainauthcoderequest.h \
    retrievedomainauthcoderequest_p.h \
    retrievedomainauthcoderesponse.h \
    retrievedomainauthcoderesponse_p.h \
    route53domainsclient.h \
    route53domainsclient_p.h \
    route53domainsrequest.h \
    route53domainsrequest_p.h \
    route53domainsresponse.h \
    route53domainsresponse_p.h \
    transferdomainrequest.h \
    transferdomainrequest_p.h \
    transferdomainresponse.h \
    transferdomainresponse_p.h \
    updatedomaincontactprivacyrequest.h \
    updatedomaincontactprivacyrequest_p.h \
    updatedomaincontactprivacyresponse.h \
    updatedomaincontactprivacyresponse_p.h \
    updatedomaincontactrequest.h \
    updatedomaincontactrequest_p.h \
    updatedomaincontactresponse.h \
    updatedomaincontactresponse_p.h \
    updatedomainnameserversrequest.h \
    updatedomainnameserversrequest_p.h \
    updatedomainnameserversresponse.h \
    updatedomainnameserversresponse_p.h \
    updatetagsfordomainrequest.h \
    updatetagsfordomainrequest_p.h \
    updatetagsfordomainresponse.h \
    updatetagsfordomainresponse_p.h \
    viewbillingrequest.h \
    viewbillingrequest_p.h \
    viewbillingresponse.h \
    viewbillingresponse_p.h \

SOURCES += \
    checkdomainavailabilityrequest.cpp \
    checkdomainavailabilityresponse.cpp \
    checkdomaintransferabilityrequest.cpp \
    checkdomaintransferabilityresponse.cpp \
    deletetagsfordomainrequest.cpp \
    deletetagsfordomainresponse.cpp \
    disabledomainautorenewrequest.cpp \
    disabledomainautorenewresponse.cpp \
    disabledomaintransferlockrequest.cpp \
    disabledomaintransferlockresponse.cpp \
    enabledomainautorenewrequest.cpp \
    enabledomainautorenewresponse.cpp \
    enabledomaintransferlockrequest.cpp \
    enabledomaintransferlockresponse.cpp \
    getcontactreachabilitystatusrequest.cpp \
    getcontactreachabilitystatusresponse.cpp \
    getdomaindetailrequest.cpp \
    getdomaindetailresponse.cpp \
    getdomainsuggestionsrequest.cpp \
    getdomainsuggestionsresponse.cpp \
    getoperationdetailrequest.cpp \
    getoperationdetailresponse.cpp \
    listdomainsrequest.cpp \
    listdomainsresponse.cpp \
    listoperationsrequest.cpp \
    listoperationsresponse.cpp \
    listtagsfordomainrequest.cpp \
    listtagsfordomainresponse.cpp \
    registerdomainrequest.cpp \
    registerdomainresponse.cpp \
    renewdomainrequest.cpp \
    renewdomainresponse.cpp \
    resendcontactreachabilityemailrequest.cpp \
    resendcontactreachabilityemailresponse.cpp \
    retrievedomainauthcoderequest.cpp \
    retrievedomainauthcoderesponse.cpp \
    route53domainsclient.cpp \
    route53domainsrequest.cpp \
    route53domainsresponse.cpp \
    transferdomainrequest.cpp \
    transferdomainresponse.cpp \
    updatedomaincontactprivacyrequest.cpp \
    updatedomaincontactprivacyresponse.cpp \
    updatedomaincontactrequest.cpp \
    updatedomaincontactresponse.cpp \
    updatedomainnameserversrequest.cpp \
    updatedomainnameserversresponse.cpp \
    updatetagsfordomainrequest.cpp \
    updatetagsfordomainresponse.cpp \
    viewbillingrequest.cpp \
    viewbillingresponse.cpp \

win32:CONFIG += skip_target_version_ext
