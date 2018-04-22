include(../../common.pri)

TARGET = QtAwsIam
TEMPLATE = lib
QT -= gui
QT += network
DEFINES += QTAWS_LIBRARY
DEFINES += QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII

INCLUDEPATH = $$TOPDIR/src

HEADERS += \
    addclientidtoopenidconnectproviderrequest.h \
    addclientidtoopenidconnectproviderrequest_p.h \
    addclientidtoopenidconnectproviderresponse.h \
    addclientidtoopenidconnectproviderresponse_p.h \
    addroletoinstanceprofilerequest.h \
    addroletoinstanceprofilerequest_p.h \
    addroletoinstanceprofileresponse.h \
    addroletoinstanceprofileresponse_p.h \
    addusertogrouprequest.h \
    addusertogrouprequest_p.h \
    addusertogroupresponse.h \
    addusertogroupresponse_p.h \
    attachgrouppolicyrequest.h \
    attachgrouppolicyrequest_p.h \
    attachgrouppolicyresponse.h \
    attachgrouppolicyresponse_p.h \
    attachrolepolicyrequest.h \
    attachrolepolicyrequest_p.h \
    attachrolepolicyresponse.h \
    attachrolepolicyresponse_p.h \
    attachuserpolicyrequest.h \
    attachuserpolicyrequest_p.h \
    attachuserpolicyresponse.h \
    attachuserpolicyresponse_p.h \
    changepasswordrequest.h \
    changepasswordrequest_p.h \
    changepasswordresponse.h \
    changepasswordresponse_p.h \
    createaccesskeyrequest.h \
    createaccesskeyrequest_p.h \
    createaccesskeyresponse.h \
    createaccesskeyresponse_p.h \
    createaccountaliasrequest.h \
    createaccountaliasrequest_p.h \
    createaccountaliasresponse.h \
    createaccountaliasresponse_p.h \
    creategrouprequest.h \
    creategrouprequest_p.h \
    creategroupresponse.h \
    creategroupresponse_p.h \
    createinstanceprofilerequest.h \
    createinstanceprofilerequest_p.h \
    createinstanceprofileresponse.h \
    createinstanceprofileresponse_p.h \
    createloginprofilerequest.h \
    createloginprofilerequest_p.h \
    createloginprofileresponse.h \
    createloginprofileresponse_p.h \
    createopenidconnectproviderrequest.h \
    createopenidconnectproviderrequest_p.h \
    createopenidconnectproviderresponse.h \
    createopenidconnectproviderresponse_p.h \
    createpolicyrequest.h \
    createpolicyrequest_p.h \
    createpolicyresponse.h \
    createpolicyresponse_p.h \
    createpolicyversionrequest.h \
    createpolicyversionrequest_p.h \
    createpolicyversionresponse.h \
    createpolicyversionresponse_p.h \
    createrolerequest.h \
    createrolerequest_p.h \
    createroleresponse.h \
    createroleresponse_p.h \
    createsamlproviderrequest.h \
    createsamlproviderrequest_p.h \
    createsamlproviderresponse.h \
    createsamlproviderresponse_p.h \
    createservicelinkedrolerequest.h \
    createservicelinkedrolerequest_p.h \
    createservicelinkedroleresponse.h \
    createservicelinkedroleresponse_p.h \
    createservicespecificcredentialrequest.h \
    createservicespecificcredentialrequest_p.h \
    createservicespecificcredentialresponse.h \
    createservicespecificcredentialresponse_p.h \
    createuserrequest.h \
    createuserrequest_p.h \
    createuserresponse.h \
    createuserresponse_p.h \
    createvirtualmfadevicerequest.h \
    createvirtualmfadevicerequest_p.h \
    createvirtualmfadeviceresponse.h \
    createvirtualmfadeviceresponse_p.h \
    deactivatemfadevicerequest.h \
    deactivatemfadevicerequest_p.h \
    deactivatemfadeviceresponse.h \
    deactivatemfadeviceresponse_p.h \
    deleteaccesskeyrequest.h \
    deleteaccesskeyrequest_p.h \
    deleteaccesskeyresponse.h \
    deleteaccesskeyresponse_p.h \
    deleteaccountaliasrequest.h \
    deleteaccountaliasrequest_p.h \
    deleteaccountaliasresponse.h \
    deleteaccountaliasresponse_p.h \
    deleteaccountpasswordpolicyresponse.h \
    deleteaccountpasswordpolicyresponse_p.h \
    deletegrouppolicyrequest.h \
    deletegrouppolicyrequest_p.h \
    deletegrouppolicyresponse.h \
    deletegrouppolicyresponse_p.h \
    deletegrouprequest.h \
    deletegrouprequest_p.h \
    deletegroupresponse.h \
    deletegroupresponse_p.h \
    deleteinstanceprofilerequest.h \
    deleteinstanceprofilerequest_p.h \
    deleteinstanceprofileresponse.h \
    deleteinstanceprofileresponse_p.h \
    deleteloginprofilerequest.h \
    deleteloginprofilerequest_p.h \
    deleteloginprofileresponse.h \
    deleteloginprofileresponse_p.h \
    deleteopenidconnectproviderrequest.h \
    deleteopenidconnectproviderrequest_p.h \
    deleteopenidconnectproviderresponse.h \
    deleteopenidconnectproviderresponse_p.h \
    deletepolicyrequest.h \
    deletepolicyrequest_p.h \
    deletepolicyresponse.h \
    deletepolicyresponse_p.h \
    deletepolicyversionrequest.h \
    deletepolicyversionrequest_p.h \
    deletepolicyversionresponse.h \
    deletepolicyversionresponse_p.h \
    deleterolepolicyrequest.h \
    deleterolepolicyrequest_p.h \
    deleterolepolicyresponse.h \
    deleterolepolicyresponse_p.h \
    deleterolerequest.h \
    deleterolerequest_p.h \
    deleteroleresponse.h \
    deleteroleresponse_p.h \
    deletesamlproviderrequest.h \
    deletesamlproviderrequest_p.h \
    deletesamlproviderresponse.h \
    deletesamlproviderresponse_p.h \
    deleteservercertificaterequest.h \
    deleteservercertificaterequest_p.h \
    deleteservercertificateresponse.h \
    deleteservercertificateresponse_p.h \
    deleteservicelinkedrolerequest.h \
    deleteservicelinkedrolerequest_p.h \
    deleteservicelinkedroleresponse.h \
    deleteservicelinkedroleresponse_p.h \
    deleteservicespecificcredentialrequest.h \
    deleteservicespecificcredentialrequest_p.h \
    deleteservicespecificcredentialresponse.h \
    deleteservicespecificcredentialresponse_p.h \
    deletesigningcertificaterequest.h \
    deletesigningcertificaterequest_p.h \
    deletesigningcertificateresponse.h \
    deletesigningcertificateresponse_p.h \
    deletesshpublickeyrequest.h \
    deletesshpublickeyrequest_p.h \
    deletesshpublickeyresponse.h \
    deletesshpublickeyresponse_p.h \
    deleteuserpolicyrequest.h \
    deleteuserpolicyrequest_p.h \
    deleteuserpolicyresponse.h \
    deleteuserpolicyresponse_p.h \
    deleteuserrequest.h \
    deleteuserrequest_p.h \
    deleteuserresponse.h \
    deleteuserresponse_p.h \
    deletevirtualmfadevicerequest.h \
    deletevirtualmfadevicerequest_p.h \
    deletevirtualmfadeviceresponse.h \
    deletevirtualmfadeviceresponse_p.h \
    detachgrouppolicyrequest.h \
    detachgrouppolicyrequest_p.h \
    detachgrouppolicyresponse.h \
    detachgrouppolicyresponse_p.h \
    detachrolepolicyrequest.h \
    detachrolepolicyrequest_p.h \
    detachrolepolicyresponse.h \
    detachrolepolicyresponse_p.h \
    detachuserpolicyrequest.h \
    detachuserpolicyrequest_p.h \
    detachuserpolicyresponse.h \
    detachuserpolicyresponse_p.h \
    enablemfadevicerequest.h \
    enablemfadevicerequest_p.h \
    enablemfadeviceresponse.h \
    enablemfadeviceresponse_p.h \
    generatecredentialreportresponse.h \
    generatecredentialreportresponse_p.h \
    getaccesskeylastusedrequest.h \
    getaccesskeylastusedrequest_p.h \
    getaccesskeylastusedresponse.h \
    getaccesskeylastusedresponse_p.h \
    getaccountauthorizationdetailsrequest.h \
    getaccountauthorizationdetailsrequest_p.h \
    getaccountauthorizationdetailsresponse.h \
    getaccountauthorizationdetailsresponse_p.h \
    getaccountpasswordpolicyresponse.h \
    getaccountpasswordpolicyresponse_p.h \
    getaccountsummaryresponse.h \
    getaccountsummaryresponse_p.h \
    getcontextkeysforcustompolicyrequest.h \
    getcontextkeysforcustompolicyrequest_p.h \
    getcontextkeysforcustompolicyresponse.h \
    getcontextkeysforcustompolicyresponse_p.h \
    getcontextkeysforprincipalpolicyrequest.h \
    getcontextkeysforprincipalpolicyrequest_p.h \
    getcontextkeysforprincipalpolicyresponse.h \
    getcontextkeysforprincipalpolicyresponse_p.h \
    getcredentialreportresponse.h \
    getcredentialreportresponse_p.h \
    getgrouppolicyrequest.h \
    getgrouppolicyrequest_p.h \
    getgrouppolicyresponse.h \
    getgrouppolicyresponse_p.h \
    getgrouprequest.h \
    getgrouprequest_p.h \
    getgroupresponse.h \
    getgroupresponse_p.h \
    getinstanceprofilerequest.h \
    getinstanceprofilerequest_p.h \
    getinstanceprofileresponse.h \
    getinstanceprofileresponse_p.h \
    getloginprofilerequest.h \
    getloginprofilerequest_p.h \
    getloginprofileresponse.h \
    getloginprofileresponse_p.h \
    getopenidconnectproviderrequest.h \
    getopenidconnectproviderrequest_p.h \
    getopenidconnectproviderresponse.h \
    getopenidconnectproviderresponse_p.h \
    getpolicyrequest.h \
    getpolicyrequest_p.h \
    getpolicyresponse.h \
    getpolicyresponse_p.h \
    getpolicyversionrequest.h \
    getpolicyversionrequest_p.h \
    getpolicyversionresponse.h \
    getpolicyversionresponse_p.h \
    getrolepolicyrequest.h \
    getrolepolicyrequest_p.h \
    getrolepolicyresponse.h \
    getrolepolicyresponse_p.h \
    getrolerequest.h \
    getrolerequest_p.h \
    getroleresponse.h \
    getroleresponse_p.h \
    getsamlproviderrequest.h \
    getsamlproviderrequest_p.h \
    getsamlproviderresponse.h \
    getsamlproviderresponse_p.h \
    getservercertificaterequest.h \
    getservercertificaterequest_p.h \
    getservercertificateresponse.h \
    getservercertificateresponse_p.h \
    getservicelinkedroledeletionstatusrequest.h \
    getservicelinkedroledeletionstatusrequest_p.h \
    getservicelinkedroledeletionstatusresponse.h \
    getservicelinkedroledeletionstatusresponse_p.h \
    getsshpublickeyrequest.h \
    getsshpublickeyrequest_p.h \
    getsshpublickeyresponse.h \
    getsshpublickeyresponse_p.h \
    getuserpolicyrequest.h \
    getuserpolicyrequest_p.h \
    getuserpolicyresponse.h \
    getuserpolicyresponse_p.h \
    getuserrequest.h \
    getuserrequest_p.h \
    getuserresponse.h \
    getuserresponse_p.h \
    iamclient.h \
    iamclient_p.h \
    iamrequest.h \
    iamrequest_p.h \
    iamresponse.h \
    iamresponse_p.h \
    listaccesskeysrequest.h \
    listaccesskeysrequest_p.h \
    listaccesskeysresponse.h \
    listaccesskeysresponse_p.h \
    listaccountaliasesrequest.h \
    listaccountaliasesrequest_p.h \
    listaccountaliasesresponse.h \
    listaccountaliasesresponse_p.h \
    listattachedgrouppoliciesrequest.h \
    listattachedgrouppoliciesrequest_p.h \
    listattachedgrouppoliciesresponse.h \
    listattachedgrouppoliciesresponse_p.h \
    listattachedrolepoliciesrequest.h \
    listattachedrolepoliciesrequest_p.h \
    listattachedrolepoliciesresponse.h \
    listattachedrolepoliciesresponse_p.h \
    listattacheduserpoliciesrequest.h \
    listattacheduserpoliciesrequest_p.h \
    listattacheduserpoliciesresponse.h \
    listattacheduserpoliciesresponse_p.h \
    listentitiesforpolicyrequest.h \
    listentitiesforpolicyrequest_p.h \
    listentitiesforpolicyresponse.h \
    listentitiesforpolicyresponse_p.h \
    listgrouppoliciesrequest.h \
    listgrouppoliciesrequest_p.h \
    listgrouppoliciesresponse.h \
    listgrouppoliciesresponse_p.h \
    listgroupsforuserrequest.h \
    listgroupsforuserrequest_p.h \
    listgroupsforuserresponse.h \
    listgroupsforuserresponse_p.h \
    listgroupsrequest.h \
    listgroupsrequest_p.h \
    listgroupsresponse.h \
    listgroupsresponse_p.h \
    listinstanceprofilesforrolerequest.h \
    listinstanceprofilesforrolerequest_p.h \
    listinstanceprofilesforroleresponse.h \
    listinstanceprofilesforroleresponse_p.h \
    listinstanceprofilesrequest.h \
    listinstanceprofilesrequest_p.h \
    listinstanceprofilesresponse.h \
    listinstanceprofilesresponse_p.h \
    listmfadevicesrequest.h \
    listmfadevicesrequest_p.h \
    listmfadevicesresponse.h \
    listmfadevicesresponse_p.h \
    listopenidconnectprovidersrequest.h \
    listopenidconnectprovidersrequest_p.h \
    listopenidconnectprovidersresponse.h \
    listopenidconnectprovidersresponse_p.h \
    listpoliciesrequest.h \
    listpoliciesrequest_p.h \
    listpoliciesresponse.h \
    listpoliciesresponse_p.h \
    listpolicyversionsrequest.h \
    listpolicyversionsrequest_p.h \
    listpolicyversionsresponse.h \
    listpolicyversionsresponse_p.h \
    listrolepoliciesrequest.h \
    listrolepoliciesrequest_p.h \
    listrolepoliciesresponse.h \
    listrolepoliciesresponse_p.h \
    listrolesrequest.h \
    listrolesrequest_p.h \
    listrolesresponse.h \
    listrolesresponse_p.h \
    listsamlprovidersrequest.h \
    listsamlprovidersrequest_p.h \
    listsamlprovidersresponse.h \
    listsamlprovidersresponse_p.h \
    listservercertificatesrequest.h \
    listservercertificatesrequest_p.h \
    listservercertificatesresponse.h \
    listservercertificatesresponse_p.h \
    listservicespecificcredentialsrequest.h \
    listservicespecificcredentialsrequest_p.h \
    listservicespecificcredentialsresponse.h \
    listservicespecificcredentialsresponse_p.h \
    listsigningcertificatesrequest.h \
    listsigningcertificatesrequest_p.h \
    listsigningcertificatesresponse.h \
    listsigningcertificatesresponse_p.h \
    listsshpublickeysrequest.h \
    listsshpublickeysrequest_p.h \
    listsshpublickeysresponse.h \
    listsshpublickeysresponse_p.h \
    listuserpoliciesrequest.h \
    listuserpoliciesrequest_p.h \
    listuserpoliciesresponse.h \
    listuserpoliciesresponse_p.h \
    listusersrequest.h \
    listusersrequest_p.h \
    listusersresponse.h \
    listusersresponse_p.h \
    listvirtualmfadevicesrequest.h \
    listvirtualmfadevicesrequest_p.h \
    listvirtualmfadevicesresponse.h \
    listvirtualmfadevicesresponse_p.h \
    putgrouppolicyrequest.h \
    putgrouppolicyrequest_p.h \
    putgrouppolicyresponse.h \
    putgrouppolicyresponse_p.h \
    putrolepolicyrequest.h \
    putrolepolicyrequest_p.h \
    putrolepolicyresponse.h \
    putrolepolicyresponse_p.h \
    putuserpolicyrequest.h \
    putuserpolicyrequest_p.h \
    putuserpolicyresponse.h \
    putuserpolicyresponse_p.h \
    removeclientidfromopenidconnectproviderrequest.h \
    removeclientidfromopenidconnectproviderrequest_p.h \
    removeclientidfromopenidconnectproviderresponse.h \
    removeclientidfromopenidconnectproviderresponse_p.h \
    removerolefrominstanceprofilerequest.h \
    removerolefrominstanceprofilerequest_p.h \
    removerolefrominstanceprofileresponse.h \
    removerolefrominstanceprofileresponse_p.h \
    removeuserfromgrouprequest.h \
    removeuserfromgrouprequest_p.h \
    removeuserfromgroupresponse.h \
    removeuserfromgroupresponse_p.h \
    resetservicespecificcredentialrequest.h \
    resetservicespecificcredentialrequest_p.h \
    resetservicespecificcredentialresponse.h \
    resetservicespecificcredentialresponse_p.h \
    resyncmfadevicerequest.h \
    resyncmfadevicerequest_p.h \
    resyncmfadeviceresponse.h \
    resyncmfadeviceresponse_p.h \
    setdefaultpolicyversionrequest.h \
    setdefaultpolicyversionrequest_p.h \
    setdefaultpolicyversionresponse.h \
    setdefaultpolicyversionresponse_p.h \
    simulatecustompolicyrequest.h \
    simulatecustompolicyrequest_p.h \
    simulatecustompolicyresponse.h \
    simulatecustompolicyresponse_p.h \
    simulateprincipalpolicyrequest.h \
    simulateprincipalpolicyrequest_p.h \
    simulateprincipalpolicyresponse.h \
    simulateprincipalpolicyresponse_p.h \
    updateaccesskeyrequest.h \
    updateaccesskeyrequest_p.h \
    updateaccesskeyresponse.h \
    updateaccesskeyresponse_p.h \
    updateaccountpasswordpolicyrequest.h \
    updateaccountpasswordpolicyrequest_p.h \
    updateaccountpasswordpolicyresponse.h \
    updateaccountpasswordpolicyresponse_p.h \
    updateassumerolepolicyrequest.h \
    updateassumerolepolicyrequest_p.h \
    updateassumerolepolicyresponse.h \
    updateassumerolepolicyresponse_p.h \
    updategrouprequest.h \
    updategrouprequest_p.h \
    updategroupresponse.h \
    updategroupresponse_p.h \
    updateloginprofilerequest.h \
    updateloginprofilerequest_p.h \
    updateloginprofileresponse.h \
    updateloginprofileresponse_p.h \
    updateopenidconnectproviderthumbprintrequest.h \
    updateopenidconnectproviderthumbprintrequest_p.h \
    updateopenidconnectproviderthumbprintresponse.h \
    updateopenidconnectproviderthumbprintresponse_p.h \
    updateroledescriptionrequest.h \
    updateroledescriptionrequest_p.h \
    updateroledescriptionresponse.h \
    updateroledescriptionresponse_p.h \
    updaterolerequest.h \
    updaterolerequest_p.h \
    updateroleresponse.h \
    updateroleresponse_p.h \
    updatesamlproviderrequest.h \
    updatesamlproviderrequest_p.h \
    updatesamlproviderresponse.h \
    updatesamlproviderresponse_p.h \
    updateservercertificaterequest.h \
    updateservercertificaterequest_p.h \
    updateservercertificateresponse.h \
    updateservercertificateresponse_p.h \
    updateservicespecificcredentialrequest.h \
    updateservicespecificcredentialrequest_p.h \
    updateservicespecificcredentialresponse.h \
    updateservicespecificcredentialresponse_p.h \
    updatesigningcertificaterequest.h \
    updatesigningcertificaterequest_p.h \
    updatesigningcertificateresponse.h \
    updatesigningcertificateresponse_p.h \
    updatesshpublickeyrequest.h \
    updatesshpublickeyrequest_p.h \
    updatesshpublickeyresponse.h \
    updatesshpublickeyresponse_p.h \
    updateuserrequest.h \
    updateuserrequest_p.h \
    updateuserresponse.h \
    updateuserresponse_p.h \
    uploadservercertificaterequest.h \
    uploadservercertificaterequest_p.h \
    uploadservercertificateresponse.h \
    uploadservercertificateresponse_p.h \
    uploadsigningcertificaterequest.h \
    uploadsigningcertificaterequest_p.h \
    uploadsigningcertificateresponse.h \
    uploadsigningcertificateresponse_p.h \
    uploadsshpublickeyrequest.h \
    uploadsshpublickeyrequest_p.h \
    uploadsshpublickeyresponse.h \
    uploadsshpublickeyresponse_p.h \

SOURCES += \
    addclientidtoopenidconnectproviderrequest.cpp \
    addclientidtoopenidconnectproviderresponse.cpp \
    addroletoinstanceprofilerequest.cpp \
    addroletoinstanceprofileresponse.cpp \
    addusertogrouprequest.cpp \
    addusertogroupresponse.cpp \
    attachgrouppolicyrequest.cpp \
    attachgrouppolicyresponse.cpp \
    attachrolepolicyrequest.cpp \
    attachrolepolicyresponse.cpp \
    attachuserpolicyrequest.cpp \
    attachuserpolicyresponse.cpp \
    changepasswordrequest.cpp \
    changepasswordresponse.cpp \
    createaccesskeyrequest.cpp \
    createaccesskeyresponse.cpp \
    createaccountaliasrequest.cpp \
    createaccountaliasresponse.cpp \
    creategrouprequest.cpp \
    creategroupresponse.cpp \
    createinstanceprofilerequest.cpp \
    createinstanceprofileresponse.cpp \
    createloginprofilerequest.cpp \
    createloginprofileresponse.cpp \
    createopenidconnectproviderrequest.cpp \
    createopenidconnectproviderresponse.cpp \
    createpolicyrequest.cpp \
    createpolicyresponse.cpp \
    createpolicyversionrequest.cpp \
    createpolicyversionresponse.cpp \
    createrolerequest.cpp \
    createroleresponse.cpp \
    createsamlproviderrequest.cpp \
    createsamlproviderresponse.cpp \
    createservicelinkedrolerequest.cpp \
    createservicelinkedroleresponse.cpp \
    createservicespecificcredentialrequest.cpp \
    createservicespecificcredentialresponse.cpp \
    createuserrequest.cpp \
    createuserresponse.cpp \
    createvirtualmfadevicerequest.cpp \
    createvirtualmfadeviceresponse.cpp \
    deactivatemfadevicerequest.cpp \
    deactivatemfadeviceresponse.cpp \
    deleteaccesskeyrequest.cpp \
    deleteaccesskeyresponse.cpp \
    deleteaccountaliasrequest.cpp \
    deleteaccountaliasresponse.cpp \
    deleteaccountpasswordpolicyresponse.cpp \
    deletegrouppolicyrequest.cpp \
    deletegrouppolicyresponse.cpp \
    deletegrouprequest.cpp \
    deletegroupresponse.cpp \
    deleteinstanceprofilerequest.cpp \
    deleteinstanceprofileresponse.cpp \
    deleteloginprofilerequest.cpp \
    deleteloginprofileresponse.cpp \
    deleteopenidconnectproviderrequest.cpp \
    deleteopenidconnectproviderresponse.cpp \
    deletepolicyrequest.cpp \
    deletepolicyresponse.cpp \
    deletepolicyversionrequest.cpp \
    deletepolicyversionresponse.cpp \
    deleterolepolicyrequest.cpp \
    deleterolepolicyresponse.cpp \
    deleterolerequest.cpp \
    deleteroleresponse.cpp \
    deletesamlproviderrequest.cpp \
    deletesamlproviderresponse.cpp \
    deleteservercertificaterequest.cpp \
    deleteservercertificateresponse.cpp \
    deleteservicelinkedrolerequest.cpp \
    deleteservicelinkedroleresponse.cpp \
    deleteservicespecificcredentialrequest.cpp \
    deleteservicespecificcredentialresponse.cpp \
    deletesigningcertificaterequest.cpp \
    deletesigningcertificateresponse.cpp \
    deletesshpublickeyrequest.cpp \
    deletesshpublickeyresponse.cpp \
    deleteuserpolicyrequest.cpp \
    deleteuserpolicyresponse.cpp \
    deleteuserrequest.cpp \
    deleteuserresponse.cpp \
    deletevirtualmfadevicerequest.cpp \
    deletevirtualmfadeviceresponse.cpp \
    detachgrouppolicyrequest.cpp \
    detachgrouppolicyresponse.cpp \
    detachrolepolicyrequest.cpp \
    detachrolepolicyresponse.cpp \
    detachuserpolicyrequest.cpp \
    detachuserpolicyresponse.cpp \
    enablemfadevicerequest.cpp \
    enablemfadeviceresponse.cpp \
    generatecredentialreportresponse.cpp \
    getaccesskeylastusedrequest.cpp \
    getaccesskeylastusedresponse.cpp \
    getaccountauthorizationdetailsrequest.cpp \
    getaccountauthorizationdetailsresponse.cpp \
    getaccountpasswordpolicyresponse.cpp \
    getaccountsummaryresponse.cpp \
    getcontextkeysforcustompolicyrequest.cpp \
    getcontextkeysforcustompolicyresponse.cpp \
    getcontextkeysforprincipalpolicyrequest.cpp \
    getcontextkeysforprincipalpolicyresponse.cpp \
    getcredentialreportresponse.cpp \
    getgrouppolicyrequest.cpp \
    getgrouppolicyresponse.cpp \
    getgrouprequest.cpp \
    getgroupresponse.cpp \
    getinstanceprofilerequest.cpp \
    getinstanceprofileresponse.cpp \
    getloginprofilerequest.cpp \
    getloginprofileresponse.cpp \
    getopenidconnectproviderrequest.cpp \
    getopenidconnectproviderresponse.cpp \
    getpolicyrequest.cpp \
    getpolicyresponse.cpp \
    getpolicyversionrequest.cpp \
    getpolicyversionresponse.cpp \
    getrolepolicyrequest.cpp \
    getrolepolicyresponse.cpp \
    getrolerequest.cpp \
    getroleresponse.cpp \
    getsamlproviderrequest.cpp \
    getsamlproviderresponse.cpp \
    getservercertificaterequest.cpp \
    getservercertificateresponse.cpp \
    getservicelinkedroledeletionstatusrequest.cpp \
    getservicelinkedroledeletionstatusresponse.cpp \
    getsshpublickeyrequest.cpp \
    getsshpublickeyresponse.cpp \
    getuserpolicyrequest.cpp \
    getuserpolicyresponse.cpp \
    getuserrequest.cpp \
    getuserresponse.cpp \
    iamclient.cpp \
    iamrequest.cpp \
    iamresponse.cpp \
    listaccesskeysrequest.cpp \
    listaccesskeysresponse.cpp \
    listaccountaliasesrequest.cpp \
    listaccountaliasesresponse.cpp \
    listattachedgrouppoliciesrequest.cpp \
    listattachedgrouppoliciesresponse.cpp \
    listattachedrolepoliciesrequest.cpp \
    listattachedrolepoliciesresponse.cpp \
    listattacheduserpoliciesrequest.cpp \
    listattacheduserpoliciesresponse.cpp \
    listentitiesforpolicyrequest.cpp \
    listentitiesforpolicyresponse.cpp \
    listgrouppoliciesrequest.cpp \
    listgrouppoliciesresponse.cpp \
    listgroupsforuserrequest.cpp \
    listgroupsforuserresponse.cpp \
    listgroupsrequest.cpp \
    listgroupsresponse.cpp \
    listinstanceprofilesforrolerequest.cpp \
    listinstanceprofilesforroleresponse.cpp \
    listinstanceprofilesrequest.cpp \
    listinstanceprofilesresponse.cpp \
    listmfadevicesrequest.cpp \
    listmfadevicesresponse.cpp \
    listopenidconnectprovidersrequest.cpp \
    listopenidconnectprovidersresponse.cpp \
    listpoliciesrequest.cpp \
    listpoliciesresponse.cpp \
    listpolicyversionsrequest.cpp \
    listpolicyversionsresponse.cpp \
    listrolepoliciesrequest.cpp \
    listrolepoliciesresponse.cpp \
    listrolesrequest.cpp \
    listrolesresponse.cpp \
    listsamlprovidersrequest.cpp \
    listsamlprovidersresponse.cpp \
    listservercertificatesrequest.cpp \
    listservercertificatesresponse.cpp \
    listservicespecificcredentialsrequest.cpp \
    listservicespecificcredentialsresponse.cpp \
    listsigningcertificatesrequest.cpp \
    listsigningcertificatesresponse.cpp \
    listsshpublickeysrequest.cpp \
    listsshpublickeysresponse.cpp \
    listuserpoliciesrequest.cpp \
    listuserpoliciesresponse.cpp \
    listusersrequest.cpp \
    listusersresponse.cpp \
    listvirtualmfadevicesrequest.cpp \
    listvirtualmfadevicesresponse.cpp \
    putgrouppolicyrequest.cpp \
    putgrouppolicyresponse.cpp \
    putrolepolicyrequest.cpp \
    putrolepolicyresponse.cpp \
    putuserpolicyrequest.cpp \
    putuserpolicyresponse.cpp \
    removeclientidfromopenidconnectproviderrequest.cpp \
    removeclientidfromopenidconnectproviderresponse.cpp \
    removerolefrominstanceprofilerequest.cpp \
    removerolefrominstanceprofileresponse.cpp \
    removeuserfromgrouprequest.cpp \
    removeuserfromgroupresponse.cpp \
    resetservicespecificcredentialrequest.cpp \
    resetservicespecificcredentialresponse.cpp \
    resyncmfadevicerequest.cpp \
    resyncmfadeviceresponse.cpp \
    setdefaultpolicyversionrequest.cpp \
    setdefaultpolicyversionresponse.cpp \
    simulatecustompolicyrequest.cpp \
    simulatecustompolicyresponse.cpp \
    simulateprincipalpolicyrequest.cpp \
    simulateprincipalpolicyresponse.cpp \
    updateaccesskeyrequest.cpp \
    updateaccesskeyresponse.cpp \
    updateaccountpasswordpolicyrequest.cpp \
    updateaccountpasswordpolicyresponse.cpp \
    updateassumerolepolicyrequest.cpp \
    updateassumerolepolicyresponse.cpp \
    updategrouprequest.cpp \
    updategroupresponse.cpp \
    updateloginprofilerequest.cpp \
    updateloginprofileresponse.cpp \
    updateopenidconnectproviderthumbprintrequest.cpp \
    updateopenidconnectproviderthumbprintresponse.cpp \
    updateroledescriptionrequest.cpp \
    updateroledescriptionresponse.cpp \
    updaterolerequest.cpp \
    updateroleresponse.cpp \
    updatesamlproviderrequest.cpp \
    updatesamlproviderresponse.cpp \
    updateservercertificaterequest.cpp \
    updateservercertificateresponse.cpp \
    updateservicespecificcredentialrequest.cpp \
    updateservicespecificcredentialresponse.cpp \
    updatesigningcertificaterequest.cpp \
    updatesigningcertificateresponse.cpp \
    updatesshpublickeyrequest.cpp \
    updatesshpublickeyresponse.cpp \
    updateuserrequest.cpp \
    updateuserresponse.cpp \
    uploadservercertificaterequest.cpp \
    uploadservercertificateresponse.cpp \
    uploadsigningcertificaterequest.cpp \
    uploadsigningcertificateresponse.cpp \
    uploadsshpublickeyrequest.cpp \
    uploadsshpublickeyresponse.cpp \

win32:CONFIG += skip_target_version_ext
