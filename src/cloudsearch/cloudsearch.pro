include(../../common.pri)

TARGET = QtAwsCloudSearch
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    buildsuggestersrequest.h \
    buildsuggestersrequest_p.h \
    buildsuggestersresponse.h \
    buildsuggestersresponse_p.h \
    cloudsearchclient.h \
    cloudsearchclient_p.h \
    cloudsearchrequest.h \
    cloudsearchrequest_p.h \
    cloudsearchresponse.h \
    cloudsearchresponse_p.h \
    createdomainrequest.h \
    createdomainrequest_p.h \
    createdomainresponse.h \
    createdomainresponse_p.h \
    defineanalysisschemerequest.h \
    defineanalysisschemerequest_p.h \
    defineanalysisschemeresponse.h \
    defineanalysisschemeresponse_p.h \
    defineexpressionrequest.h \
    defineexpressionrequest_p.h \
    defineexpressionresponse.h \
    defineexpressionresponse_p.h \
    defineindexfieldrequest.h \
    defineindexfieldrequest_p.h \
    defineindexfieldresponse.h \
    defineindexfieldresponse_p.h \
    definesuggesterrequest.h \
    definesuggesterrequest_p.h \
    definesuggesterresponse.h \
    definesuggesterresponse_p.h \
    deleteanalysisschemerequest.h \
    deleteanalysisschemerequest_p.h \
    deleteanalysisschemeresponse.h \
    deleteanalysisschemeresponse_p.h \
    deletedomainrequest.h \
    deletedomainrequest_p.h \
    deletedomainresponse.h \
    deletedomainresponse_p.h \
    deleteexpressionrequest.h \
    deleteexpressionrequest_p.h \
    deleteexpressionresponse.h \
    deleteexpressionresponse_p.h \
    deleteindexfieldrequest.h \
    deleteindexfieldrequest_p.h \
    deleteindexfieldresponse.h \
    deleteindexfieldresponse_p.h \
    deletesuggesterrequest.h \
    deletesuggesterrequest_p.h \
    deletesuggesterresponse.h \
    deletesuggesterresponse_p.h \
    describeanalysisschemesrequest.h \
    describeanalysisschemesrequest_p.h \
    describeanalysisschemesresponse.h \
    describeanalysisschemesresponse_p.h \
    describeavailabilityoptionsrequest.h \
    describeavailabilityoptionsrequest_p.h \
    describeavailabilityoptionsresponse.h \
    describeavailabilityoptionsresponse_p.h \
    describedomainsrequest.h \
    describedomainsrequest_p.h \
    describedomainsresponse.h \
    describedomainsresponse_p.h \
    describeexpressionsrequest.h \
    describeexpressionsrequest_p.h \
    describeexpressionsresponse.h \
    describeexpressionsresponse_p.h \
    describeindexfieldsrequest.h \
    describeindexfieldsrequest_p.h \
    describeindexfieldsresponse.h \
    describeindexfieldsresponse_p.h \
    describescalingparametersrequest.h \
    describescalingparametersrequest_p.h \
    describescalingparametersresponse.h \
    describescalingparametersresponse_p.h \
    describeserviceaccesspoliciesrequest.h \
    describeserviceaccesspoliciesrequest_p.h \
    describeserviceaccesspoliciesresponse.h \
    describeserviceaccesspoliciesresponse_p.h \
    describesuggestersrequest.h \
    describesuggestersrequest_p.h \
    describesuggestersresponse.h \
    describesuggestersresponse_p.h \
    indexdocumentsrequest.h \
    indexdocumentsrequest_p.h \
    indexdocumentsresponse.h \
    indexdocumentsresponse_p.h \
    listdomainnamesresponse.h \
    listdomainnamesresponse_p.h \
    updateavailabilityoptionsrequest.h \
    updateavailabilityoptionsrequest_p.h \
    updateavailabilityoptionsresponse.h \
    updateavailabilityoptionsresponse_p.h \
    updatescalingparametersrequest.h \
    updatescalingparametersrequest_p.h \
    updatescalingparametersresponse.h \
    updatescalingparametersresponse_p.h \
    updateserviceaccesspoliciesrequest.h \
    updateserviceaccesspoliciesrequest_p.h \
    updateserviceaccesspoliciesresponse.h \
    updateserviceaccesspoliciesresponse_p.h \

SOURCES += \
    buildsuggestersrequest.cpp \
    buildsuggestersresponse.cpp \
    cloudsearchclient.cpp \
    cloudsearchrequest.cpp \
    cloudsearchresponse.cpp \
    createdomainrequest.cpp \
    createdomainresponse.cpp \
    defineanalysisschemerequest.cpp \
    defineanalysisschemeresponse.cpp \
    defineexpressionrequest.cpp \
    defineexpressionresponse.cpp \
    defineindexfieldrequest.cpp \
    defineindexfieldresponse.cpp \
    definesuggesterrequest.cpp \
    definesuggesterresponse.cpp \
    deleteanalysisschemerequest.cpp \
    deleteanalysisschemeresponse.cpp \
    deletedomainrequest.cpp \
    deletedomainresponse.cpp \
    deleteexpressionrequest.cpp \
    deleteexpressionresponse.cpp \
    deleteindexfieldrequest.cpp \
    deleteindexfieldresponse.cpp \
    deletesuggesterrequest.cpp \
    deletesuggesterresponse.cpp \
    describeanalysisschemesrequest.cpp \
    describeanalysisschemesresponse.cpp \
    describeavailabilityoptionsrequest.cpp \
    describeavailabilityoptionsresponse.cpp \
    describedomainsrequest.cpp \
    describedomainsresponse.cpp \
    describeexpressionsrequest.cpp \
    describeexpressionsresponse.cpp \
    describeindexfieldsrequest.cpp \
    describeindexfieldsresponse.cpp \
    describescalingparametersrequest.cpp \
    describescalingparametersresponse.cpp \
    describeserviceaccesspoliciesrequest.cpp \
    describeserviceaccesspoliciesresponse.cpp \
    describesuggestersrequest.cpp \
    describesuggestersresponse.cpp \
    indexdocumentsrequest.cpp \
    indexdocumentsresponse.cpp \
    listdomainnamesresponse.cpp \
    updateavailabilityoptionsrequest.cpp \
    updateavailabilityoptionsresponse.cpp \
    updatescalingparametersrequest.cpp \
    updatescalingparametersresponse.cpp \
    updateserviceaccesspoliciesrequest.cpp \
    updateserviceaccesspoliciesresponse.cpp \

win32:CONFIG += skip_target_version_ext
