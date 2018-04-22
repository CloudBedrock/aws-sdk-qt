include(../../common.pri)

TARGET = QtAwsServiceCatalog
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    acceptportfoliosharerequest.h \
    acceptportfoliosharerequest_p.h \
    acceptportfolioshareresponse.h \
    acceptportfolioshareresponse_p.h \
    associateprincipalwithportfoliorequest.h \
    associateprincipalwithportfoliorequest_p.h \
    associateprincipalwithportfolioresponse.h \
    associateprincipalwithportfolioresponse_p.h \
    associateproductwithportfoliorequest.h \
    associateproductwithportfoliorequest_p.h \
    associateproductwithportfolioresponse.h \
    associateproductwithportfolioresponse_p.h \
    associatetagoptionwithresourcerequest.h \
    associatetagoptionwithresourcerequest_p.h \
    associatetagoptionwithresourceresponse.h \
    associatetagoptionwithresourceresponse_p.h \
    copyproductrequest.h \
    copyproductrequest_p.h \
    copyproductresponse.h \
    copyproductresponse_p.h \
    createconstraintrequest.h \
    createconstraintrequest_p.h \
    createconstraintresponse.h \
    createconstraintresponse_p.h \
    createportfoliorequest.h \
    createportfoliorequest_p.h \
    createportfolioresponse.h \
    createportfolioresponse_p.h \
    createportfoliosharerequest.h \
    createportfoliosharerequest_p.h \
    createportfolioshareresponse.h \
    createportfolioshareresponse_p.h \
    createproductrequest.h \
    createproductrequest_p.h \
    createproductresponse.h \
    createproductresponse_p.h \
    createprovisionedproductplanrequest.h \
    createprovisionedproductplanrequest_p.h \
    createprovisionedproductplanresponse.h \
    createprovisionedproductplanresponse_p.h \
    createprovisioningartifactrequest.h \
    createprovisioningartifactrequest_p.h \
    createprovisioningartifactresponse.h \
    createprovisioningartifactresponse_p.h \
    createtagoptionrequest.h \
    createtagoptionrequest_p.h \
    createtagoptionresponse.h \
    createtagoptionresponse_p.h \
    deleteconstraintrequest.h \
    deleteconstraintrequest_p.h \
    deleteconstraintresponse.h \
    deleteconstraintresponse_p.h \
    deleteportfoliorequest.h \
    deleteportfoliorequest_p.h \
    deleteportfolioresponse.h \
    deleteportfolioresponse_p.h \
    deleteportfoliosharerequest.h \
    deleteportfoliosharerequest_p.h \
    deleteportfolioshareresponse.h \
    deleteportfolioshareresponse_p.h \
    deleteproductrequest.h \
    deleteproductrequest_p.h \
    deleteproductresponse.h \
    deleteproductresponse_p.h \
    deleteprovisionedproductplanrequest.h \
    deleteprovisionedproductplanrequest_p.h \
    deleteprovisionedproductplanresponse.h \
    deleteprovisionedproductplanresponse_p.h \
    deleteprovisioningartifactrequest.h \
    deleteprovisioningartifactrequest_p.h \
    deleteprovisioningartifactresponse.h \
    deleteprovisioningartifactresponse_p.h \
    deletetagoptionrequest.h \
    deletetagoptionrequest_p.h \
    deletetagoptionresponse.h \
    deletetagoptionresponse_p.h \
    describeconstraintrequest.h \
    describeconstraintrequest_p.h \
    describeconstraintresponse.h \
    describeconstraintresponse_p.h \
    describecopyproductstatusrequest.h \
    describecopyproductstatusrequest_p.h \
    describecopyproductstatusresponse.h \
    describecopyproductstatusresponse_p.h \
    describeportfoliorequest.h \
    describeportfoliorequest_p.h \
    describeportfolioresponse.h \
    describeportfolioresponse_p.h \
    describeproductasadminrequest.h \
    describeproductasadminrequest_p.h \
    describeproductasadminresponse.h \
    describeproductasadminresponse_p.h \
    describeproductrequest.h \
    describeproductrequest_p.h \
    describeproductresponse.h \
    describeproductresponse_p.h \
    describeproductviewrequest.h \
    describeproductviewrequest_p.h \
    describeproductviewresponse.h \
    describeproductviewresponse_p.h \
    describeprovisionedproductplanrequest.h \
    describeprovisionedproductplanrequest_p.h \
    describeprovisionedproductplanresponse.h \
    describeprovisionedproductplanresponse_p.h \
    describeprovisionedproductrequest.h \
    describeprovisionedproductrequest_p.h \
    describeprovisionedproductresponse.h \
    describeprovisionedproductresponse_p.h \
    describeprovisioningartifactrequest.h \
    describeprovisioningartifactrequest_p.h \
    describeprovisioningartifactresponse.h \
    describeprovisioningartifactresponse_p.h \
    describeprovisioningparametersrequest.h \
    describeprovisioningparametersrequest_p.h \
    describeprovisioningparametersresponse.h \
    describeprovisioningparametersresponse_p.h \
    describerecordrequest.h \
    describerecordrequest_p.h \
    describerecordresponse.h \
    describerecordresponse_p.h \
    describetagoptionrequest.h \
    describetagoptionrequest_p.h \
    describetagoptionresponse.h \
    describetagoptionresponse_p.h \
    disassociateprincipalfromportfoliorequest.h \
    disassociateprincipalfromportfoliorequest_p.h \
    disassociateprincipalfromportfolioresponse.h \
    disassociateprincipalfromportfolioresponse_p.h \
    disassociateproductfromportfoliorequest.h \
    disassociateproductfromportfoliorequest_p.h \
    disassociateproductfromportfolioresponse.h \
    disassociateproductfromportfolioresponse_p.h \
    disassociatetagoptionfromresourcerequest.h \
    disassociatetagoptionfromresourcerequest_p.h \
    disassociatetagoptionfromresourceresponse.h \
    disassociatetagoptionfromresourceresponse_p.h \
    executeprovisionedproductplanrequest.h \
    executeprovisionedproductplanrequest_p.h \
    executeprovisionedproductplanresponse.h \
    executeprovisionedproductplanresponse_p.h \
    listacceptedportfoliosharesrequest.h \
    listacceptedportfoliosharesrequest_p.h \
    listacceptedportfoliosharesresponse.h \
    listacceptedportfoliosharesresponse_p.h \
    listconstraintsforportfoliorequest.h \
    listconstraintsforportfoliorequest_p.h \
    listconstraintsforportfolioresponse.h \
    listconstraintsforportfolioresponse_p.h \
    listlaunchpathsrequest.h \
    listlaunchpathsrequest_p.h \
    listlaunchpathsresponse.h \
    listlaunchpathsresponse_p.h \
    listportfolioaccessrequest.h \
    listportfolioaccessrequest_p.h \
    listportfolioaccessresponse.h \
    listportfolioaccessresponse_p.h \
    listportfoliosforproductrequest.h \
    listportfoliosforproductrequest_p.h \
    listportfoliosforproductresponse.h \
    listportfoliosforproductresponse_p.h \
    listportfoliosrequest.h \
    listportfoliosrequest_p.h \
    listportfoliosresponse.h \
    listportfoliosresponse_p.h \
    listprincipalsforportfoliorequest.h \
    listprincipalsforportfoliorequest_p.h \
    listprincipalsforportfolioresponse.h \
    listprincipalsforportfolioresponse_p.h \
    listprovisionedproductplansrequest.h \
    listprovisionedproductplansrequest_p.h \
    listprovisionedproductplansresponse.h \
    listprovisionedproductplansresponse_p.h \
    listprovisioningartifactsrequest.h \
    listprovisioningartifactsrequest_p.h \
    listprovisioningartifactsresponse.h \
    listprovisioningartifactsresponse_p.h \
    listrecordhistoryrequest.h \
    listrecordhistoryrequest_p.h \
    listrecordhistoryresponse.h \
    listrecordhistoryresponse_p.h \
    listresourcesfortagoptionrequest.h \
    listresourcesfortagoptionrequest_p.h \
    listresourcesfortagoptionresponse.h \
    listresourcesfortagoptionresponse_p.h \
    listtagoptionsrequest.h \
    listtagoptionsrequest_p.h \
    listtagoptionsresponse.h \
    listtagoptionsresponse_p.h \
    provisionproductrequest.h \
    provisionproductrequest_p.h \
    provisionproductresponse.h \
    provisionproductresponse_p.h \
    rejectportfoliosharerequest.h \
    rejectportfoliosharerequest_p.h \
    rejectportfolioshareresponse.h \
    rejectportfolioshareresponse_p.h \
    scanprovisionedproductsrequest.h \
    scanprovisionedproductsrequest_p.h \
    scanprovisionedproductsresponse.h \
    scanprovisionedproductsresponse_p.h \
    searchproductsasadminrequest.h \
    searchproductsasadminrequest_p.h \
    searchproductsasadminresponse.h \
    searchproductsasadminresponse_p.h \
    searchproductsrequest.h \
    searchproductsrequest_p.h \
    searchproductsresponse.h \
    searchproductsresponse_p.h \
    searchprovisionedproductsrequest.h \
    searchprovisionedproductsrequest_p.h \
    searchprovisionedproductsresponse.h \
    searchprovisionedproductsresponse_p.h \
    servicecatalogclient.h \
    servicecatalogclient_p.h \
    servicecatalogrequest.h \
    servicecatalogrequest_p.h \
    servicecatalogresponse.h \
    servicecatalogresponse_p.h \
    terminateprovisionedproductrequest.h \
    terminateprovisionedproductrequest_p.h \
    terminateprovisionedproductresponse.h \
    terminateprovisionedproductresponse_p.h \
    updateconstraintrequest.h \
    updateconstraintrequest_p.h \
    updateconstraintresponse.h \
    updateconstraintresponse_p.h \
    updateportfoliorequest.h \
    updateportfoliorequest_p.h \
    updateportfolioresponse.h \
    updateportfolioresponse_p.h \
    updateproductrequest.h \
    updateproductrequest_p.h \
    updateproductresponse.h \
    updateproductresponse_p.h \
    updateprovisionedproductrequest.h \
    updateprovisionedproductrequest_p.h \
    updateprovisionedproductresponse.h \
    updateprovisionedproductresponse_p.h \
    updateprovisioningartifactrequest.h \
    updateprovisioningartifactrequest_p.h \
    updateprovisioningartifactresponse.h \
    updateprovisioningartifactresponse_p.h \
    updatetagoptionrequest.h \
    updatetagoptionrequest_p.h \
    updatetagoptionresponse.h \
    updatetagoptionresponse_p.h \

SOURCES += \
    acceptportfoliosharerequest.cpp \
    acceptportfolioshareresponse.cpp \
    associateprincipalwithportfoliorequest.cpp \
    associateprincipalwithportfolioresponse.cpp \
    associateproductwithportfoliorequest.cpp \
    associateproductwithportfolioresponse.cpp \
    associatetagoptionwithresourcerequest.cpp \
    associatetagoptionwithresourceresponse.cpp \
    copyproductrequest.cpp \
    copyproductresponse.cpp \
    createconstraintrequest.cpp \
    createconstraintresponse.cpp \
    createportfoliorequest.cpp \
    createportfolioresponse.cpp \
    createportfoliosharerequest.cpp \
    createportfolioshareresponse.cpp \
    createproductrequest.cpp \
    createproductresponse.cpp \
    createprovisionedproductplanrequest.cpp \
    createprovisionedproductplanresponse.cpp \
    createprovisioningartifactrequest.cpp \
    createprovisioningartifactresponse.cpp \
    createtagoptionrequest.cpp \
    createtagoptionresponse.cpp \
    deleteconstraintrequest.cpp \
    deleteconstraintresponse.cpp \
    deleteportfoliorequest.cpp \
    deleteportfolioresponse.cpp \
    deleteportfoliosharerequest.cpp \
    deleteportfolioshareresponse.cpp \
    deleteproductrequest.cpp \
    deleteproductresponse.cpp \
    deleteprovisionedproductplanrequest.cpp \
    deleteprovisionedproductplanresponse.cpp \
    deleteprovisioningartifactrequest.cpp \
    deleteprovisioningartifactresponse.cpp \
    deletetagoptionrequest.cpp \
    deletetagoptionresponse.cpp \
    describeconstraintrequest.cpp \
    describeconstraintresponse.cpp \
    describecopyproductstatusrequest.cpp \
    describecopyproductstatusresponse.cpp \
    describeportfoliorequest.cpp \
    describeportfolioresponse.cpp \
    describeproductasadminrequest.cpp \
    describeproductasadminresponse.cpp \
    describeproductrequest.cpp \
    describeproductresponse.cpp \
    describeproductviewrequest.cpp \
    describeproductviewresponse.cpp \
    describeprovisionedproductplanrequest.cpp \
    describeprovisionedproductplanresponse.cpp \
    describeprovisionedproductrequest.cpp \
    describeprovisionedproductresponse.cpp \
    describeprovisioningartifactrequest.cpp \
    describeprovisioningartifactresponse.cpp \
    describeprovisioningparametersrequest.cpp \
    describeprovisioningparametersresponse.cpp \
    describerecordrequest.cpp \
    describerecordresponse.cpp \
    describetagoptionrequest.cpp \
    describetagoptionresponse.cpp \
    disassociateprincipalfromportfoliorequest.cpp \
    disassociateprincipalfromportfolioresponse.cpp \
    disassociateproductfromportfoliorequest.cpp \
    disassociateproductfromportfolioresponse.cpp \
    disassociatetagoptionfromresourcerequest.cpp \
    disassociatetagoptionfromresourceresponse.cpp \
    executeprovisionedproductplanrequest.cpp \
    executeprovisionedproductplanresponse.cpp \
    listacceptedportfoliosharesrequest.cpp \
    listacceptedportfoliosharesresponse.cpp \
    listconstraintsforportfoliorequest.cpp \
    listconstraintsforportfolioresponse.cpp \
    listlaunchpathsrequest.cpp \
    listlaunchpathsresponse.cpp \
    listportfolioaccessrequest.cpp \
    listportfolioaccessresponse.cpp \
    listportfoliosforproductrequest.cpp \
    listportfoliosforproductresponse.cpp \
    listportfoliosrequest.cpp \
    listportfoliosresponse.cpp \
    listprincipalsforportfoliorequest.cpp \
    listprincipalsforportfolioresponse.cpp \
    listprovisionedproductplansrequest.cpp \
    listprovisionedproductplansresponse.cpp \
    listprovisioningartifactsrequest.cpp \
    listprovisioningartifactsresponse.cpp \
    listrecordhistoryrequest.cpp \
    listrecordhistoryresponse.cpp \
    listresourcesfortagoptionrequest.cpp \
    listresourcesfortagoptionresponse.cpp \
    listtagoptionsrequest.cpp \
    listtagoptionsresponse.cpp \
    provisionproductrequest.cpp \
    provisionproductresponse.cpp \
    rejectportfoliosharerequest.cpp \
    rejectportfolioshareresponse.cpp \
    scanprovisionedproductsrequest.cpp \
    scanprovisionedproductsresponse.cpp \
    searchproductsasadminrequest.cpp \
    searchproductsasadminresponse.cpp \
    searchproductsrequest.cpp \
    searchproductsresponse.cpp \
    searchprovisionedproductsrequest.cpp \
    searchprovisionedproductsresponse.cpp \
    servicecatalogclient.cpp \
    servicecatalogrequest.cpp \
    servicecatalogresponse.cpp \
    terminateprovisionedproductrequest.cpp \
    terminateprovisionedproductresponse.cpp \
    updateconstraintrequest.cpp \
    updateconstraintresponse.cpp \
    updateportfoliorequest.cpp \
    updateportfolioresponse.cpp \
    updateproductrequest.cpp \
    updateproductresponse.cpp \
    updateprovisionedproductrequest.cpp \
    updateprovisionedproductresponse.cpp \
    updateprovisioningartifactrequest.cpp \
    updateprovisioningartifactresponse.cpp \
    updatetagoptionrequest.cpp \
    updatetagoptionresponse.cpp \

win32:CONFIG += skip_target_version_ext
