/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ec2client.h"
#include "ec2client_p.h"

#include "core/awssignaturev4.h"
#include "acceptreservedinstancesexchangequoterequest.h"
#include "acceptreservedinstancesexchangequoteresponse.h"
#include "acceptvpcendpointconnectionsrequest.h"
#include "acceptvpcendpointconnectionsresponse.h"
#include "acceptvpcpeeringconnectionrequest.h"
#include "acceptvpcpeeringconnectionresponse.h"
#include "allocateaddressrequest.h"
#include "allocateaddressresponse.h"
#include "allocatehostsrequest.h"
#include "allocatehostsresponse.h"
#include "assignipv6addressesrequest.h"
#include "assignipv6addressesresponse.h"
#include "assignprivateipaddressesrequest.h"
#include "assignprivateipaddressesresponse.h"
#include "associateaddressrequest.h"
#include "associateaddressresponse.h"
#include "associatedhcpoptionsrequest.h"
#include "associatedhcpoptionsresponse.h"
#include "associateiaminstanceprofilerequest.h"
#include "associateiaminstanceprofileresponse.h"
#include "associateroutetablerequest.h"
#include "associateroutetableresponse.h"
#include "associatesubnetcidrblockrequest.h"
#include "associatesubnetcidrblockresponse.h"
#include "associatevpccidrblockrequest.h"
#include "associatevpccidrblockresponse.h"
#include "attachclassiclinkvpcrequest.h"
#include "attachclassiclinkvpcresponse.h"
#include "attachinternetgatewayrequest.h"
#include "attachinternetgatewayresponse.h"
#include "attachnetworkinterfacerequest.h"
#include "attachnetworkinterfaceresponse.h"
#include "attachvolumerequest.h"
#include "attachvolumeresponse.h"
#include "attachvpngatewayrequest.h"
#include "attachvpngatewayresponse.h"
#include "authorizesecuritygroupegressrequest.h"
#include "authorizesecuritygroupegressresponse.h"
#include "authorizesecuritygroupingressrequest.h"
#include "authorizesecuritygroupingressresponse.h"
#include "bundleinstancerequest.h"
#include "bundleinstanceresponse.h"
#include "cancelbundletaskrequest.h"
#include "cancelbundletaskresponse.h"
#include "cancelconversiontaskrequest.h"
#include "cancelconversiontaskresponse.h"
#include "cancelexporttaskrequest.h"
#include "cancelexporttaskresponse.h"
#include "cancelimporttaskrequest.h"
#include "cancelimporttaskresponse.h"
#include "cancelreservedinstanceslistingrequest.h"
#include "cancelreservedinstanceslistingresponse.h"
#include "cancelspotfleetrequestsrequest.h"
#include "cancelspotfleetrequestsresponse.h"
#include "cancelspotinstancerequestsrequest.h"
#include "cancelspotinstancerequestsresponse.h"
#include "confirmproductinstancerequest.h"
#include "confirmproductinstanceresponse.h"
#include "copyfpgaimagerequest.h"
#include "copyfpgaimageresponse.h"
#include "copyimagerequest.h"
#include "copyimageresponse.h"
#include "copysnapshotrequest.h"
#include "copysnapshotresponse.h"
#include "createcustomergatewayrequest.h"
#include "createcustomergatewayresponse.h"
#include "createdefaultsubnetrequest.h"
#include "createdefaultsubnetresponse.h"
#include "createdefaultvpcrequest.h"
#include "createdefaultvpcresponse.h"
#include "createdhcpoptionsrequest.h"
#include "createdhcpoptionsresponse.h"
#include "createegressonlyinternetgatewayrequest.h"
#include "createegressonlyinternetgatewayresponse.h"
#include "createflowlogsrequest.h"
#include "createflowlogsresponse.h"
#include "createfpgaimagerequest.h"
#include "createfpgaimageresponse.h"
#include "createimagerequest.h"
#include "createimageresponse.h"
#include "createinstanceexporttaskrequest.h"
#include "createinstanceexporttaskresponse.h"
#include "createinternetgatewayrequest.h"
#include "createinternetgatewayresponse.h"
#include "createkeypairrequest.h"
#include "createkeypairresponse.h"
#include "createlaunchtemplaterequest.h"
#include "createlaunchtemplateresponse.h"
#include "createlaunchtemplateversionrequest.h"
#include "createlaunchtemplateversionresponse.h"
#include "createnatgatewayrequest.h"
#include "createnatgatewayresponse.h"
#include "createnetworkaclrequest.h"
#include "createnetworkaclresponse.h"
#include "createnetworkaclentryrequest.h"
#include "createnetworkaclentryresponse.h"
#include "createnetworkinterfacerequest.h"
#include "createnetworkinterfaceresponse.h"
#include "createnetworkinterfacepermissionrequest.h"
#include "createnetworkinterfacepermissionresponse.h"
#include "createplacementgrouprequest.h"
#include "createplacementgroupresponse.h"
#include "createreservedinstanceslistingrequest.h"
#include "createreservedinstanceslistingresponse.h"
#include "createrouterequest.h"
#include "createrouteresponse.h"
#include "createroutetablerequest.h"
#include "createroutetableresponse.h"
#include "createsecuritygrouprequest.h"
#include "createsecuritygroupresponse.h"
#include "createsnapshotrequest.h"
#include "createsnapshotresponse.h"
#include "createspotdatafeedsubscriptionrequest.h"
#include "createspotdatafeedsubscriptionresponse.h"
#include "createsubnetrequest.h"
#include "createsubnetresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "createvolumerequest.h"
#include "createvolumeresponse.h"
#include "createvpcrequest.h"
#include "createvpcresponse.h"
#include "createvpcendpointrequest.h"
#include "createvpcendpointresponse.h"
#include "createvpcendpointconnectionnotificationrequest.h"
#include "createvpcendpointconnectionnotificationresponse.h"
#include "createvpcendpointserviceconfigurationrequest.h"
#include "createvpcendpointserviceconfigurationresponse.h"
#include "createvpcpeeringconnectionrequest.h"
#include "createvpcpeeringconnectionresponse.h"
#include "createvpnconnectionrequest.h"
#include "createvpnconnectionresponse.h"
#include "createvpnconnectionrouterequest.h"
#include "createvpnconnectionrouteresponse.h"
#include "createvpngatewayrequest.h"
#include "createvpngatewayresponse.h"
#include "deletecustomergatewayrequest.h"
#include "deletecustomergatewayresponse.h"
#include "deletedhcpoptionsrequest.h"
#include "deletedhcpoptionsresponse.h"
#include "deleteegressonlyinternetgatewayrequest.h"
#include "deleteegressonlyinternetgatewayresponse.h"
#include "deleteflowlogsrequest.h"
#include "deleteflowlogsresponse.h"
#include "deletefpgaimagerequest.h"
#include "deletefpgaimageresponse.h"
#include "deleteinternetgatewayrequest.h"
#include "deleteinternetgatewayresponse.h"
#include "deletekeypairrequest.h"
#include "deletekeypairresponse.h"
#include "deletelaunchtemplaterequest.h"
#include "deletelaunchtemplateresponse.h"
#include "deletelaunchtemplateversionsrequest.h"
#include "deletelaunchtemplateversionsresponse.h"
#include "deletenatgatewayrequest.h"
#include "deletenatgatewayresponse.h"
#include "deletenetworkaclrequest.h"
#include "deletenetworkaclresponse.h"
#include "deletenetworkaclentryrequest.h"
#include "deletenetworkaclentryresponse.h"
#include "deletenetworkinterfacerequest.h"
#include "deletenetworkinterfaceresponse.h"
#include "deletenetworkinterfacepermissionrequest.h"
#include "deletenetworkinterfacepermissionresponse.h"
#include "deleteplacementgrouprequest.h"
#include "deleteplacementgroupresponse.h"
#include "deleterouterequest.h"
#include "deleterouteresponse.h"
#include "deleteroutetablerequest.h"
#include "deleteroutetableresponse.h"
#include "deletesecuritygrouprequest.h"
#include "deletesecuritygroupresponse.h"
#include "deletesnapshotrequest.h"
#include "deletesnapshotresponse.h"
#include "deletespotdatafeedsubscriptionrequest.h"
#include "deletespotdatafeedsubscriptionresponse.h"
#include "deletesubnetrequest.h"
#include "deletesubnetresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "deletevolumerequest.h"
#include "deletevolumeresponse.h"
#include "deletevpcrequest.h"
#include "deletevpcresponse.h"
#include "deletevpcendpointconnectionnotificationsrequest.h"
#include "deletevpcendpointconnectionnotificationsresponse.h"
#include "deletevpcendpointserviceconfigurationsrequest.h"
#include "deletevpcendpointserviceconfigurationsresponse.h"
#include "deletevpcendpointsrequest.h"
#include "deletevpcendpointsresponse.h"
#include "deletevpcpeeringconnectionrequest.h"
#include "deletevpcpeeringconnectionresponse.h"
#include "deletevpnconnectionrequest.h"
#include "deletevpnconnectionresponse.h"
#include "deletevpnconnectionrouterequest.h"
#include "deletevpnconnectionrouteresponse.h"
#include "deletevpngatewayrequest.h"
#include "deletevpngatewayresponse.h"
#include "deregisterimagerequest.h"
#include "deregisterimageresponse.h"
#include "describeaccountattributesrequest.h"
#include "describeaccountattributesresponse.h"
#include "describeaddressesrequest.h"
#include "describeaddressesresponse.h"
#include "describeaggregateidformatrequest.h"
#include "describeaggregateidformatresponse.h"
#include "describeavailabilityzonesrequest.h"
#include "describeavailabilityzonesresponse.h"
#include "describebundletasksrequest.h"
#include "describebundletasksresponse.h"
#include "describeclassiclinkinstancesrequest.h"
#include "describeclassiclinkinstancesresponse.h"
#include "describeconversiontasksrequest.h"
#include "describeconversiontasksresponse.h"
#include "describecustomergatewaysrequest.h"
#include "describecustomergatewaysresponse.h"
#include "describedhcpoptionsrequest.h"
#include "describedhcpoptionsresponse.h"
#include "describeegressonlyinternetgatewaysrequest.h"
#include "describeegressonlyinternetgatewaysresponse.h"
#include "describeelasticgpusrequest.h"
#include "describeelasticgpusresponse.h"
#include "describeexporttasksrequest.h"
#include "describeexporttasksresponse.h"
#include "describeflowlogsrequest.h"
#include "describeflowlogsresponse.h"
#include "describefpgaimageattributerequest.h"
#include "describefpgaimageattributeresponse.h"
#include "describefpgaimagesrequest.h"
#include "describefpgaimagesresponse.h"
#include "describehostreservationofferingsrequest.h"
#include "describehostreservationofferingsresponse.h"
#include "describehostreservationsrequest.h"
#include "describehostreservationsresponse.h"
#include "describehostsrequest.h"
#include "describehostsresponse.h"
#include "describeiaminstanceprofileassociationsrequest.h"
#include "describeiaminstanceprofileassociationsresponse.h"
#include "describeidformatrequest.h"
#include "describeidformatresponse.h"
#include "describeidentityidformatrequest.h"
#include "describeidentityidformatresponse.h"
#include "describeimageattributerequest.h"
#include "describeimageattributeresponse.h"
#include "describeimagesrequest.h"
#include "describeimagesresponse.h"
#include "describeimportimagetasksrequest.h"
#include "describeimportimagetasksresponse.h"
#include "describeimportsnapshottasksrequest.h"
#include "describeimportsnapshottasksresponse.h"
#include "describeinstanceattributerequest.h"
#include "describeinstanceattributeresponse.h"
#include "describeinstancecreditspecificationsrequest.h"
#include "describeinstancecreditspecificationsresponse.h"
#include "describeinstancestatusrequest.h"
#include "describeinstancestatusresponse.h"
#include "describeinstancesrequest.h"
#include "describeinstancesresponse.h"
#include "describeinternetgatewaysrequest.h"
#include "describeinternetgatewaysresponse.h"
#include "describekeypairsrequest.h"
#include "describekeypairsresponse.h"
#include "describelaunchtemplateversionsrequest.h"
#include "describelaunchtemplateversionsresponse.h"
#include "describelaunchtemplatesrequest.h"
#include "describelaunchtemplatesresponse.h"
#include "describemovingaddressesrequest.h"
#include "describemovingaddressesresponse.h"
#include "describenatgatewaysrequest.h"
#include "describenatgatewaysresponse.h"
#include "describenetworkaclsrequest.h"
#include "describenetworkaclsresponse.h"
#include "describenetworkinterfaceattributerequest.h"
#include "describenetworkinterfaceattributeresponse.h"
#include "describenetworkinterfacepermissionsrequest.h"
#include "describenetworkinterfacepermissionsresponse.h"
#include "describenetworkinterfacesrequest.h"
#include "describenetworkinterfacesresponse.h"
#include "describeplacementgroupsrequest.h"
#include "describeplacementgroupsresponse.h"
#include "describeprefixlistsrequest.h"
#include "describeprefixlistsresponse.h"
#include "describeprincipalidformatrequest.h"
#include "describeprincipalidformatresponse.h"
#include "describeregionsrequest.h"
#include "describeregionsresponse.h"
#include "describereservedinstancesrequest.h"
#include "describereservedinstancesresponse.h"
#include "describereservedinstanceslistingsrequest.h"
#include "describereservedinstanceslistingsresponse.h"
#include "describereservedinstancesmodificationsrequest.h"
#include "describereservedinstancesmodificationsresponse.h"
#include "describereservedinstancesofferingsrequest.h"
#include "describereservedinstancesofferingsresponse.h"
#include "describeroutetablesrequest.h"
#include "describeroutetablesresponse.h"
#include "describescheduledinstanceavailabilityrequest.h"
#include "describescheduledinstanceavailabilityresponse.h"
#include "describescheduledinstancesrequest.h"
#include "describescheduledinstancesresponse.h"
#include "describesecuritygroupreferencesrequest.h"
#include "describesecuritygroupreferencesresponse.h"
#include "describesecuritygroupsrequest.h"
#include "describesecuritygroupsresponse.h"
#include "describesnapshotattributerequest.h"
#include "describesnapshotattributeresponse.h"
#include "describesnapshotsrequest.h"
#include "describesnapshotsresponse.h"
#include "describespotdatafeedsubscriptionrequest.h"
#include "describespotdatafeedsubscriptionresponse.h"
#include "describespotfleetinstancesrequest.h"
#include "describespotfleetinstancesresponse.h"
#include "describespotfleetrequesthistoryrequest.h"
#include "describespotfleetrequesthistoryresponse.h"
#include "describespotfleetrequestsrequest.h"
#include "describespotfleetrequestsresponse.h"
#include "describespotinstancerequestsrequest.h"
#include "describespotinstancerequestsresponse.h"
#include "describespotpricehistoryrequest.h"
#include "describespotpricehistoryresponse.h"
#include "describestalesecuritygroupsrequest.h"
#include "describestalesecuritygroupsresponse.h"
#include "describesubnetsrequest.h"
#include "describesubnetsresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "describevolumeattributerequest.h"
#include "describevolumeattributeresponse.h"
#include "describevolumestatusrequest.h"
#include "describevolumestatusresponse.h"
#include "describevolumesrequest.h"
#include "describevolumesresponse.h"
#include "describevolumesmodificationsrequest.h"
#include "describevolumesmodificationsresponse.h"
#include "describevpcattributerequest.h"
#include "describevpcattributeresponse.h"
#include "describevpcclassiclinkrequest.h"
#include "describevpcclassiclinkresponse.h"
#include "describevpcclassiclinkdnssupportrequest.h"
#include "describevpcclassiclinkdnssupportresponse.h"
#include "describevpcendpointconnectionnotificationsrequest.h"
#include "describevpcendpointconnectionnotificationsresponse.h"
#include "describevpcendpointconnectionsrequest.h"
#include "describevpcendpointconnectionsresponse.h"
#include "describevpcendpointserviceconfigurationsrequest.h"
#include "describevpcendpointserviceconfigurationsresponse.h"
#include "describevpcendpointservicepermissionsrequest.h"
#include "describevpcendpointservicepermissionsresponse.h"
#include "describevpcendpointservicesrequest.h"
#include "describevpcendpointservicesresponse.h"
#include "describevpcendpointsrequest.h"
#include "describevpcendpointsresponse.h"
#include "describevpcpeeringconnectionsrequest.h"
#include "describevpcpeeringconnectionsresponse.h"
#include "describevpcsrequest.h"
#include "describevpcsresponse.h"
#include "describevpnconnectionsrequest.h"
#include "describevpnconnectionsresponse.h"
#include "describevpngatewaysrequest.h"
#include "describevpngatewaysresponse.h"
#include "detachclassiclinkvpcrequest.h"
#include "detachclassiclinkvpcresponse.h"
#include "detachinternetgatewayrequest.h"
#include "detachinternetgatewayresponse.h"
#include "detachnetworkinterfacerequest.h"
#include "detachnetworkinterfaceresponse.h"
#include "detachvolumerequest.h"
#include "detachvolumeresponse.h"
#include "detachvpngatewayrequest.h"
#include "detachvpngatewayresponse.h"
#include "disablevgwroutepropagationrequest.h"
#include "disablevgwroutepropagationresponse.h"
#include "disablevpcclassiclinkrequest.h"
#include "disablevpcclassiclinkresponse.h"
#include "disablevpcclassiclinkdnssupportrequest.h"
#include "disablevpcclassiclinkdnssupportresponse.h"
#include "disassociateaddressrequest.h"
#include "disassociateaddressresponse.h"
#include "disassociateiaminstanceprofilerequest.h"
#include "disassociateiaminstanceprofileresponse.h"
#include "disassociateroutetablerequest.h"
#include "disassociateroutetableresponse.h"
#include "disassociatesubnetcidrblockrequest.h"
#include "disassociatesubnetcidrblockresponse.h"
#include "disassociatevpccidrblockrequest.h"
#include "disassociatevpccidrblockresponse.h"
#include "enablevgwroutepropagationrequest.h"
#include "enablevgwroutepropagationresponse.h"
#include "enablevolumeiorequest.h"
#include "enablevolumeioresponse.h"
#include "enablevpcclassiclinkrequest.h"
#include "enablevpcclassiclinkresponse.h"
#include "enablevpcclassiclinkdnssupportrequest.h"
#include "enablevpcclassiclinkdnssupportresponse.h"
#include "getconsoleoutputrequest.h"
#include "getconsoleoutputresponse.h"
#include "getconsolescreenshotrequest.h"
#include "getconsolescreenshotresponse.h"
#include "gethostreservationpurchasepreviewrequest.h"
#include "gethostreservationpurchasepreviewresponse.h"
#include "getlaunchtemplatedatarequest.h"
#include "getlaunchtemplatedataresponse.h"
#include "getpassworddatarequest.h"
#include "getpassworddataresponse.h"
#include "getreservedinstancesexchangequoterequest.h"
#include "getreservedinstancesexchangequoteresponse.h"
#include "importimagerequest.h"
#include "importimageresponse.h"
#include "importinstancerequest.h"
#include "importinstanceresponse.h"
#include "importkeypairrequest.h"
#include "importkeypairresponse.h"
#include "importsnapshotrequest.h"
#include "importsnapshotresponse.h"
#include "importvolumerequest.h"
#include "importvolumeresponse.h"
#include "modifyfpgaimageattributerequest.h"
#include "modifyfpgaimageattributeresponse.h"
#include "modifyhostsrequest.h"
#include "modifyhostsresponse.h"
#include "modifyidformatrequest.h"
#include "modifyidformatresponse.h"
#include "modifyidentityidformatrequest.h"
#include "modifyidentityidformatresponse.h"
#include "modifyimageattributerequest.h"
#include "modifyimageattributeresponse.h"
#include "modifyinstanceattributerequest.h"
#include "modifyinstanceattributeresponse.h"
#include "modifyinstancecreditspecificationrequest.h"
#include "modifyinstancecreditspecificationresponse.h"
#include "modifyinstanceplacementrequest.h"
#include "modifyinstanceplacementresponse.h"
#include "modifylaunchtemplaterequest.h"
#include "modifylaunchtemplateresponse.h"
#include "modifynetworkinterfaceattributerequest.h"
#include "modifynetworkinterfaceattributeresponse.h"
#include "modifyreservedinstancesrequest.h"
#include "modifyreservedinstancesresponse.h"
#include "modifysnapshotattributerequest.h"
#include "modifysnapshotattributeresponse.h"
#include "modifyspotfleetrequestrequest.h"
#include "modifyspotfleetrequestresponse.h"
#include "modifysubnetattributerequest.h"
#include "modifysubnetattributeresponse.h"
#include "modifyvolumerequest.h"
#include "modifyvolumeresponse.h"
#include "modifyvolumeattributerequest.h"
#include "modifyvolumeattributeresponse.h"
#include "modifyvpcattributerequest.h"
#include "modifyvpcattributeresponse.h"
#include "modifyvpcendpointrequest.h"
#include "modifyvpcendpointresponse.h"
#include "modifyvpcendpointconnectionnotificationrequest.h"
#include "modifyvpcendpointconnectionnotificationresponse.h"
#include "modifyvpcendpointserviceconfigurationrequest.h"
#include "modifyvpcendpointserviceconfigurationresponse.h"
#include "modifyvpcendpointservicepermissionsrequest.h"
#include "modifyvpcendpointservicepermissionsresponse.h"
#include "modifyvpcpeeringconnectionoptionsrequest.h"
#include "modifyvpcpeeringconnectionoptionsresponse.h"
#include "modifyvpctenancyrequest.h"
#include "modifyvpctenancyresponse.h"
#include "monitorinstancesrequest.h"
#include "monitorinstancesresponse.h"
#include "moveaddresstovpcrequest.h"
#include "moveaddresstovpcresponse.h"
#include "purchasehostreservationrequest.h"
#include "purchasehostreservationresponse.h"
#include "purchasereservedinstancesofferingrequest.h"
#include "purchasereservedinstancesofferingresponse.h"
#include "purchasescheduledinstancesrequest.h"
#include "purchasescheduledinstancesresponse.h"
#include "rebootinstancesrequest.h"
#include "rebootinstancesresponse.h"
#include "registerimagerequest.h"
#include "registerimageresponse.h"
#include "rejectvpcendpointconnectionsrequest.h"
#include "rejectvpcendpointconnectionsresponse.h"
#include "rejectvpcpeeringconnectionrequest.h"
#include "rejectvpcpeeringconnectionresponse.h"
#include "releaseaddressrequest.h"
#include "releaseaddressresponse.h"
#include "releasehostsrequest.h"
#include "releasehostsresponse.h"
#include "replaceiaminstanceprofileassociationrequest.h"
#include "replaceiaminstanceprofileassociationresponse.h"
#include "replacenetworkaclassociationrequest.h"
#include "replacenetworkaclassociationresponse.h"
#include "replacenetworkaclentryrequest.h"
#include "replacenetworkaclentryresponse.h"
#include "replacerouterequest.h"
#include "replacerouteresponse.h"
#include "replaceroutetableassociationrequest.h"
#include "replaceroutetableassociationresponse.h"
#include "reportinstancestatusrequest.h"
#include "reportinstancestatusresponse.h"
#include "requestspotfleetrequest.h"
#include "requestspotfleetresponse.h"
#include "requestspotinstancesrequest.h"
#include "requestspotinstancesresponse.h"
#include "resetfpgaimageattributerequest.h"
#include "resetfpgaimageattributeresponse.h"
#include "resetimageattributerequest.h"
#include "resetimageattributeresponse.h"
#include "resetinstanceattributerequest.h"
#include "resetinstanceattributeresponse.h"
#include "resetnetworkinterfaceattributerequest.h"
#include "resetnetworkinterfaceattributeresponse.h"
#include "resetsnapshotattributerequest.h"
#include "resetsnapshotattributeresponse.h"
#include "restoreaddresstoclassicrequest.h"
#include "restoreaddresstoclassicresponse.h"
#include "revokesecuritygroupegressrequest.h"
#include "revokesecuritygroupegressresponse.h"
#include "revokesecuritygroupingressrequest.h"
#include "revokesecuritygroupingressresponse.h"
#include "runinstancesrequest.h"
#include "runinstancesresponse.h"
#include "runscheduledinstancesrequest.h"
#include "runscheduledinstancesresponse.h"
#include "startinstancesrequest.h"
#include "startinstancesresponse.h"
#include "stopinstancesrequest.h"
#include "stopinstancesresponse.h"
#include "terminateinstancesrequest.h"
#include "terminateinstancesresponse.h"
#include "unassignipv6addressesrequest.h"
#include "unassignipv6addressesresponse.h"
#include "unassignprivateipaddressesrequest.h"
#include "unassignprivateipaddressesresponse.h"
#include "unmonitorinstancesrequest.h"
#include "unmonitorinstancesresponse.h"
#include "updatesecuritygroupruledescriptionsegressrequest.h"
#include "updatesecuritygroupruledescriptionsegressresponse.h"
#include "updatesecuritygroupruledescriptionsingressrequest.h"
#include "updatesecuritygroupruledescriptionsingressresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::EC2
 * \brief The QtAws::EC2 contains stuff...
 *
 * \inmodule QtAwsEC2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::Ec2Client
 * \brief The Ec2Client class provides access to the Amazon Elastic Compute Cloud ( EC2) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 */

/*!
 * \brief Constructs a Ec2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Ec2Client::Ec2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Ec2ClientPrivate(this), parent)
{
    Q_D(Ec2Client);
    d->apiVersion = QStringLiteral("2016-11-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ec2");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elastic Compute Cloud");
    d->serviceName = QStringLiteral("ec2");
}

/*!
 * \overload Ec2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Ec2Client::Ec2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Ec2ClientPrivate(this), parent)
{
    Q_D(Ec2Client);
    d->apiVersion = QStringLiteral("2016-11-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ec2");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elastic Compute Cloud");
    d->serviceName = QStringLiteral("ec2");
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AcceptReservedInstancesExchangeQuoteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts the Convertible Reserved Instance exchange quote described in the <a>GetReservedInstancesExchangeQuote</a>
 */
AcceptReservedInstancesExchangeQuoteResponse * Ec2Client::acceptReservedInstancesExchangeQuote(const AcceptReservedInstancesExchangeQuoteRequest &request)
{
    return qobject_cast<AcceptReservedInstancesExchangeQuoteResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AcceptVpcEndpointConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts one or more interface VPC endpoint connection requests to your VPC endpoint
 */
AcceptVpcEndpointConnectionsResponse * Ec2Client::acceptVpcEndpointConnections(const AcceptVpcEndpointConnectionsRequest &request)
{
    return qobject_cast<AcceptVpcEndpointConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AcceptVpcPeeringConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accept a VPC peering connection request. To accept a request, the VPC peering connection must be in the
 * <code>pending-acceptance</code> state, and you must be the owner of the peer VPC. Use
 * <a>DescribeVpcPeeringConnections</a> to view your outstanding VPC peering connection
 *
 * requests>
 *
 * For an inter-region VPC peering connection request, you must accept the VPC peering connection in the region of the
 * accepter
 */
AcceptVpcPeeringConnectionResponse * Ec2Client::acceptVpcPeeringConnection(const AcceptVpcPeeringConnectionRequest &request)
{
    return qobject_cast<AcceptVpcPeeringConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AllocateAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allocates an Elastic IP
 *
 * address>
 *
 * An Elastic IP address is for use either in the EC2-Classic platform or in a VPC. By default, you can allocate 5 Elastic
 * IP addresses for EC2-Classic per region and 5 Elastic IP addresses for EC2-VPC per
 *
 * region>
 *
 * If you release an Elastic IP address for use in a VPC, you might be able to recover it. To recover an Elastic IP address
 * that you released, specify it in the <code>Address</code> parameter. Note that you cannot recover an Elastic IP address
 * that you released after it is allocated to another AWS
 *
 * account>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP Addresses</a> in the
 * <i>Amazon Elastic Compute Cloud User
 */
AllocateAddressResponse * Ec2Client::allocateAddress(const AllocateAddressRequest &request)
{
    return qobject_cast<AllocateAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AllocateHostsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allocates a Dedicated Host to your account. At minimum you need to specify the instance size type, Availability Zone,
 * and quantity of hosts you want to
 */
AllocateHostsResponse * Ec2Client::allocateHosts(const AllocateHostsRequest &request)
{
    return qobject_cast<AllocateHostsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AssignIpv6AddressesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more IPv6 addresses to the specified network interface. You can specify one or more specific IPv6
 * addresses, or you can specify the number of IPv6 addresses to be automatically assigned from within the subnet's IPv6
 * CIDR block range. You can assign as many IPv6 addresses to a network interface as you can assign private IPv4 addresses,
 * and the limit varies per instance type. For information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP Addresses Per Network
 * Interface Per Instance Type</a> in the <i>Amazon Elastic Compute Cloud User
 */
AssignIpv6AddressesResponse * Ec2Client::assignIpv6Addresses(const AssignIpv6AddressesRequest &request)
{
    return qobject_cast<AssignIpv6AddressesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AssignPrivateIpAddressesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more secondary private IP addresses to the specified network interface. You can specify one or more
 * specific secondary IP addresses, or you can specify the number of secondary IP addresses to be automatically assigned
 * within the subnet's CIDR block range. The number of secondary IP addresses that you can assign to an instance varies by
 * instance type. For information about instance types, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Types</a> in the <i>Amazon
 * Elastic Compute Cloud User Guide</i>. For more information about Elastic IP addresses, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP Addresses</a> in the
 * <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * AssignPrivateIpAddresses is available only in
 */
AssignPrivateIpAddressesResponse * Ec2Client::assignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &request)
{
    return qobject_cast<AssignPrivateIpAddressesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AssociateAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an Elastic IP address with an instance or a network
 *
 * interface>
 *
 * An Elastic IP address is for use in either the EC2-Classic platform or in a VPC. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP Addresses</a> in the
 * <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * [EC2-Classic, VPC in an EC2-VPC-only account] If the Elastic IP address is already associated with a different instance,
 * it is disassociated from that instance and associated with the specified instance. If you associate an Elastic IP
 * address with an instance that has an existing Elastic IP address, the existing address is disassociated from the
 * instance, but remains allocated to your
 *
 * account>
 *
 * [VPC in an EC2-Classic account] If you don't specify a private IP address, the Elastic IP address is associated with the
 * primary IP address. If the Elastic IP address is already associated with a different instance or a network interface,
 * you get an error unless you allow reassociation. You cannot associate an Elastic IP address with an instance or network
 * interface that has an existing Elastic IP
 *
 * address> <b>
 *
 * This is an idempotent operation. If you perform the operation more than once, Amazon EC2 doesn't return an error, and
 * you may be charged for each time the Elastic IP address is remapped to the same instance. For more information, see the
 * <i>Elastic IP Addresses</i> section of <a href="http://aws.amazon.com/ec2/pricing/">Amazon EC2
 */
AssociateAddressResponse * Ec2Client::associateAddress(const AssociateAddressRequest &request)
{
    return qobject_cast<AssociateAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AssociateDhcpOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a set of DHCP options (that you've previously created) with the specified VPC, or associates no DHCP options
 * with the
 *
 * VPC>
 *
 * After you associate the options with the VPC, any existing instances and all new instances that you launch in that VPC
 * use the options. You don't need to restart or relaunch the instances. They automatically pick up the changes within a
 * few hours, depending on how frequently the instance renews its DHCP lease. You can explicitly renew the lease using the
 * operating system on the
 *
 * instance>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP
 * Options Sets</a> in the <i>Amazon Virtual Private Cloud User
 */
AssociateDhcpOptionsResponse * Ec2Client::associateDhcpOptions(const AssociateDhcpOptionsRequest &request)
{
    return qobject_cast<AssociateDhcpOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AssociateIamInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an IAM instance profile with a running or stopped instance. You cannot associate more than one IAM instance
 * profile with an
 */
AssociateIamInstanceProfileResponse * Ec2Client::associateIamInstanceProfile(const AssociateIamInstanceProfileRequest &request)
{
    return qobject_cast<AssociateIamInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AssociateRouteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a subnet with a route table. The subnet and route table must be in the same VPC. This association causes
 * traffic originating from the subnet to be routed according to the routes in the route table. The action returns an
 * association ID, which you need in order to disassociate the route table from the subnet later. A route table can be
 * associated with multiple
 *
 * subnets>
 *
 * For more information about route tables, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route Tables</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
AssociateRouteTableResponse * Ec2Client::associateRouteTable(const AssociateRouteTableRequest &request)
{
    return qobject_cast<AssociateRouteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AssociateSubnetCidrBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a CIDR block with your subnet. You can only associate a single IPv6 CIDR block with your subnet. An IPv6 CIDR
 * block must have a prefix length of
 */
AssociateSubnetCidrBlockResponse * Ec2Client::associateSubnetCidrBlock(const AssociateSubnetCidrBlockRequest &request)
{
    return qobject_cast<AssociateSubnetCidrBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AssociateVpcCidrBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a CIDR block with your VPC. You can associate a secondary IPv4 CIDR block, or you can associate an
 * Amazon-provided IPv6 CIDR block. The IPv6 CIDR block size is fixed at
 *
 * /56>
 *
 * For more information about associating CIDR blocks with your VPC and applicable restrictions, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html#VPC_Sizing">VPC and Subnet Sizing</a> in
 * the <i>Amazon Virtual Private Cloud User
 */
AssociateVpcCidrBlockResponse * Ec2Client::associateVpcCidrBlock(const AssociateVpcCidrBlockRequest &request)
{
    return qobject_cast<AssociateVpcCidrBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AttachClassicLinkVpcResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Links an EC2-Classic instance to a ClassicLink-enabled VPC through one or more of the VPC's security groups. You cannot
 * link an EC2-Classic instance to more than one VPC at a time. You can only link an instance that's in the
 * <code>running</code> state. An instance is automatically unlinked from a VPC when it's stopped - you can link it to the
 * VPC again when you restart
 *
 * it>
 *
 * After you've linked an instance, you cannot change the VPC security groups that are associated with it. To change the
 * security groups, you must first unlink the instance, and then link it
 *
 * again>
 *
 * Linking your instance to a VPC is sometimes referred to as <i>attaching</i> your
 */
AttachClassicLinkVpcResponse * Ec2Client::attachClassicLinkVpc(const AttachClassicLinkVpcRequest &request)
{
    return qobject_cast<AttachClassicLinkVpcResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AttachInternetGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an Internet gateway to a VPC, enabling connectivity between the Internet and the VPC. For more information
 * about your VPC and Internet gateway, see the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/">Amazon
 * Virtual Private Cloud User
 */
AttachInternetGatewayResponse * Ec2Client::attachInternetGateway(const AttachInternetGatewayRequest &request)
{
    return qobject_cast<AttachInternetGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AttachNetworkInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a network interface to an
 */
AttachNetworkInterfaceResponse * Ec2Client::attachNetworkInterface(const AttachNetworkInterfaceRequest &request)
{
    return qobject_cast<AttachNetworkInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AttachVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an EBS volume to a running or stopped instance and exposes it to the instance with the specified device
 *
 * name>
 *
 * Encrypted EBS volumes may only be attached to instances that support Amazon EBS encryption. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon EBS Encryption</a> in the <i>Amazon
 * Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * For a list of supported device names, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-attaching-volume.html">Attaching an EBS Volume to an
 * Instance</a>. Any device names that aren't reserved for instance store volumes can be used for EBS volumes. For more
 * information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon EC2 Instance
 * Store</a> in the <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * If a volume has an AWS Marketplace product
 *
 * code> <ul> <li>
 *
 * The volume can be attached only to a stopped
 *
 * instance> </li> <li>
 *
 * AWS Marketplace product codes are copied from the volume to the
 *
 * instance> </li> <li>
 *
 * You must be subscribed to the
 *
 * product> </li> <li>
 *
 * The instance type and operating system of the instance must support the product. For example, you can't detach a volume
 * from a Windows instance and attach it to a Linux
 *
 * instance> </li> </ul>
 *
 * For an overview of the AWS Marketplace, see <a href="https://aws.amazon.com/marketplace/help/200900000">Introducing AWS
 *
 * Marketplace</a>>
 *
 * For more information about EBS volumes, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-attaching-volume.html">Attaching Amazon EBS Volumes</a> in
 * the <i>Amazon Elastic Compute Cloud User
 */
AttachVolumeResponse * Ec2Client::attachVolume(const AttachVolumeRequest &request)
{
    return qobject_cast<AttachVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AttachVpnGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a virtual private gateway to a VPC. You can attach one virtual private gateway to one VPC at a
 *
 * time>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS Managed VPN
 * Connections</a> in the <i>Amazon Virtual Private Cloud User
 */
AttachVpnGatewayResponse * Ec2Client::attachVpnGateway(const AttachVpnGatewayRequest &request)
{
    return qobject_cast<AttachVpnGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AuthorizeSecurityGroupEgressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * [EC2-VPC only] Adds one or more egress rules to a security group for use with a VPC. Specifically, this action permits
 * instances to send traffic to one or more destination IPv4 or IPv6 CIDR address ranges, or to one or more destination
 * security groups for the same VPC. This action doesn't apply to security groups for use in EC2-Classic. For more
 * information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security Groups
 * for Your VPC</a> in the <i>Amazon Virtual Private Cloud User Guide</i>. For more information about security group
 * limits, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Appendix_Limits.html">Amazon VPC
 *
 * Limits</a>>
 *
 * Each rule consists of the protocol (for example, TCP), plus either a CIDR range or a source group. For the TCP and UDP
 * protocols, you must also specify the destination port or port range. For the ICMP protocol, you must also specify the
 * ICMP type and code. You can use -1 for the type or code to mean all types or all codes. You can optionally specify a
 * description for the
 *
 * rule>
 *
 * Rule changes are propagated to affected instances as quickly as possible. However, a small delay might
 */
AuthorizeSecurityGroupEgressResponse * Ec2Client::authorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest &request)
{
    return qobject_cast<AuthorizeSecurityGroupEgressResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * AuthorizeSecurityGroupIngressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more ingress rules to a security
 *
 * group>
 *
 * Rule changes are propagated to instances within the security group as quickly as possible. However, a small delay might
 *
 * occur>
 *
 * [EC2-Classic] This action gives one or more IPv4 CIDR address ranges permission to access a security group in your
 * account, or gives one or more security groups (called the <i>source groups</i>) permission to access a security group
 * for your account. A source group can be for your own AWS account, or another. You can have up to 100 rules per
 *
 * group>
 *
 * [EC2-VPC] This action gives one or more IPv4 or IPv6 CIDR address ranges permission to access a security group in your
 * VPC, or gives one or more other security groups (called the <i>source groups</i>) permission to access a security group
 * for your VPC. The security groups must all be for the same VPC or a peer VPC in a VPC peering connection. For more
 * information about VPC security group limits, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Appendix_Limits.html">Amazon VPC
 *
 * Limits</a>>
 *
 * You can optionally specify a description for the security group
 */
AuthorizeSecurityGroupIngressResponse * Ec2Client::authorizeSecurityGroupIngress(const AuthorizeSecurityGroupIngressRequest &request)
{
    return qobject_cast<AuthorizeSecurityGroupIngressResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * BundleInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Bundles an Amazon instance store-backed Windows
 *
 * instance>
 *
 * During bundling, only the root device volume (C:\) is bundled. Data on other instance store volumes is not
 *
 * preserved> <note>
 *
 * This action is not applicable for Linux/Unix instances or Windows instances that are backed by Amazon
 *
 * EBS> </note>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/Creating_InstanceStoreBacked_WinAMI.html">Creating an
 * Instance Store-Backed Windows
 */
BundleInstanceResponse * Ec2Client::bundleInstance(const BundleInstanceRequest &request)
{
    return qobject_cast<BundleInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CancelBundleTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a bundling operation for an instance store-backed Windows
 */
CancelBundleTaskResponse * Ec2Client::cancelBundleTask(const CancelBundleTaskRequest &request)
{
    return qobject_cast<CancelBundleTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CancelConversionTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an active conversion task. The task can be the import of an instance or volume. The action removes all artifacts
 * of the conversion, including a partially uploaded volume or instance. If the conversion is complete or is in the process
 * of transferring the final disk image, the command fails and returns an
 *
 * exception>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/ec2-cli-vmimport-export.html">Importing a Virtual
 * Machine Using the Amazon EC2
 */
CancelConversionTaskResponse * Ec2Client::cancelConversionTask(const CancelConversionTaskRequest &request)
{
    return qobject_cast<CancelConversionTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CancelExportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an active export task. The request removes all artifacts of the export, including any partially-created Amazon
 * S3 objects. If the export task is complete or is in the process of transferring the final disk image, the command fails
 * and returns an
 */
CancelExportTaskResponse * Ec2Client::cancelExportTask(const CancelExportTaskRequest &request)
{
    return qobject_cast<CancelExportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CancelImportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an in-process import virtual machine or import snapshot
 */
CancelImportTaskResponse * Ec2Client::cancelImportTask(const CancelImportTaskRequest &request)
{
    return qobject_cast<CancelImportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CancelReservedInstancesListingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified Reserved Instance listing in the Reserved Instance
 *
 * Marketplace>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
 * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
 */
CancelReservedInstancesListingResponse * Ec2Client::cancelReservedInstancesListing(const CancelReservedInstancesListingRequest &request)
{
    return qobject_cast<CancelReservedInstancesListingResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CancelSpotFleetRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified Spot Fleet
 *
 * requests>
 *
 * After you cancel a Spot Fleet request, the Spot Fleet launches no new Spot Instances. You must specify whether the Spot
 * Fleet should also terminate its Spot Instances. If you terminate the instances, the Spot Fleet request enters the
 * <code>cancelled_terminating</code> state. Otherwise, the Spot Fleet request enters the <code>cancelled_running</code>
 * state and the instances continue to run until they are interrupted or you terminate them
 */
CancelSpotFleetRequestsResponse * Ec2Client::cancelSpotFleetRequests(const CancelSpotFleetRequestsRequest &request)
{
    return qobject_cast<CancelSpotFleetRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CancelSpotInstanceRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels one or more Spot Instance requests. Spot Instances are instances that Amazon EC2 starts on your behalf when the
 * maximum price that you specify exceeds the current Spot price. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot Instance Requests</a> in the <i>Amazon
 * Elastic Compute Cloud User
 *
 * Guide</i>> <b>
 *
 * Canceling a Spot Instance request does not terminate running Spot Instances associated with the
 */
CancelSpotInstanceRequestsResponse * Ec2Client::cancelSpotInstanceRequests(const CancelSpotInstanceRequestsRequest &request)
{
    return qobject_cast<CancelSpotInstanceRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ConfirmProductInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Determines whether a product code is associated with an instance. This action can only be used by the owner of the
 * product code. It is useful when a product code owner must verify whether another user's instance is eligible for
 */
ConfirmProductInstanceResponse * Ec2Client::confirmProductInstance(const ConfirmProductInstanceRequest &request)
{
    return qobject_cast<ConfirmProductInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CopyFpgaImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the specified Amazon FPGA Image (AFI) to the current
 */
CopyFpgaImageResponse * Ec2Client::copyFpgaImage(const CopyFpgaImageRequest &request)
{
    return qobject_cast<CopyFpgaImageResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CopyImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates the copy of an AMI from the specified source region to the current region. You specify the destination region
 * by using its endpoint when making the
 *
 * request>
 *
 * For more information about the prerequisites and limits when copying an AMI, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/CopyingAMIs.html">Copying an AMI</a> in the <i>Amazon Elastic
 * Compute Cloud User
 */
CopyImageResponse * Ec2Client::copyImage(const CopyImageRequest &request)
{
    return qobject_cast<CopyImageResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CopySnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies a point-in-time snapshot of an EBS volume and stores it in Amazon S3. You can copy the snapshot within the same
 * region or from one region to another. You can use the snapshot to create EBS volumes or Amazon Machine Images (AMIs).
 * The snapshot is copied to the regional endpoint that you send the HTTP request
 *
 * to>
 *
 * Copies of encrypted EBS snapshots remain encrypted. Copies of unencrypted snapshots remain unencrypted, unless the
 * <code>Encrypted</code> flag is specified during the snapshot copy operation. By default, encrypted snapshot copies use
 * the default AWS Key Management Service (AWS KMS) customer master key (CMK); however, you can specify a non-default CMK
 * with the <code>KmsKeyId</code> parameter.
 *
 * </p <note>
 *
 * To copy an encrypted snapshot that has been shared from another account, you must have permissions for the CMK used to
 * encrypt the
 *
 * snapshot> </note> <note>
 *
 * Snapshots created by the CopySnapshot action have an arbitrary volume ID that should not be used for any
 *
 * purpose> </note>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-copy-snapshot.html">Copying an
 * Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User
 */
CopySnapshotResponse * Ec2Client::copySnapshot(const CopySnapshotRequest &request)
{
    return qobject_cast<CopySnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateCustomerGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information to AWS about your VPN customer gateway device. The customer gateway is the appliance at your end of
 * the VPN connection. (The device on the AWS side of the VPN connection is the virtual private gateway.) You must provide
 * the Internet-routable IP address of the customer gateway's external interface. The IP address must be static and may be
 * behind a device performing network address translation
 *
 * (NAT)>
 *
 * For devices that use Border Gateway Protocol (BGP), you can also provide the device's BGP Autonomous System Number
 * (ASN). You can use an existing ASN assigned to your network. If you don't have an ASN already, you can use a private ASN
 * (in the 64512 - 65534
 *
 * range)> <note>
 *
 * Amazon EC2 supports all 2-byte ASN numbers in the range of 1 - 65534, with the exception of 7224, which is reserved in
 * the <code>us-east-1</code> region, and 9059, which is reserved in the <code>eu-west-1</code>
 *
 * region> </note>
 *
 * For more information about VPN customer gateways, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS Managed VPN Connections</a> in the
 * <i>Amazon Virtual Private Cloud User
 *
 * Guide</i>> <b>
 *
 * You cannot create more than one customer gateway with the same VPN type, IP address, and BGP ASN parameter values. If
 * you run an identical request more than one time, the first request creates the customer gateway, and subsequent requests
 * return information about the existing customer gateway. The subsequent requests do not create new customer gateway
 */
CreateCustomerGatewayResponse * Ec2Client::createCustomerGateway(const CreateCustomerGatewayRequest &request)
{
    return qobject_cast<CreateCustomerGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateDefaultSubnetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a default subnet with a size <code>/20</code> IPv4 CIDR block in the specified Availability Zone in your default
 * VPC. You can have only one default subnet per Availability Zone. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/default-vpc.html#create-default-subnet">Creating a Default
 * Subnet</a> in the <i>Amazon Virtual Private Cloud User
 */
CreateDefaultSubnetResponse * Ec2Client::createDefaultSubnet(const CreateDefaultSubnetRequest &request)
{
    return qobject_cast<CreateDefaultSubnetResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateDefaultVpcResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a default VPC with a size <code>/16</code> IPv4 CIDR block and a default subnet in each Availability Zone. For
 * more information about the components of a default VPC, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/default-vpc.html">Default VPC and Default Subnets</a> in the
 * <i>Amazon Virtual Private Cloud User Guide</i>. You cannot specify the components of the default VPC
 *
 * yourself>
 *
 * You can create a default VPC if you deleted your previous default VPC. You cannot have more than one default VPC per
 * region.
 *
 * </p
 *
 * If your account supports EC2-Classic, you cannot use this action to create a default VPC in a region that supports
 * EC2-Classic. If you want a default VPC in a region that supports EC2-Classic, see "I really want a default VPC for my
 * existing EC2 account. Is that possible?" in the <a href="http://aws.amazon.com/vpc/faqs/#Default_VPCs">Default VPCs
 */
CreateDefaultVpcResponse * Ec2Client::createDefaultVpc(const CreateDefaultVpcRequest &request)
{
    return qobject_cast<CreateDefaultVpcResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateDhcpOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a set of DHCP options for your VPC. After creating the set, you must associate it with the VPC, causing all
 * existing and new instances that you launch in the VPC to use this set of DHCP options. The following are the individual
 * DHCP options you can specify. For more information about the options, see <a
 * href="http://www.ietf.org/rfc/rfc2132.txt">RFC
 *
 * 2132</a>> <ul> <li>
 *
 * <code>domain-name-servers</code> - The IP addresses of up to four domain name servers, or AmazonProvidedDNS. The default
 * DHCP option set specifies AmazonProvidedDNS. If specifying more than one domain name server, specify the IP addresses in
 * a single parameter, separated by commas. If you want your instance to receive a custom DNS hostname as specified in
 * <code>domain-name</code>, you must set <code>domain-name-servers</code> to a custom DNS
 *
 * server> </li> <li>
 *
 * <code>domain-name</code> - If you're using AmazonProvidedDNS in <code>us-east-1</code>, specify
 * <code>ec2.internal</code>. If you're using AmazonProvidedDNS in another region, specify
 * <code>region.compute.internal</code> (for example, <code>ap-northeast-1.compute.internal</code>). Otherwise, specify a
 * domain name (for example, <code>MyCompany.com</code>). This value is used to complete unqualified DNS hostnames.
 * <b>Important</b>: Some Linux operating systems accept multiple domain names separated by spaces. However, Windows and
 * other Linux operating systems treat the value as a single domain, which results in unexpected behavior. If your DHCP
 * options set is associated with a VPC that has instances with multiple operating systems, specify only one domain
 *
 * name> </li> <li>
 *
 * <code>ntp-servers</code> - The IP addresses of up to four Network Time Protocol (NTP)
 *
 * servers> </li> <li>
 *
 * <code>netbios-name-servers</code> - The IP addresses of up to four NetBIOS name
 *
 * servers> </li> <li>
 *
 * <code>netbios-node-type</code> - The NetBIOS node type (1, 2, 4, or 8). We recommend that you specify 2 (broadcast and
 * multicast are not currently supported). For more information about these node types, see <a
 * href="http://www.ietf.org/rfc/rfc2132.txt">RFC
 *
 * 2132</a>> </li> </ul>
 *
 * Your VPC automatically starts out with a set of DHCP options that includes only a DNS server that we provide
 * (AmazonProvidedDNS). If you create a set of options, and if your VPC has an Internet gateway, make sure to set the
 * <code>domain-name-servers</code> option either to <code>AmazonProvidedDNS</code> or to a domain name server of your
 * choice. For more information about DHCP options, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP Options Sets</a> in the
 * <i>Amazon Virtual Private Cloud User
 */
CreateDhcpOptionsResponse * Ec2Client::createDhcpOptions(const CreateDhcpOptionsRequest &request)
{
    return qobject_cast<CreateDhcpOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateEgressOnlyInternetGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * [IPv6 only] Creates an egress-only Internet gateway for your VPC. An egress-only Internet gateway is used to enable
 * outbound communication over IPv6 from instances in your VPC to the Internet, and prevents hosts outside of your VPC from
 * initiating an IPv6 connection with your
 */
CreateEgressOnlyInternetGatewayResponse * Ec2Client::createEgressOnlyInternetGateway(const CreateEgressOnlyInternetGatewayRequest &request)
{
    return qobject_cast<CreateEgressOnlyInternetGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateFlowLogsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more flow logs to capture IP traffic for a specific network interface, subnet, or VPC. Flow logs are
 * delivered to a specified log group in Amazon CloudWatch Logs. If you specify a VPC or subnet in the request, a log
 * stream is created in CloudWatch Logs for each network interface in the subnet or VPC. Log streams can include
 * information about accepted and rejected traffic to a network interface. You can view the data in your log streams using
 * Amazon CloudWatch
 *
 * Logs>
 *
 * In your request, you must also specify an IAM role that has permission to publish logs to CloudWatch
 *
 * Logs>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/flow-logs.html">VPC Flow
 * Logs</a> in the <i>Amazon Virtual Private Cloud User
 */
CreateFlowLogsResponse * Ec2Client::createFlowLogs(const CreateFlowLogsRequest &request)
{
    return qobject_cast<CreateFlowLogsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateFpgaImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon FPGA Image (AFI) from the specified design checkpoint
 *
 * (DCP)>
 *
 * The create operation is asynchronous. To verify that the AFI is ready for use, check the output
 *
 * logs>
 *
 * An AFI contains the FPGA bitstream that is ready to download to an FPGA. You can securely deploy an AFI on one or more
 * FPGA-accelerated instances. For more information, see the <a href="https://github.com/aws/aws-fpga/">AWS FPGA Hardware
 * Development
 */
CreateFpgaImageResponse * Ec2Client::createFpgaImage(const CreateFpgaImageRequest &request)
{
    return qobject_cast<CreateFpgaImageResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon EBS-backed AMI from an Amazon EBS-backed instance that is either running or
 *
 * stopped>
 *
 * If you customized your instance with instance store volumes or EBS volumes in addition to the root device volume, the
 * new AMI contains block device mapping information for those volumes. When you launch an instance from this new AMI, the
 * instance automatically launches with those additional
 *
 * volumes>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
 * Amazon EBS-Backed Linux AMIs</a> in the <i>Amazon Elastic Compute Cloud User
 */
CreateImageResponse * Ec2Client::createImage(const CreateImageRequest &request)
{
    return qobject_cast<CreateImageResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateInstanceExportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports a running or stopped instance to an S3
 *
 * bucket>
 *
 * For information about the supported operating systems, image formats, and known limitations for the types of instances
 * you can export, see <a href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmexport.html">Exporting an Instance
 * as a VM Using VM Import/Export</a> in the <i>VM Import/Export User
 */
CreateInstanceExportTaskResponse * Ec2Client::createInstanceExportTask(const CreateInstanceExportTaskRequest &request)
{
    return qobject_cast<CreateInstanceExportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateInternetGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Internet gateway for use with a VPC. After creating the Internet gateway, you attach it to a VPC using
 *
 * <a>AttachInternetGateway</a>>
 *
 * For more information about your VPC and Internet gateway, see the <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/">Amazon Virtual Private Cloud User
 */
CreateInternetGatewayResponse * Ec2Client::createInternetGateway(const CreateInternetGatewayRequest &request)
{
    return qobject_cast<CreateInternetGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a 2048-bit RSA key pair with the specified name. Amazon EC2 stores the public key and displays the private key
 * for you to save to a file. The private key is returned as an unencrypted PEM encoded PKCS#1 private key. If a key with
 * the specified name already exists, Amazon EC2 returns an
 *
 * error>
 *
 * You can have up to five thousand key pairs per
 *
 * region>
 *
 * The key pair returned to you is available only in the region in which you create it. If you prefer, you can create your
 * own key pair using a third-party tool and upload it to any region using
 *
 * <a>ImportKeyPair</a>>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key Pairs</a>
 * in the <i>Amazon Elastic Compute Cloud User
 */
CreateKeyPairResponse * Ec2Client::createKeyPair(const CreateKeyPairRequest &request)
{
    return qobject_cast<CreateKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateLaunchTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a launch template. A launch template contains the parameters to launch an instance. When you launch an instance
 * using <a>RunInstances</a>, you can specify a launch template instead of providing the launch parameters in the
 */
CreateLaunchTemplateResponse * Ec2Client::createLaunchTemplate(const CreateLaunchTemplateRequest &request)
{
    return qobject_cast<CreateLaunchTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateLaunchTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version for a launch template. You can specify an existing version of launch template from which to base
 * the new
 *
 * version>
 *
 * Launch template versions are numbered in the order in which they are created. You cannot specify, change, or replace the
 * numbering of launch template
 */
CreateLaunchTemplateVersionResponse * Ec2Client::createLaunchTemplateVersion(const CreateLaunchTemplateVersionRequest &request)
{
    return qobject_cast<CreateLaunchTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateNatGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a NAT gateway in the specified subnet. A NAT gateway can be used to enable instances in a private subnet to
 * connect to the Internet. This action creates a network interface in the specified subnet with a private IP address from
 * the IP address range of the subnet. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">NAT Gateways</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
CreateNatGatewayResponse * Ec2Client::createNatGateway(const CreateNatGatewayRequest &request)
{
    return qobject_cast<CreateNatGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateNetworkAclResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a network ACL in a VPC. Network ACLs provide an optional layer of security (in addition to security groups) for
 * the instances in your
 *
 * VPC>
 *
 * For more information about network ACLs, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network ACLs</a> in the <i>Amazon Virtual
 * Private Cloud User
 */
CreateNetworkAclResponse * Ec2Client::createNetworkAcl(const CreateNetworkAclRequest &request)
{
    return qobject_cast<CreateNetworkAclResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateNetworkAclEntryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an entry (a rule) in a network ACL with the specified rule number. Each network ACL has a set of numbered
 * ingress rules and a separate set of numbered egress rules. When determining whether a packet should be allowed in or out
 * of a subnet associated with the ACL, we process the entries in the ACL according to the rule numbers, in ascending
 * order. Each network ACL has a set of ingress rules and a separate set of egress
 *
 * rules>
 *
 * We recommend that you leave room between the rule numbers (for example, 100, 110, 120, ...), and not number them one
 * right after the other (for example, 101, 102, 103, ...). This makes it easier to add a rule between existing ones
 * without having to renumber the
 *
 * rules>
 *
 * After you add an entry, you can't modify it; you must either replace it, or create an entry and delete the old
 *
 * one>
 *
 * For more information about network ACLs, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network ACLs</a> in the <i>Amazon Virtual
 * Private Cloud User
 */
CreateNetworkAclEntryResponse * Ec2Client::createNetworkAclEntry(const CreateNetworkAclEntryRequest &request)
{
    return qobject_cast<CreateNetworkAclEntryResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateNetworkInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a network interface in the specified
 *
 * subnet>
 *
 * For more information about network interfaces, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html">Elastic Network Interfaces</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
CreateNetworkInterfaceResponse * Ec2Client::createNetworkInterface(const CreateNetworkInterfaceRequest &request)
{
    return qobject_cast<CreateNetworkInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateNetworkInterfacePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Grants an AWS authorized partner account permission to attach the specified network interface to an instance in their
 *
 * account>
 *
 * You can grant permission to a single AWS account only, and only one account at a
 */
CreateNetworkInterfacePermissionResponse * Ec2Client::createNetworkInterfacePermission(const CreateNetworkInterfacePermissionRequest &request)
{
    return qobject_cast<CreateNetworkInterfacePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreatePlacementGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a placement group in which to launch instances. The strategy of the placement group determines how the instances
 * are organized within the group.
 *
 * </p
 *
 * A <code>cluster</code> placement group is a logical grouping of instances within a single Availability Zone that benefit
 * from low network latency, high network throughput. A <code>spread</code> placement group places instances on distinct
 *
 * hardware>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
 * Groups</a> in the <i>Amazon Elastic Compute Cloud User
 */
CreatePlacementGroupResponse * Ec2Client::createPlacementGroup(const CreatePlacementGroupRequest &request)
{
    return qobject_cast<CreatePlacementGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateReservedInstancesListingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a listing for Amazon EC2 Standard Reserved Instances to be sold in the Reserved Instance Marketplace. You can
 * submit one Standard Reserved Instance listing at a time. To get a list of your Standard Reserved Instances, you can use
 * the <a>DescribeReservedInstances</a>
 *
 * operation> <note>
 *
 * Only Standard Reserved Instances with a capacity reservation can be sold in the Reserved Instance Marketplace.
 * Convertible Reserved Instances and Standard Reserved Instances with a regional benefit cannot be
 *
 * sold> </note>
 *
 * The Reserved Instance Marketplace matches sellers who want to resell Standard Reserved Instance capacity that they no
 * longer need with buyers who want to purchase additional capacity. Reserved Instances bought and sold through the
 * Reserved Instance Marketplace work like any other Reserved
 *
 * Instances>
 *
 * To sell your Standard Reserved Instances, you must first register as a seller in the Reserved Instance Marketplace.
 * After completing the registration process, you can create a Reserved Instance Marketplace listing of some or all of your
 * Standard Reserved Instances, and specify the upfront price to receive for them. Your Standard Reserved Instance listings
 * then become available for purchase. To view the details of your Standard Reserved Instance listing, you can use the
 * <a>DescribeReservedInstancesListings</a>
 *
 * operation>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
 * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
 */
CreateReservedInstancesListingResponse * Ec2Client::createReservedInstancesListing(const CreateReservedInstancesListingRequest &request)
{
    return qobject_cast<CreateReservedInstancesListingResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a route in a route table within a
 *
 * VPC>
 *
 * You must specify one of the following targets: Internet gateway or virtual private gateway, NAT instance, NAT gateway,
 * VPC peering connection, network interface, or egress-only Internet
 *
 * gateway>
 *
 * When determining how to route traffic, we use the route with the most specific match. For example, traffic is destined
 * for the IPv4 address <code>192.0.2.3</code>, and the route table includes the following two IPv4
 *
 * routes> <ul> <li>
 *
 * <code>192.0.2.0/24</code> (goes to some target
 *
 * A> </li> <li>
 *
 * <code>192.0.2.0/28</code> (goes to some target
 *
 * B> </li> </ul>
 *
 * Both routes apply to the traffic destined for <code>192.0.2.3</code>. However, the second route in the list covers a
 * smaller number of IP addresses and is therefore more specific, so we use that route to determine where to target the
 *
 * traffic>
 *
 * For more information about route tables, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route Tables</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
CreateRouteResponse * Ec2Client::createRoute(const CreateRouteRequest &request)
{
    return qobject_cast<CreateRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateRouteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a route table for the specified VPC. After you create a route table, you can add routes and associate the table
 * with a
 *
 * subnet>
 *
 * For more information about route tables, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route Tables</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
CreateRouteTableResponse * Ec2Client::createRouteTable(const CreateRouteTableRequest &request)
{
    return qobject_cast<CreateRouteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a security
 *
 * group>
 *
 * A security group is for use with instances either in the EC2-Classic platform or in a specific VPC. For more
 * information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon EC2
 * Security Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i> and <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security Groups for Your VPC</a> in
 * the <i>Amazon Virtual Private Cloud User
 *
 * Guide</i>> <b>
 *
 * EC2-Classic: You can have up to 500 security
 *
 * groups>
 *
 * EC2-VPC: You can create up to 500 security groups per
 *
 * VPC> </b>
 *
 * When you create a security group, you specify a friendly name of your choice. You can have a security group for use in
 * EC2-Classic with the same name as a security group for use in a VPC. However, you can't have two security groups for use
 * in EC2-Classic with the same name or two security groups for use in a VPC with the same
 *
 * name>
 *
 * You have a default security group for use in EC2-Classic and a default security group for use in your VPC. If you don't
 * specify a security group when you launch an instance, the instance is launched into the appropriate default security
 * group. A default security group includes a default rule that grants instances unrestricted network access to each
 *
 * other>
 *
 * You can add or remove rules from your security groups using <a>AuthorizeSecurityGroupIngress</a>,
 * <a>AuthorizeSecurityGroupEgress</a>, <a>RevokeSecurityGroupIngress</a>, and
 */
CreateSecurityGroupResponse * Ec2Client::createSecurityGroup(const CreateSecurityGroupRequest &request)
{
    return qobject_cast<CreateSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a snapshot of an EBS volume and stores it in Amazon S3. You can use snapshots for backups, to make copies of EBS
 * volumes, and to save data before shutting down an
 *
 * instance>
 *
 * When a snapshot is created, any AWS Marketplace product codes that are associated with the source volume are propagated
 * to the
 *
 * snapshot>
 *
 * You can take a snapshot of an attached volume that is in use. However, snapshots only capture data that has been written
 * to your EBS volume at the time the snapshot command is issued; this may exclude any data that has been cached by any
 * applications or the operating system. If you can pause any file systems on the volume long enough to take a snapshot,
 * your snapshot should be complete. However, if you cannot pause all file writes to the volume, you should unmount the
 * volume from within the instance, issue the snapshot command, and then remount the volume to ensure a consistent and
 * complete snapshot. You may remount and use your volume while the snapshot status is
 *
 * <code>pending</code>>
 *
 * To create a snapshot for EBS volumes that serve as root devices, you should stop the instance before taking the
 *
 * snapshot>
 *
 * Snapshots that are taken from encrypted volumes are automatically encrypted. Volumes that are created from encrypted
 * snapshots are also automatically encrypted. Your encrypted volumes and any associated snapshots always remain
 *
 * protected>
 *
 * You can tag your snapshots during creation. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging Your Amazon EC2
 *
 * Resources</a>>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon Elastic
 * Block Store</a> and <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon EBS
 * Encryption</a> in the <i>Amazon Elastic Compute Cloud User
 */
CreateSnapshotResponse * Ec2Client::createSnapshot(const CreateSnapshotRequest &request)
{
    return qobject_cast<CreateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateSpotDatafeedSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a data feed for Spot Instances, enabling you to view Spot Instance usage logs. You can create one data feed per
 * AWS account. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot Instance Data Feed</a> in the
 * <i>Amazon Elastic Compute Cloud User
 */
CreateSpotDatafeedSubscriptionResponse * Ec2Client::createSpotDatafeedSubscription(const CreateSpotDatafeedSubscriptionRequest &request)
{
    return qobject_cast<CreateSpotDatafeedSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateSubnetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a subnet in an existing
 *
 * VPC>
 *
 * When you create each subnet, you provide the VPC ID and the IPv4 CIDR block you want for the subnet. After you create a
 * subnet, you can't change its CIDR block. The size of the subnet's IPv4 CIDR block can be the same as a VPC's IPv4 CIDR
 * block, or a subset of a VPC's IPv4 CIDR block. If you create more than one subnet in a VPC, the subnets' CIDR blocks
 * must not overlap. The smallest IPv4 subnet (and VPC) you can create uses a /28 netmask (16 IPv4 addresses), and the
 * largest uses a /16 netmask (65,536 IPv4
 *
 * addresses)>
 *
 * If you've associated an IPv6 CIDR block with your VPC, you can create a subnet with an IPv6 CIDR block that uses a /64
 * prefix length.
 *
 * </p <b>
 *
 * AWS reserves both the first four and the last IPv4 address in each subnet's CIDR block. They're not available for
 *
 * use> </b>
 *
 * If you add more than one subnet to a VPC, they're set up in a star topology with a logical router in the
 *
 * middle>
 *
 * If you launch an instance in a VPC using an Amazon EBS-backed AMI, the IP address doesn't change if you stop and restart
 * the instance (unlike a similar instance launched outside a VPC, which gets a new IP address when restarted). It's
 * therefore possible to have a subnet with no running instances (they're all stopped), but no remaining IP addresses
 *
 * available>
 *
 * For more information about subnets, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your VPC and Subnets</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
CreateSubnetResponse * Ec2Client::createSubnet(const CreateSubnetRequest &request)
{
    return qobject_cast<CreateSubnetResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified Amazon EC2 resource or resources. Each resource can have a maximum
 * of 50 tags. Each tag consists of a key and optional value. Tag keys must be unique per
 *
 * resource>
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging Your Resources</a> in the <i>Amazon
 * Elastic Compute Cloud User Guide</i>. For more information about creating IAM policies that control users' access to
 * resources based on tags, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-iam-actions-resources.html">Supported
 * Resource-Level Permissions for Amazon EC2 API Actions</a> in the <i>Amazon Elastic Compute Cloud User
 */
CreateTagsResponse * Ec2Client::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an EBS volume that can be attached to an instance in the same Availability Zone. The volume is created in the
 * regional endpoint that you send the HTTP request to. For more information see <a
 * href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
 *
 * Endpoints</a>>
 *
 * You can create a new empty volume or restore a volume from an EBS snapshot. Any AWS Marketplace product codes from the
 * snapshot are propagated to the
 *
 * volume>
 *
 * You can create encrypted volumes with the <code>Encrypted</code> parameter. Encrypted volumes may only be attached to
 * instances that support Amazon EBS encryption. Volumes that are created from encrypted snapshots are also automatically
 * encrypted. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon EBS Encryption</a> in the <i>Amazon
 * Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * You can tag your volumes during creation. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging Your Amazon EC2
 *
 * Resources</a>>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-creating-volume.html">Creating
 * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
 */
CreateVolumeResponse * Ec2Client::createVolume(const CreateVolumeRequest &request)
{
    return qobject_cast<CreateVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateVpcResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a VPC with the specified IPv4 CIDR block. The smallest VPC you can create uses a /28 netmask (16 IPv4
 * addresses), and the largest uses a /16 netmask (65,536 IPv4 addresses). To help you decide how big to make your VPC, see
 * <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your VPC and Subnets</a> in the
 * <i>Amazon Virtual Private Cloud User
 *
 * Guide</i>>
 *
 * You can optionally request an Amazon-provided IPv6 CIDR block for the VPC. The IPv6 CIDR block uses a /56 prefix length,
 * and is allocated from Amazon's pool of IPv6 addresses. You cannot choose the IPv6 range for your
 *
 * VPC>
 *
 * By default, each instance you launch in the VPC has the default DHCP options, which includes only a default DNS server
 * that we provide (AmazonProvidedDNS). For more information about DHCP options, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP Options Sets</a> in the
 * <i>Amazon Virtual Private Cloud User
 *
 * Guide</i>>
 *
 * You can specify the instance tenancy value for the VPC when you create it. You can't change this value for the VPC after
 * you create it. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-instance.html">Dedicated Instances</a> in the
 * <i>Amazon Elastic Compute Cloud User
 */
CreateVpcResponse * Ec2Client::createVpc(const CreateVpcRequest &request)
{
    return qobject_cast<CreateVpcResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateVpcEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a VPC endpoint for a specified service. An endpoint enables you to create a private connection between your VPC
 * and the service. The service may be provided by AWS, an AWS Marketplace partner, or another AWS account. For more
 * information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-endpoints.html">VPC Endpoints</a> in
 * the <i>Amazon Virtual Private Cloud User
 *
 * Guide</i>>
 *
 * A <code>gateway</code> endpoint serves as a target for a route in your route table for traffic destined for the AWS
 * service. You can specify an endpoint policy to attach to the endpoint that will control access to the service from your
 * VPC. You can also specify the VPC route tables that use the
 *
 * endpoint>
 *
 * An <code>interface</code> endpoint is a network interface in your subnet that serves as an endpoint for communicating
 * with the specified service. You can specify the subnets in which to create an endpoint, and the security groups to
 * associate with the endpoint network
 *
 * interface>
 *
 * Use <a>DescribeVpcEndpointServices</a> to get a list of supported
 */
CreateVpcEndpointResponse * Ec2Client::createVpcEndpoint(const CreateVpcEndpointRequest &request)
{
    return qobject_cast<CreateVpcEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateVpcEndpointConnectionNotificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a connection notification for a specified VPC endpoint or VPC endpoint service. A connection notification
 * notifies you of specific endpoint events. You must create an SNS topic to receive notifications. For more information,
 * see <a href="http://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Create a Topic</a> in the <i>Amazon Simple
 * Notification Service Developer
 *
 * Guide</i>>
 *
 * You can create a connection notification for interface endpoints
 */
CreateVpcEndpointConnectionNotificationResponse * Ec2Client::createVpcEndpointConnectionNotification(const CreateVpcEndpointConnectionNotificationRequest &request)
{
    return qobject_cast<CreateVpcEndpointConnectionNotificationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateVpcEndpointServiceConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a VPC endpoint service configuration to which service consumers (AWS accounts, IAM users, and IAM roles) can
 * connect. Service consumers can create an interface VPC endpoint to connect to your
 *
 * service>
 *
 * To create an endpoint service configuration, you must first create a Network Load Balancer for your service. For more
 * information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/endpoint-service.html">VPC Endpoint
 * Services</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.
 */
CreateVpcEndpointServiceConfigurationResponse * Ec2Client::createVpcEndpointServiceConfiguration(const CreateVpcEndpointServiceConfigurationRequest &request)
{
    return qobject_cast<CreateVpcEndpointServiceConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateVpcPeeringConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a VPC peering connection between two VPCs: a requester VPC that you own and an accepter VPC with which to
 * create the connection. The accepter VPC can belong to another AWS account and can be in a different region to the
 * requester VPC. The requester VPC and accepter VPC cannot have overlapping CIDR
 *
 * blocks> <note>
 *
 * Limitations and rules apply to a VPC peering connection. For more information, see the <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/PeeringGuide/vpc-peering-basics.html#vpc-peering-limitations">limitations</a>
 * section in the <i>VPC Peering
 *
 * Guide</i>> </note>
 *
 * The owner of the accepter VPC must accept the peering request to activate the peering connection. The VPC peering
 * connection request expires after 7 days, after which it cannot be accepted or
 *
 * rejected>
 *
 * If you create a VPC peering connection request between VPCs with overlapping CIDR blocks, the VPC peering connection has
 * a status of
 */
CreateVpcPeeringConnectionResponse * Ec2Client::createVpcPeeringConnection(const CreateVpcPeeringConnectionRequest &request)
{
    return qobject_cast<CreateVpcPeeringConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateVpnConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a VPN connection between an existing virtual private gateway and a VPN customer gateway. The only supported
 * connection type is
 *
 * <code>ipsec.1</code>>
 *
 * The response includes information that you need to give to your network administrator to configure your customer
 *
 * gateway> <b>
 *
 * We strongly recommend that you use HTTPS when calling this operation because the response contains sensitive
 * cryptographic information for configuring your customer
 *
 * gateway> </b>
 *
 * If you decide to shut down your VPN connection for any reason and later create a new VPN connection, you must
 * reconfigure your customer gateway with the new information returned from this
 *
 * call>
 *
 * This is an idempotent operation. If you perform the operation more than once, Amazon EC2 doesn't return an
 *
 * error>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS Managed VPN
 * Connections</a> in the <i>Amazon Virtual Private Cloud User
 */
CreateVpnConnectionResponse * Ec2Client::createVpnConnection(const CreateVpnConnectionRequest &request)
{
    return qobject_cast<CreateVpnConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateVpnConnectionRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a static route associated with a VPN connection between an existing virtual private gateway and a VPN customer
 * gateway. The static route allows traffic to be routed from the virtual private gateway to the VPN customer
 *
 * gateway>
 *
 * For more information about VPN connections, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS Managed VPN Connections</a> in the
 * <i>Amazon Virtual Private Cloud User
 */
CreateVpnConnectionRouteResponse * Ec2Client::createVpnConnectionRoute(const CreateVpnConnectionRouteRequest &request)
{
    return qobject_cast<CreateVpnConnectionRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * CreateVpnGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a virtual private gateway. A virtual private gateway is the endpoint on the VPC side of your VPN connection. You
 * can create a virtual private gateway before creating the VPC
 *
 * itself>
 *
 * For more information about virtual private gateways, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS Managed VPN Connections</a> in the
 * <i>Amazon Virtual Private Cloud User
 */
CreateVpnGatewayResponse * Ec2Client::createVpnGateway(const CreateVpnGatewayRequest &request)
{
    return qobject_cast<CreateVpnGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteCustomerGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified customer gateway. You must delete the VPN connection before you can delete the customer
 */
DeleteCustomerGatewayResponse * Ec2Client::deleteCustomerGateway(const DeleteCustomerGatewayRequest &request)
{
    return qobject_cast<DeleteCustomerGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteDhcpOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified set of DHCP options. You must disassociate the set of DHCP options before you can delete it. You
 * can disassociate the set of DHCP options by associating either a new set of options or the default set of options with
 * the
 */
DeleteDhcpOptionsResponse * Ec2Client::deleteDhcpOptions(const DeleteDhcpOptionsRequest &request)
{
    return qobject_cast<DeleteDhcpOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteEgressOnlyInternetGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an egress-only Internet
 */
DeleteEgressOnlyInternetGatewayResponse * Ec2Client::deleteEgressOnlyInternetGateway(const DeleteEgressOnlyInternetGatewayRequest &request)
{
    return qobject_cast<DeleteEgressOnlyInternetGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteFlowLogsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more flow
 */
DeleteFlowLogsResponse * Ec2Client::deleteFlowLogs(const DeleteFlowLogsRequest &request)
{
    return qobject_cast<DeleteFlowLogsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteFpgaImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Amazon FPGA Image
 */
DeleteFpgaImageResponse * Ec2Client::deleteFpgaImage(const DeleteFpgaImageRequest &request)
{
    return qobject_cast<DeleteFpgaImageResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteInternetGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Internet gateway. You must detach the Internet gateway from the VPC before you can delete
 */
DeleteInternetGatewayResponse * Ec2Client::deleteInternetGateway(const DeleteInternetGatewayRequest &request)
{
    return qobject_cast<DeleteInternetGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified key pair, by removing the public key from Amazon
 */
DeleteKeyPairResponse * Ec2Client::deleteKeyPair(const DeleteKeyPairRequest &request)
{
    return qobject_cast<DeleteKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteLaunchTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a launch template. Deleting a launch template deletes all of its
 */
DeleteLaunchTemplateResponse * Ec2Client::deleteLaunchTemplate(const DeleteLaunchTemplateRequest &request)
{
    return qobject_cast<DeleteLaunchTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteLaunchTemplateVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more versions of a launch template. You cannot delete the default version of a launch template; you must
 * first assign a different version as the default. If the default version is the only version for the launch template, you
 * must delete the entire launch template using
 */
DeleteLaunchTemplateVersionsResponse * Ec2Client::deleteLaunchTemplateVersions(const DeleteLaunchTemplateVersionsRequest &request)
{
    return qobject_cast<DeleteLaunchTemplateVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteNatGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified NAT gateway. Deleting a NAT gateway disassociates its Elastic IP address, but does not release the
 * address from your account. Deleting a NAT gateway does not delete any NAT gateway routes in your route
 */
DeleteNatGatewayResponse * Ec2Client::deleteNatGateway(const DeleteNatGatewayRequest &request)
{
    return qobject_cast<DeleteNatGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteNetworkAclResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified network ACL. You can't delete the ACL if it's associated with any subnets. You can't delete the
 * default network
 */
DeleteNetworkAclResponse * Ec2Client::deleteNetworkAcl(const DeleteNetworkAclRequest &request)
{
    return qobject_cast<DeleteNetworkAclResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteNetworkAclEntryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified ingress or egress entry (rule) from the specified network
 */
DeleteNetworkAclEntryResponse * Ec2Client::deleteNetworkAclEntry(const DeleteNetworkAclEntryRequest &request)
{
    return qobject_cast<DeleteNetworkAclEntryResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteNetworkInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified network interface. You must detach the network interface before you can delete
 */
DeleteNetworkInterfaceResponse * Ec2Client::deleteNetworkInterface(const DeleteNetworkInterfaceRequest &request)
{
    return qobject_cast<DeleteNetworkInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteNetworkInterfacePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a permission for a network interface. By default, you cannot delete the permission if the account for which
 * you're removing the permission has attached the network interface to an instance. However, you can force delete the
 * permission, regardless of any
 */
DeleteNetworkInterfacePermissionResponse * Ec2Client::deleteNetworkInterfacePermission(const DeleteNetworkInterfacePermissionRequest &request)
{
    return qobject_cast<DeleteNetworkInterfacePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeletePlacementGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified placement group. You must terminate all instances in the placement group before you can delete the
 * placement group. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a> in the <i>Amazon
 * Elastic Compute Cloud User
 */
DeletePlacementGroupResponse * Ec2Client::deletePlacementGroup(const DeletePlacementGroupRequest &request)
{
    return qobject_cast<DeletePlacementGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified route from the specified route
 */
DeleteRouteResponse * Ec2Client::deleteRoute(const DeleteRouteRequest &request)
{
    return qobject_cast<DeleteRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteRouteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified route table. You must disassociate the route table from any subnets before you can delete it. You
 * can't delete the main route
 */
DeleteRouteTableResponse * Ec2Client::deleteRouteTable(const DeleteRouteTableRequest &request)
{
    return qobject_cast<DeleteRouteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a security
 *
 * group>
 *
 * If you attempt to delete a security group that is associated with an instance, or is referenced by another security
 * group, the operation fails with <code>InvalidGroup.InUse</code> in EC2-Classic or <code>DependencyViolation</code> in
 */
DeleteSecurityGroupResponse * Ec2Client::deleteSecurityGroup(const DeleteSecurityGroupRequest &request)
{
    return qobject_cast<DeleteSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * snapshot>
 *
 * When you make periodic snapshots of a volume, the snapshots are incremental, and only the blocks on the device that have
 * changed since your last snapshot are saved in the new snapshot. When you delete a snapshot, only the data not needed for
 * any other snapshot is removed. So regardless of which prior snapshots have been deleted, all active snapshots will have
 * access to all the information needed to restore the
 *
 * volume>
 *
 * You cannot delete a snapshot of the root device of an EBS volume used by a registered AMI. You must first de-register
 * the AMI before you can delete the
 *
 * snapshot>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-snapshot.html">Deleting an Amazon EBS Snapshot</a>
 * in the <i>Amazon Elastic Compute Cloud User
 */
DeleteSnapshotResponse * Ec2Client::deleteSnapshot(const DeleteSnapshotRequest &request)
{
    return qobject_cast<DeleteSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteSpotDatafeedSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the data feed for Spot
 */
DeleteSpotDatafeedSubscriptionResponse * Ec2Client::deleteSpotDatafeedSubscription(const DeleteSpotDatafeedSubscriptionRequest &request)
{
    return qobject_cast<DeleteSpotDatafeedSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteSubnetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified subnet. You must terminate all running instances in the subnet before you can delete the
 */
DeleteSubnetResponse * Ec2Client::deleteSubnet(const DeleteSubnetRequest &request)
{
    return qobject_cast<DeleteSubnetResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified set of tags from the specified set of
 *
 * resources>
 *
 * To list the current tags, use <a>DescribeTags</a>. For more information about tags, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging Your Resources</a> in the <i>Amazon
 * Elastic Compute Cloud User
 */
DeleteTagsResponse * Ec2Client::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified EBS volume. The volume must be in the <code>available</code> state (not attached to an
 *
 * instance)> <note>
 *
 * The volume may remain in the <code>deleting</code> state for several
 *
 * minutes> </note>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-deleting-volume.html">Deleting
 * an Amazon EBS Volume</a> in the <i>Amazon Elastic Compute Cloud User
 */
DeleteVolumeResponse * Ec2Client::deleteVolume(const DeleteVolumeRequest &request)
{
    return qobject_cast<DeleteVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteVpcResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified VPC. You must detach or delete all gateways and resources that are associated with the VPC before
 * you can delete it. For example, you must terminate all instances running in the VPC, delete all security groups
 * associated with the VPC (except the default one), delete all route tables associated with the VPC (except the default
 * one), and so
 */
DeleteVpcResponse * Ec2Client::deleteVpc(const DeleteVpcRequest &request)
{
    return qobject_cast<DeleteVpcResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteVpcEndpointConnectionNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more VPC endpoint connection
 */
DeleteVpcEndpointConnectionNotificationsResponse * Ec2Client::deleteVpcEndpointConnectionNotifications(const DeleteVpcEndpointConnectionNotificationsRequest &request)
{
    return qobject_cast<DeleteVpcEndpointConnectionNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteVpcEndpointServiceConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more VPC endpoint service configurations in your account. Before you delete the endpoint service
 * configuration, you must reject any <code>Available</code> or <code>PendingAcceptance</code> interface endpoint
 * connections that are attached to the
 */
DeleteVpcEndpointServiceConfigurationsResponse * Ec2Client::deleteVpcEndpointServiceConfigurations(const DeleteVpcEndpointServiceConfigurationsRequest &request)
{
    return qobject_cast<DeleteVpcEndpointServiceConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteVpcEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more specified VPC endpoints. Deleting a gateway endpoint also deletes the endpoint routes in the route
 * tables that were associated with the endpoint. Deleting an interface endpoint deletes the endpoint network
 */
DeleteVpcEndpointsResponse * Ec2Client::deleteVpcEndpoints(const DeleteVpcEndpointsRequest &request)
{
    return qobject_cast<DeleteVpcEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteVpcPeeringConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a VPC peering connection. Either the owner of the requester VPC or the owner of the accepter VPC can delete the
 * VPC peering connection if it's in the <code>active</code> state. The owner of the requester VPC can delete a VPC peering
 * connection in the <code>pending-acceptance</code> state. You cannot delete a VPC peering connection that's in the
 * <code>failed</code>
 */
DeleteVpcPeeringConnectionResponse * Ec2Client::deleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest &request)
{
    return qobject_cast<DeleteVpcPeeringConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteVpnConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified VPN
 *
 * connection>
 *
 * If you're deleting the VPC and its associated components, we recommend that you detach the virtual private gateway from
 * the VPC and delete the VPC before deleting the VPN connection. If you believe that the tunnel credentials for your VPN
 * connection have been compromised, you can delete the VPN connection and create a new one that has new keys, without
 * needing to delete the VPC or virtual private gateway. If you create a new VPN connection, you must reconfigure the
 * customer gateway using the new configuration information returned with the new VPN connection
 */
DeleteVpnConnectionResponse * Ec2Client::deleteVpnConnection(const DeleteVpnConnectionRequest &request)
{
    return qobject_cast<DeleteVpnConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteVpnConnectionRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified static route associated with a VPN connection between an existing virtual private gateway and a
 * VPN customer gateway. The static route allows traffic to be routed from the virtual private gateway to the VPN customer
 */
DeleteVpnConnectionRouteResponse * Ec2Client::deleteVpnConnectionRoute(const DeleteVpnConnectionRouteRequest &request)
{
    return qobject_cast<DeleteVpnConnectionRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeleteVpnGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified virtual private gateway. We recommend that before you delete a virtual private gateway, you detach
 * it from the VPC and delete the VPN connection. Note that you don't need to delete the virtual private gateway if you
 * plan to delete and recreate the VPN connection between your VPC and your
 */
DeleteVpnGatewayResponse * Ec2Client::deleteVpnGateway(const DeleteVpnGatewayRequest &request)
{
    return qobject_cast<DeleteVpnGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DeregisterImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the specified AMI. After you deregister an AMI, it can't be used to launch new instances; however, it
 * doesn't affect any instances that you've already launched from the AMI. You'll continue to incur usage costs for those
 * instances until you terminate
 *
 * them>
 *
 * When you deregister an Amazon EBS-backed AMI, it doesn't affect the snapshot that was created for the root volume of the
 * instance during the AMI creation process. When you deregister an instance store-backed AMI, it doesn't affect the files
 * that you uploaded to Amazon S3 when you created the
 */
DeregisterImageResponse * Ec2Client::deregisterImage(const DeregisterImageRequest &request)
{
    return qobject_cast<DeregisterImageResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeAccountAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes attributes of your AWS account. The following are the supported account
 *
 * attributes> <ul> <li>
 *
 * <code>supported-platforms</code>: Indicates whether your account can launch instances into EC2-Classic and EC2-VPC, or
 * only into
 *
 * EC2-VPC> </li> <li>
 *
 * <code>default-vpc</code>: The ID of the default VPC for your account, or
 *
 * <code>none</code>> </li> <li>
 *
 * <code>max-instances</code>: The maximum number of On-Demand Instances that you can
 *
 * run> </li> <li>
 *
 * <code>vpc-max-security-groups-per-interface</code>: The maximum number of security groups that you can assign to a
 * network
 *
 * interface> </li> <li>
 *
 * <code>max-elastic-ips</code>: The maximum number of Elastic IP addresses that you can allocate for use with EC2-Classic.
 *
 * </p </li> <li>
 *
 * <code>vpc-max-elastic-ips</code>: The maximum number of Elastic IP addresses that you can allocate for use with
 */
DescribeAccountAttributesResponse * Ec2Client::describeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    return qobject_cast<DescribeAccountAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeAddressesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your Elastic IP
 *
 * addresses>
 *
 * An Elastic IP address is for use in either the EC2-Classic platform or in a VPC. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP Addresses</a> in the
 * <i>Amazon Elastic Compute Cloud User
 */
DescribeAddressesResponse * Ec2Client::describeAddresses(const DescribeAddressesRequest &request)
{
    return qobject_cast<DescribeAddressesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeAggregateIdFormatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the longer ID format settings for all resource types in a specific region. This request is useful for
 * performing a quick audit to determine whether a specific region is fully opted in for longer IDs (17-character
 *
 * IDs)>
 *
 * This request only returns information about resource types that support longer
 *
 * IDs>
 *
 * The following resource types support longer IDs: <code>bundle</code> | <code>conversion-task</code> |
 * <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
 * <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
 * <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> |
 * <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> |
 * <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> | <code>route-table-association</code> |
 * <code>security-group</code> | <code>snapshot</code> | <code>subnet</code> | <code>subnet-cidr-block-association</code> |
 * <code>volume</code> | <code>vpc</code> | <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> |
 * <code>vpc-peering-connection</code> | <code>vpn-connection</code> |
 */
DescribeAggregateIdFormatResponse * Ec2Client::describeAggregateIdFormat(const DescribeAggregateIdFormatRequest &request)
{
    return qobject_cast<DescribeAggregateIdFormatResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeAvailabilityZonesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of the Availability Zones that are available to you. The results include zones only for the region
 * you're currently using. If there is an event impacting an Availability Zone, you can use this request to view the state
 * and any provided message for that Availability
 *
 * Zone>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html">Regions and Availability
 * Zones</a> in the <i>Amazon Elastic Compute Cloud User
 */
DescribeAvailabilityZonesResponse * Ec2Client::describeAvailabilityZones(const DescribeAvailabilityZonesRequest &request)
{
    return qobject_cast<DescribeAvailabilityZonesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeBundleTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your bundling
 *
 * tasks> <note>
 *
 * Completed bundle tasks are listed for only a limited time. If your bundle task is no longer in the list, you can still
 * register an AMI from it. Just use <code>RegisterImage</code> with the Amazon S3 bucket name and image manifest name you
 * provided to the bundle
 */
DescribeBundleTasksResponse * Ec2Client::describeBundleTasks(const DescribeBundleTasksRequest &request)
{
    return qobject_cast<DescribeBundleTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeClassicLinkInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your linked EC2-Classic instances. This request only returns information about EC2-Classic
 * instances linked to a VPC through ClassicLink; you cannot use this request to return information about other
 */
DescribeClassicLinkInstancesResponse * Ec2Client::describeClassicLinkInstances(const DescribeClassicLinkInstancesRequest &request)
{
    return qobject_cast<DescribeClassicLinkInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeConversionTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your conversion tasks. For more information, see the <a
 * href="http://docs.aws.amazon.com/vm-import/latest/userguide/">VM Import/Export User
 *
 * Guide</a>>
 *
 * For information about the import manifest referenced by this API action, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM Import
 */
DescribeConversionTasksResponse * Ec2Client::describeConversionTasks(const DescribeConversionTasksRequest &request)
{
    return qobject_cast<DescribeConversionTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeCustomerGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your VPN customer
 *
 * gateways>
 *
 * For more information about VPN customer gateways, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS Managed VPN Connections</a> in the
 * <i>Amazon Virtual Private Cloud User
 */
DescribeCustomerGatewaysResponse * Ec2Client::describeCustomerGateways(const DescribeCustomerGatewaysRequest &request)
{
    return qobject_cast<DescribeCustomerGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeDhcpOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your DHCP options
 *
 * sets>
 *
 * For more information about DHCP options sets, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_DHCP_Options.html">DHCP Options Sets</a> in the
 * <i>Amazon Virtual Private Cloud User
 */
DescribeDhcpOptionsResponse * Ec2Client::describeDhcpOptions(const DescribeDhcpOptionsRequest &request)
{
    return qobject_cast<DescribeDhcpOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeEgressOnlyInternetGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your egress-only Internet
 */
DescribeEgressOnlyInternetGatewaysResponse * Ec2Client::describeEgressOnlyInternetGateways(const DescribeEgressOnlyInternetGatewaysRequest &request)
{
    return qobject_cast<DescribeEgressOnlyInternetGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeElasticGpusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the Elastic GPUs associated with your instances. For more information about Elastic GPUs, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/elastic-gpus.html">Amazon EC2 Elastic
 */
DescribeElasticGpusResponse * Ec2Client::describeElasticGpus(const DescribeElasticGpusRequest &request)
{
    return qobject_cast<DescribeElasticGpusResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeExportTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your export
 */
DescribeExportTasksResponse * Ec2Client::describeExportTasks(const DescribeExportTasksRequest &request)
{
    return qobject_cast<DescribeExportTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeFlowLogsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more flow logs. To view the information in your flow logs (the log streams for the network interfaces),
 * you must use the CloudWatch Logs console or the CloudWatch Logs
 */
DescribeFlowLogsResponse * Ec2Client::describeFlowLogs(const DescribeFlowLogsRequest &request)
{
    return qobject_cast<DescribeFlowLogsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeFpgaImageAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified attribute of the specified Amazon FPGA Image
 */
DescribeFpgaImageAttributeResponse * Ec2Client::describeFpgaImageAttribute(const DescribeFpgaImageAttributeRequest &request)
{
    return qobject_cast<DescribeFpgaImageAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeFpgaImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more available Amazon FPGA Images (AFIs). These include public AFIs, private AFIs that you own, and
 * AFIs owned by other AWS accounts for which you have load
 */
DescribeFpgaImagesResponse * Ec2Client::describeFpgaImages(const DescribeFpgaImagesRequest &request)
{
    return qobject_cast<DescribeFpgaImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeHostReservationOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the Dedicated Host Reservations that are available to
 *
 * purchase>
 *
 * The results describe all the Dedicated Host Reservation offerings, including offerings that may not match the instance
 * family and region of your Dedicated Hosts. When purchasing an offering, ensure that the the instance family and region
 * of the offering matches that of the Dedicated Host/s it will be associated with. For an overview of supported instance
 * types, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-overview.html">Dedicated Hosts
 * Overview</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
 */
DescribeHostReservationOfferingsResponse * Ec2Client::describeHostReservationOfferings(const DescribeHostReservationOfferingsRequest &request)
{
    return qobject_cast<DescribeHostReservationOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeHostReservationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes Dedicated Host Reservations which are associated with Dedicated Hosts in your
 */
DescribeHostReservationsResponse * Ec2Client::describeHostReservations(const DescribeHostReservationsRequest &request)
{
    return qobject_cast<DescribeHostReservationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeHostsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your Dedicated
 *
 * Hosts>
 *
 * The results describe only the Dedicated Hosts in the region you're currently using. All listed instances consume
 * capacity on your Dedicated Host. Dedicated Hosts that have recently been released will be listed with the state
 */
DescribeHostsResponse * Ec2Client::describeHosts(const DescribeHostsRequest &request)
{
    return qobject_cast<DescribeHostsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeIamInstanceProfileAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes your IAM instance profile
 */
DescribeIamInstanceProfileAssociationsResponse * Ec2Client::describeIamInstanceProfileAssociations(const DescribeIamInstanceProfileAssociationsRequest &request)
{
    return qobject_cast<DescribeIamInstanceProfileAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeIdFormatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the ID format settings for your resources on a per-region basis, for example, to view which resource types are
 * enabled for longer IDs. This request only returns information about resource types whose ID formats can be modified; it
 * does not return information about other resource
 *
 * types>
 *
 * The following resource types support longer IDs: <code>bundle</code> | <code>conversion-task</code> |
 * <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
 * <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
 * <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> |
 * <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> |
 * <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> | <code>route-table-association</code> |
 * <code>security-group</code> | <code>snapshot</code> | <code>subnet</code> | <code>subnet-cidr-block-association</code> |
 * <code>volume</code> | <code>vpc</code> | <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> |
 * <code>vpc-peering-connection</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>.
 *
 * </p
 *
 * These settings apply to the IAM user who makes the request; they do not apply to the entire AWS account. By default, an
 * IAM user defaults to the same settings as the root user, unless they explicitly override the settings by running the
 * <a>ModifyIdFormat</a> command. Resources created with longer IDs are visible to all IAM users, regardless of these
 * settings and provided that they have permission to use the relevant <code>Describe</code> command for the resource
 */
DescribeIdFormatResponse * Ec2Client::describeIdFormat(const DescribeIdFormatRequest &request)
{
    return qobject_cast<DescribeIdFormatResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeIdentityIdFormatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the ID format settings for resources for the specified IAM user, IAM role, or root user. For example, you can
 * view the resource types that are enabled for longer IDs. This request only returns information about resource types
 * whose ID formats can be modified; it does not return information about other resource types. For more information, see
 * <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource IDs</a> in the <i>Amazon Elastic
 * Compute Cloud User Guide</i>.
 *
 * </p
 *
 * The following resource types support longer IDs: <code>bundle</code> | <code>conversion-task</code> |
 * <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
 * <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
 * <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> |
 * <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> |
 * <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> | <code>route-table-association</code> |
 * <code>security-group</code> | <code>snapshot</code> | <code>subnet</code> | <code>subnet-cidr-block-association</code> |
 * <code>volume</code> | <code>vpc</code> | <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> |
 * <code>vpc-peering-connection</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>.
 *
 * </p
 *
 * These settings apply to the principal specified in the request. They do not apply to the principal that makes the
 */
DescribeIdentityIdFormatResponse * Ec2Client::describeIdentityIdFormat(const DescribeIdentityIdFormatRequest &request)
{
    return qobject_cast<DescribeIdentityIdFormatResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeImageAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified attribute of the specified AMI. You can specify only one attribute at a
 */
DescribeImageAttributeResponse * Ec2Client::describeImageAttribute(const DescribeImageAttributeRequest &request)
{
    return qobject_cast<DescribeImageAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of the images (AMIs, AKIs, and ARIs) available to you. Images available to you include public
 * images, private images that you own, and private images owned by other AWS accounts but for which you have explicit
 * launch
 *
 * permissions> <note>
 *
 * Deregistered images are included in the returned results for an unspecified interval after
 */
DescribeImagesResponse * Ec2Client::describeImages(const DescribeImagesRequest &request)
{
    return qobject_cast<DescribeImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeImportImageTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays details about an import virtual machine or import snapshot tasks that are already
 */
DescribeImportImageTasksResponse * Ec2Client::describeImportImageTasks(const DescribeImportImageTasksRequest &request)
{
    return qobject_cast<DescribeImportImageTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeImportSnapshotTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes your import snapshot
 */
DescribeImportSnapshotTasksResponse * Ec2Client::describeImportSnapshotTasks(const DescribeImportSnapshotTasksRequest &request)
{
    return qobject_cast<DescribeImportSnapshotTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeInstanceAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified attribute of the specified instance. You can specify only one attribute at a time. Valid
 * attribute values are: <code>instanceType</code> | <code>kernel</code> | <code>ramdisk</code> | <code>userData</code> |
 * <code>disableApiTermination</code> | <code>instanceInitiatedShutdownBehavior</code> | <code>rootDeviceName</code> |
 * <code>blockDeviceMapping</code> | <code>productCodes</code> | <code>sourceDestCheck</code> | <code>groupSet</code> |
 * <code>ebsOptimized</code> | <code>sriovNetSupport</code>
 */
DescribeInstanceAttributeResponse * Ec2Client::describeInstanceAttribute(const DescribeInstanceAttributeRequest &request)
{
    return qobject_cast<DescribeInstanceAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeInstanceCreditSpecificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the credit option for CPU usage of one or more of your T2 instances. The credit options are
 * <code>standard</code> and
 *
 * <code>unlimited</code>>
 *
 * If you do not specify an instance ID, Amazon EC2 returns only the T2 instances with the <code>unlimited</code> credit
 * option. If you specify one or more instance IDs, Amazon EC2 returns the credit option (<code>standard</code> or
 * <code>unlimited</code>) of those instances. If you specify an instance ID that is not valid, such as an instance that is
 * not a T2 instance, an error is
 *
 * returned>
 *
 * Recently terminated instances might appear in the returned results. This interval is usually less than one
 *
 * hour>
 *
 * If an Availability Zone is experiencing a service disruption and you specify instance IDs in the affected zone, or do
 * not specify any instance IDs at all, the call fails. If you specify only instance IDs in an unaffected zone, the call
 * works
 *
 * normally>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/t2-instances.html">T2
 * Instances</a> in the <i>Amazon Elastic Compute Cloud User
 */
DescribeInstanceCreditSpecificationsResponse * Ec2Client::describeInstanceCreditSpecifications(const DescribeInstanceCreditSpecificationsRequest &request)
{
    return qobject_cast<DescribeInstanceCreditSpecificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeInstanceStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of one or more instances. By default, only running instances are described, unless you specifically
 * indicate to return the status of all
 *
 * instances>
 *
 * Instance status includes the following
 *
 * components> <ul> <li>
 *
 * <b>Status checks</b> - Amazon EC2 performs status checks on running EC2 instances to identify hardware and software
 * issues. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-system-instance-status-check.html">Status Checks for
 * Your Instances</a> and <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstances.html">Troubleshooting Instances with
 * Failed Status Checks</a> in the <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>> </li> <li>
 *
 * <b>Scheduled events</b> - Amazon EC2 can schedule events (such as reboot, stop, or terminate) for your instances related
 * to hardware issues, software updates, or system maintenance. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-instances-status-check_sched.html">Scheduled Events
 * for Your Instances</a> in the <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>> </li> <li>
 *
 * <b>Instance state</b> - You can manage your instances from the moment you launch them through their termination. For
 * more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance
 * Lifecycle</a> in the <i>Amazon Elastic Compute Cloud User
 */
DescribeInstanceStatusResponse * Ec2Client::describeInstanceStatus(const DescribeInstanceStatusRequest &request)
{
    return qobject_cast<DescribeInstanceStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your
 *
 * instances>
 *
 * If you specify one or more instance IDs, Amazon EC2 returns information for those instances. If you do not specify
 * instance IDs, Amazon EC2 returns information for all relevant instances. If you specify an instance ID that is not
 * valid, an error is returned. If you specify an instance that you do not own, it is not included in the returned
 *
 * results>
 *
 * Recently terminated instances might appear in the returned results. This interval is usually less than one
 *
 * hour>
 *
 * If you describe instances in the rare case where an Availability Zone is experiencing a service disruption and you
 * specify instance IDs that are in the affected zone, or do not specify any instance IDs at all, the call fails. If you
 * describe instances and specify only instance IDs that are in an unaffected zone, the call works
 */
DescribeInstancesResponse * Ec2Client::describeInstances(const DescribeInstancesRequest &request)
{
    return qobject_cast<DescribeInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeInternetGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your Internet
 */
DescribeInternetGatewaysResponse * Ec2Client::describeInternetGateways(const DescribeInternetGatewaysRequest &request)
{
    return qobject_cast<DescribeInternetGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeKeyPairsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your key
 *
 * pairs>
 *
 * For more information about key pairs, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key Pairs</a> in the <i>Amazon Elastic
 * Compute Cloud User
 */
DescribeKeyPairsResponse * Ec2Client::describeKeyPairs(const DescribeKeyPairsRequest &request)
{
    return qobject_cast<DescribeKeyPairsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeLaunchTemplateVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more versions of a specified launch template. You can describe all versions, individual versions, or a
 * range of
 */
DescribeLaunchTemplateVersionsResponse * Ec2Client::describeLaunchTemplateVersions(const DescribeLaunchTemplateVersionsRequest &request)
{
    return qobject_cast<DescribeLaunchTemplateVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeLaunchTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more launch
 */
DescribeLaunchTemplatesResponse * Ec2Client::describeLaunchTemplates(const DescribeLaunchTemplatesRequest &request)
{
    return qobject_cast<DescribeLaunchTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeMovingAddressesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes your Elastic IP addresses that are being moved to the EC2-VPC platform, or that are being restored to the
 * EC2-Classic platform. This request does not return information about any other Elastic IP addresses in your
 */
DescribeMovingAddressesResponse * Ec2Client::describeMovingAddresses(const DescribeMovingAddressesRequest &request)
{
    return qobject_cast<DescribeMovingAddressesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeNatGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of the your NAT
 */
DescribeNatGatewaysResponse * Ec2Client::describeNatGateways(const DescribeNatGatewaysRequest &request)
{
    return qobject_cast<DescribeNatGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeNetworkAclsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your network
 *
 * ACLs>
 *
 * For more information about network ACLs, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network ACLs</a> in the <i>Amazon Virtual
 * Private Cloud User
 */
DescribeNetworkAclsResponse * Ec2Client::describeNetworkAcls(const DescribeNetworkAclsRequest &request)
{
    return qobject_cast<DescribeNetworkAclsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeNetworkInterfaceAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a network interface attribute. You can specify only one attribute at a
 */
DescribeNetworkInterfaceAttributeResponse * Ec2Client::describeNetworkInterfaceAttribute(const DescribeNetworkInterfaceAttributeRequest &request)
{
    return qobject_cast<DescribeNetworkInterfaceAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeNetworkInterfacePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the permissions for your network interfaces.
 */
DescribeNetworkInterfacePermissionsResponse * Ec2Client::describeNetworkInterfacePermissions(const DescribeNetworkInterfacePermissionsRequest &request)
{
    return qobject_cast<DescribeNetworkInterfacePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeNetworkInterfacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your network
 */
DescribeNetworkInterfacesResponse * Ec2Client::describeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request)
{
    return qobject_cast<DescribeNetworkInterfacesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribePlacementGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your placement groups. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a> in the <i>Amazon
 * Elastic Compute Cloud User
 */
DescribePlacementGroupsResponse * Ec2Client::describePlacementGroups(const DescribePlacementGroupsRequest &request)
{
    return qobject_cast<DescribePlacementGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribePrefixListsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes available AWS services in a prefix list format, which includes the prefix list name and prefix list ID of the
 * service and the IP address range for the service. A prefix list ID is required for creating an outbound security group
 * rule that allows traffic from a VPC to access an AWS service through a gateway VPC
 */
DescribePrefixListsResponse * Ec2Client::describePrefixLists(const DescribePrefixListsRequest &request)
{
    return qobject_cast<DescribePrefixListsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribePrincipalIdFormatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the ID format settings for the root user and all IAM roles and IAM users that have explicitly specified a
 * longer ID (17-character ID) preference.
 *
 * </p
 *
 * By default, all IAM roles and IAM users default to the same ID settings as the root user, unless they explicitly
 * override the settings. This request is useful for identifying those IAM users and IAM roles that have overridden the
 * default ID
 *
 * settings>
 *
 * The following resource types support longer IDs: <code>bundle</code> | <code>conversion-task</code> |
 * <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
 * <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
 * <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> |
 * <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> |
 * <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> | <code>route-table-association</code> |
 * <code>security-group</code> | <code>snapshot</code> | <code>subnet</code> | <code>subnet-cidr-block-association</code> |
 * <code>volume</code> | <code>vpc</code> | <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> |
 * <code>vpc-peering-connection</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>.
 */
DescribePrincipalIdFormatResponse * Ec2Client::describePrincipalIdFormat(const DescribePrincipalIdFormatRequest &request)
{
    return qobject_cast<DescribePrincipalIdFormatResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeRegionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more regions that are currently available to
 *
 * you>
 *
 * For a list of the regions supported by Amazon EC2, see <a
 * href="http://docs.aws.amazon.com/general/latest/gr/rande.html#ec2_region">Regions and
 */
DescribeRegionsResponse * Ec2Client::describeRegions(const DescribeRegionsRequest &request)
{
    return qobject_cast<DescribeRegionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeReservedInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of the Reserved Instances that you
 *
 * purchased>
 *
 * For more information about Reserved Instances, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
 * Instances</a> in the <i>Amazon Elastic Compute Cloud User
 */
DescribeReservedInstancesResponse * Ec2Client::describeReservedInstances(const DescribeReservedInstancesRequest &request)
{
    return qobject_cast<DescribeReservedInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeReservedInstancesListingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes your account's Reserved Instance listings in the Reserved Instance
 *
 * Marketplace>
 *
 * The Reserved Instance Marketplace matches sellers who want to resell Reserved Instance capacity that they no longer need
 * with buyers who want to purchase additional capacity. Reserved Instances bought and sold through the Reserved Instance
 * Marketplace work like any other Reserved
 *
 * Instances>
 *
 * As a seller, you choose to list some or all of your Reserved Instances, and you specify the upfront price to receive for
 * them. Your Reserved Instances are then listed in the Reserved Instance Marketplace and are available for
 *
 * purchase>
 *
 * As a buyer, you specify the configuration of the Reserved Instance to purchase, and the Marketplace matches what you're
 * searching for with what's available. The Marketplace first sells the lowest priced Reserved Instances to you, and
 * continues to sell available Reserved Instance listings to you until your demand is met. You are charged based on the
 * total price of all of the listings that you
 *
 * purchase>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
 * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
 */
DescribeReservedInstancesListingsResponse * Ec2Client::describeReservedInstancesListings(const DescribeReservedInstancesListingsRequest &request)
{
    return qobject_cast<DescribeReservedInstancesListingsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeReservedInstancesModificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the modifications made to your Reserved Instances. If no parameter is specified, information about all your
 * Reserved Instances modification requests is returned. If a modification ID is specified, only information about the
 * specific modification is
 *
 * returned>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
 * Reserved Instances</a> in the Amazon Elastic Compute Cloud User
 */
DescribeReservedInstancesModificationsResponse * Ec2Client::describeReservedInstancesModifications(const DescribeReservedInstancesModificationsRequest &request)
{
    return qobject_cast<DescribeReservedInstancesModificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeReservedInstancesOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes Reserved Instance offerings that are available for purchase. With Reserved Instances, you purchase the right
 * to launch instances for a period of time. During that time period, you do not receive insufficient capacity errors, and
 * you pay a lower usage rate than the rate charged for On-Demand instances for the actual time
 *
 * used>
 *
 * If you have listed your own Reserved Instances for sale in the Reserved Instance Marketplace, they will be excluded from
 * these results. This is to ensure that you do not purchase your own Reserved
 *
 * Instances>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved
 * Instance Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
 */
DescribeReservedInstancesOfferingsResponse * Ec2Client::describeReservedInstancesOfferings(const DescribeReservedInstancesOfferingsRequest &request)
{
    return qobject_cast<DescribeReservedInstancesOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeRouteTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your route
 *
 * tables>
 *
 * Each subnet in your VPC must be associated with a route table. If a subnet is not explicitly associated with any route
 * table, it is implicitly associated with the main route table. This command does not return the subnet ID for implicit
 *
 * associations>
 *
 * For more information about route tables, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route Tables</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
DescribeRouteTablesResponse * Ec2Client::describeRouteTables(const DescribeRouteTablesRequest &request)
{
    return qobject_cast<DescribeRouteTablesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeScheduledInstanceAvailabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Finds available schedules that meet the specified
 *
 * criteria>
 *
 * You can search for an available schedule no more than 3 months in advance. You must meet the minimum required duration
 * of 1,200 hours per year. For example, the minimum daily schedule is 4 hours, the minimum weekly schedule is 24 hours,
 * and the minimum monthly schedule is 100
 *
 * hours>
 *
 * After you find a schedule that meets your needs, call <a>PurchaseScheduledInstances</a> to purchase Scheduled Instances
 * with that
 */
DescribeScheduledInstanceAvailabilityResponse * Ec2Client::describeScheduledInstanceAvailability(const DescribeScheduledInstanceAvailabilityRequest &request)
{
    return qobject_cast<DescribeScheduledInstanceAvailabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeScheduledInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your Scheduled
 */
DescribeScheduledInstancesResponse * Ec2Client::describeScheduledInstances(const DescribeScheduledInstancesRequest &request)
{
    return qobject_cast<DescribeScheduledInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSecurityGroupReferencesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * [EC2-VPC only] Describes the VPCs on the other side of a VPC peering connection that are referencing the security groups
 * you've specified in this
 */
DescribeSecurityGroupReferencesResponse * Ec2Client::describeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest &request)
{
    return qobject_cast<DescribeSecurityGroupReferencesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your security
 *
 * groups>
 *
 * A security group is for use with instances either in the EC2-Classic platform or in a specific VPC. For more
 * information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Amazon EC2
 * Security Groups</a> in the <i>Amazon Elastic Compute Cloud User Guide</i> and <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_SecurityGroups.html">Security Groups for Your VPC</a> in
 * the <i>Amazon Virtual Private Cloud User
 */
DescribeSecurityGroupsResponse * Ec2Client::describeSecurityGroups(const DescribeSecurityGroupsRequest &request)
{
    return qobject_cast<DescribeSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSnapshotAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified attribute of the specified snapshot. You can specify only one attribute at a
 *
 * time>
 *
 * For more information about EBS snapshots, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon EBS Snapshots</a> in the <i>Amazon
 * Elastic Compute Cloud User
 */
DescribeSnapshotAttributeResponse * Ec2Client::describeSnapshotAttribute(const DescribeSnapshotAttributeRequest &request)
{
    return qobject_cast<DescribeSnapshotAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of the EBS snapshots available to you. Available snapshots include public snapshots available for
 * any AWS account to launch, private snapshots that you own, and private snapshots owned by another AWS account but for
 * which you've been given explicit create volume
 *
 * permissions>
 *
 * The create volume permissions fall into the following
 *
 * categories> <ul> <li>
 *
 * <i>public</i>: The owner of the snapshot granted create volume permissions for the snapshot to the <code>all</code>
 * group. All AWS accounts have create volume permissions for these
 *
 * snapshots> </li> <li>
 *
 * <i>explicit</i>: The owner of the snapshot granted create volume permissions to a specific AWS
 *
 * account> </li> <li>
 *
 * <i>implicit</i>: An AWS account has implicit create volume permissions for all snapshots it
 *
 * owns> </li> </ul>
 *
 * The list of snapshots returned can be modified by specifying snapshot IDs, snapshot owners, or AWS accounts with create
 * volume permissions. If no options are specified, Amazon EC2 returns all snapshots for which you have create volume
 *
 * permissions>
 *
 * If you specify one or more snapshot IDs, only snapshots that have the specified IDs are returned. If you specify an
 * invalid snapshot ID, an error is returned. If you specify a snapshot ID for which you do not have access, it is not
 * included in the returned
 *
 * results>
 *
 * If you specify one or more snapshot owners using the <code>OwnerIds</code> option, only snapshots from the specified
 * owners and for which you have access are returned. The results can include the AWS account IDs of the specified owners,
 * <code>amazon</code> for snapshots owned by Amazon, or <code>self</code> for snapshots that you
 *
 * own>
 *
 * If you specify a list of restorable users, only snapshots with create snapshot permissions for those users are returned.
 * You can specify AWS account IDs (if you own the snapshots), <code>self</code> for snapshots for which you own or have
 * explicit permissions, or <code>all</code> for public
 *
 * snapshots>
 *
 * If you are describing a long list of snapshots, you can paginate the output to make the list more manageable. The
 * <code>MaxResults</code> parameter sets the maximum number of results returned in a single page. If the list of results
 * exceeds your <code>MaxResults</code> value, then that number of results is returned along with a <code>NextToken</code>
 * value that can be passed to a subsequent <code>DescribeSnapshots</code> request to retrieve the remaining
 *
 * results>
 *
 * For more information about EBS snapshots, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSSnapshots.html">Amazon EBS Snapshots</a> in the <i>Amazon
 * Elastic Compute Cloud User
 */
DescribeSnapshotsResponse * Ec2Client::describeSnapshots(const DescribeSnapshotsRequest &request)
{
    return qobject_cast<DescribeSnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSpotDatafeedSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the data feed for Spot Instances. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-data-feeds.html">Spot Instance Data Feed</a> in the
 * <i>Amazon Elastic Compute Cloud User
 */
DescribeSpotDatafeedSubscriptionResponse * Ec2Client::describeSpotDatafeedSubscription(const DescribeSpotDatafeedSubscriptionRequest &request)
{
    return qobject_cast<DescribeSpotDatafeedSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSpotFleetInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the running instances for the specified Spot
 */
DescribeSpotFleetInstancesResponse * Ec2Client::describeSpotFleetInstances(const DescribeSpotFleetInstancesRequest &request)
{
    return qobject_cast<DescribeSpotFleetInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSpotFleetRequestHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the events for the specified Spot Fleet request during the specified
 *
 * time>
 *
 * Spot Fleet events are delayed by up to 30 seconds before they can be described. This ensures that you can query by the
 * last evaluated time and not miss a recorded
 */
DescribeSpotFleetRequestHistoryResponse * Ec2Client::describeSpotFleetRequestHistory(const DescribeSpotFleetRequestHistoryRequest &request)
{
    return qobject_cast<DescribeSpotFleetRequestHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSpotFleetRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes your Spot Fleet
 *
 * requests>
 *
 * Spot Fleet requests are deleted 48 hours after they are canceled and their instances are
 */
DescribeSpotFleetRequestsResponse * Ec2Client::describeSpotFleetRequests(const DescribeSpotFleetRequestsRequest &request)
{
    return qobject_cast<DescribeSpotFleetRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSpotInstanceRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the Spot Instance requests that belong to your account. Spot Instances are instances that Amazon EC2 launches
 * when the Spot price that you specify exceeds the current Spot price. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot Instance Requests</a> in the <i>Amazon
 * Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * You can use <code>DescribeSpotInstanceRequests</code> to find a running Spot Instance by examining the response. If the
 * status of the Spot Instance is <code>fulfilled</code>, the instance ID appears in the response and contains the
 * identifier of the instance. Alternatively, you can use <a>DescribeInstances</a> with a filter to look for instances
 * where the instance lifecycle is
 *
 * <code>spot</code>>
 *
 * Spot Instance requests are deleted 4 hours after they are canceled and their instances are
 */
DescribeSpotInstanceRequestsResponse * Ec2Client::describeSpotInstanceRequests(const DescribeSpotInstanceRequestsRequest &request)
{
    return qobject_cast<DescribeSpotInstanceRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSpotPriceHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the Spot price history. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-spot-instances-history.html">Spot Instance Pricing
 * History</a> in the <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * When you specify a start and end time, this operation returns the prices of the instance types within the time range
 * that you specified and the time when the price changed. The price is valid within the time period that you specified;
 * the response merely indicates the last time that the price
 */
DescribeSpotPriceHistoryResponse * Ec2Client::describeSpotPriceHistory(const DescribeSpotPriceHistoryRequest &request)
{
    return qobject_cast<DescribeSpotPriceHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeStaleSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * [EC2-VPC only] Describes the stale security group rules for security groups in a specified VPC. Rules are stale when
 * they reference a deleted security group in a peer VPC, or a security group in a peer VPC for which the VPC peering
 * connection has been
 */
DescribeStaleSecurityGroupsResponse * Ec2Client::describeStaleSecurityGroups(const DescribeStaleSecurityGroupsRequest &request)
{
    return qobject_cast<DescribeStaleSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeSubnetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your
 *
 * subnets>
 *
 * For more information about subnets, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Subnets.html">Your VPC and Subnets</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
DescribeSubnetsResponse * Ec2Client::describeSubnets(const DescribeSubnetsRequest &request)
{
    return qobject_cast<DescribeSubnetsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of the tags for your EC2
 *
 * resources>
 *
 * For more information about tags, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging Your Resources</a> in the <i>Amazon
 * Elastic Compute Cloud User
 */
DescribeTagsResponse * Ec2Client::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVolumeAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified attribute of the specified volume. You can specify only one attribute at a
 *
 * time>
 *
 * For more information about EBS volumes, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon EBS Volumes</a> in the <i>Amazon
 * Elastic Compute Cloud User
 */
DescribeVolumeAttributeResponse * Ec2Client::describeVolumeAttribute(const DescribeVolumeAttributeRequest &request)
{
    return qobject_cast<DescribeVolumeAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVolumeStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of the specified volumes. Volume status provides the result of the checks performed on your volumes
 * to determine events that can impair the performance of your volumes. The performance of a volume can be affected if an
 * issue occurs on the volume's underlying host. If the volume's underlying host experiences a power outage or system
 * issue, after the system is restored, there could be data inconsistencies on the volume. Volume events notify you if this
 * occurs. Volume actions notify you if any action needs to be taken in response to the
 *
 * event>
 *
 * The <code>DescribeVolumeStatus</code> operation provides the following information about the specified
 *
 * volumes>
 *
 * <i>Status</i>: Reflects the current status of the volume. The possible values are <code>ok</code>, <code>impaired</code>
 * , <code>warning</code>, or <code>insufficient-data</code>. If all checks pass, the overall status of the volume is
 * <code>ok</code>. If the check fails, the overall status is <code>impaired</code>. If the status is
 * <code>insufficient-data</code>, then the checks may still be taking place on your volume at the time. We recommend that
 * you retry the request. For more information on volume status, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitoring-volume-status.html">Monitoring the Status of Your
 *
 * Volumes</a>>
 *
 * <i>Events</i>: Reflect the cause of a volume status and may require you to take action. For example, if your volume
 * returns an <code>impaired</code> status, then the volume event might be <code>potential-data-inconsistency</code>. This
 * means that your volume has been affected by an issue with the underlying host, has all I/O operations disabled, and may
 * have inconsistent
 *
 * data>
 *
 * <i>Actions</i>: Reflect the actions you may have to take in response to an event. For example, if the status of the
 * volume is <code>impaired</code> and the volume event shows <code>potential-data-inconsistency</code>, then the action
 * shows <code>enable-volume-io</code>. This means that you may want to enable the I/O operations for the volume by calling
 * the <a>EnableVolumeIO</a> action and then check the volume for data
 *
 * consistency> <note>
 *
 * Volume status is based on the volume status checks, and does not reflect the volume state. Therefore, volume status does
 * not indicate volumes in the <code>error</code> state (for example, when a volume is incapable of accepting
 */
DescribeVolumeStatusResponse * Ec2Client::describeVolumeStatus(const DescribeVolumeStatusRequest &request)
{
    return qobject_cast<DescribeVolumeStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVolumesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified EBS
 *
 * volumes>
 *
 * If you are describing a long list of volumes, you can paginate the output to make the list more manageable. The
 * <code>MaxResults</code> parameter sets the maximum number of results returned in a single page. If the list of results
 * exceeds your <code>MaxResults</code> value, then that number of results is returned along with a <code>NextToken</code>
 * value that can be passed to a subsequent <code>DescribeVolumes</code> request to retrieve the remaining
 *
 * results>
 *
 * For more information about EBS volumes, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumes.html">Amazon EBS Volumes</a> in the <i>Amazon
 * Elastic Compute Cloud User
 */
DescribeVolumesResponse * Ec2Client::describeVolumes(const DescribeVolumesRequest &request)
{
    return qobject_cast<DescribeVolumesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVolumesModificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reports the current modification status of EBS
 *
 * volumes>
 *
 * Current-generation EBS volumes support modification of attributes including type, size, and (for <code>io1</code>
 * volumes) IOPS provisioning while either attached to or detached from an instance. Following an action from the API or
 * the console to modify a volume, the status of the modification may be <code>modifying</code>, <code>optimizing</code>,
 * <code>completed</code>, or <code>failed</code>. If a volume has never been modified, then certain elements of the
 * returned <code>VolumeModification</code> objects are null.
 *
 * </p
 *
 * You can also use CloudWatch Events to check the status of a modification to an EBS volume. For information about
 * CloudWatch Events, see the <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon CloudWatch Events
 * User Guide</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#monitoring_mods">Monitoring Volume
 * Modifications"</a>.
 */
DescribeVolumesModificationsResponse * Ec2Client::describeVolumesModifications(const DescribeVolumesModificationsRequest &request)
{
    return qobject_cast<DescribeVolumesModificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified attribute of the specified VPC. You can specify only one attribute at a
 */
DescribeVpcAttributeResponse * Ec2Client::describeVpcAttribute(const DescribeVpcAttributeRequest &request)
{
    return qobject_cast<DescribeVpcAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcClassicLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the ClassicLink status of one or more
 */
DescribeVpcClassicLinkResponse * Ec2Client::describeVpcClassicLink(const DescribeVpcClassicLinkRequest &request)
{
    return qobject_cast<DescribeVpcClassicLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcClassicLinkDnsSupportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the ClassicLink DNS support status of one or more VPCs. If enabled, the DNS hostname of a linked EC2-Classic
 * instance resolves to its private IP address when addressed from an instance in the VPC to which it's linked. Similarly,
 * the DNS hostname of an instance in a VPC resolves to its private IP address when addressed from a linked EC2-Classic
 * instance. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a> in the <i>Amazon Elastic
 * Compute Cloud User
 */
DescribeVpcClassicLinkDnsSupportResponse * Ec2Client::describeVpcClassicLinkDnsSupport(const DescribeVpcClassicLinkDnsSupportRequest &request)
{
    return qobject_cast<DescribeVpcClassicLinkDnsSupportResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcEndpointConnectionNotificationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the connection notifications for VPC endpoints and VPC endpoint
 */
DescribeVpcEndpointConnectionNotificationsResponse * Ec2Client::describeVpcEndpointConnectionNotifications(const DescribeVpcEndpointConnectionNotificationsRequest &request)
{
    return qobject_cast<DescribeVpcEndpointConnectionNotificationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcEndpointConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the VPC endpoint connections to your VPC endpoint services, including any endpoints that are pending your
 */
DescribeVpcEndpointConnectionsResponse * Ec2Client::describeVpcEndpointConnections(const DescribeVpcEndpointConnectionsRequest &request)
{
    return qobject_cast<DescribeVpcEndpointConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcEndpointServiceConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the VPC endpoint service configurations in your account (your
 */
DescribeVpcEndpointServiceConfigurationsResponse * Ec2Client::describeVpcEndpointServiceConfigurations(const DescribeVpcEndpointServiceConfigurationsRequest &request)
{
    return qobject_cast<DescribeVpcEndpointServiceConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcEndpointServicePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the principals (service consumers) that are permitted to discover your VPC endpoint
 */
DescribeVpcEndpointServicePermissionsResponse * Ec2Client::describeVpcEndpointServicePermissions(const DescribeVpcEndpointServicePermissionsRequest &request)
{
    return qobject_cast<DescribeVpcEndpointServicePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcEndpointServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes available services to which you can create a VPC
 */
DescribeVpcEndpointServicesResponse * Ec2Client::describeVpcEndpointServices(const DescribeVpcEndpointServicesRequest &request)
{
    return qobject_cast<DescribeVpcEndpointServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your VPC
 */
DescribeVpcEndpointsResponse * Ec2Client::describeVpcEndpoints(const DescribeVpcEndpointsRequest &request)
{
    return qobject_cast<DescribeVpcEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcPeeringConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your VPC peering
 */
DescribeVpcPeeringConnectionsResponse * Ec2Client::describeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest &request)
{
    return qobject_cast<DescribeVpcPeeringConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpcsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your
 */
DescribeVpcsResponse * Ec2Client::describeVpcs(const DescribeVpcsRequest &request)
{
    return qobject_cast<DescribeVpcsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpnConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your VPN
 *
 * connections>
 *
 * For more information about VPN connections, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS Managed VPN Connections</a> in the
 * <i>Amazon Virtual Private Cloud User
 */
DescribeVpnConnectionsResponse * Ec2Client::describeVpnConnections(const DescribeVpnConnectionsRequest &request)
{
    return qobject_cast<DescribeVpnConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DescribeVpnGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your virtual private
 *
 * gateways>
 *
 * For more information about virtual private gateways, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html">AWS Managed VPN Connections</a> in the
 * <i>Amazon Virtual Private Cloud User
 */
DescribeVpnGatewaysResponse * Ec2Client::describeVpnGateways(const DescribeVpnGatewaysRequest &request)
{
    return qobject_cast<DescribeVpnGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DetachClassicLinkVpcResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unlinks (detaches) a linked EC2-Classic instance from a VPC. After the instance has been unlinked, the VPC security
 * groups are no longer associated with it. An instance is automatically unlinked from a VPC when it's
 */
DetachClassicLinkVpcResponse * Ec2Client::detachClassicLinkVpc(const DetachClassicLinkVpcRequest &request)
{
    return qobject_cast<DetachClassicLinkVpcResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DetachInternetGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches an Internet gateway from a VPC, disabling connectivity between the Internet and the VPC. The VPC must not
 * contain any running instances with Elastic IP addresses or public IPv4
 */
DetachInternetGatewayResponse * Ec2Client::detachInternetGateway(const DetachInternetGatewayRequest &request)
{
    return qobject_cast<DetachInternetGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DetachNetworkInterfaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a network interface from an
 */
DetachNetworkInterfaceResponse * Ec2Client::detachNetworkInterface(const DetachNetworkInterfaceRequest &request)
{
    return qobject_cast<DetachNetworkInterfaceResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DetachVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches an EBS volume from an instance. Make sure to unmount any file systems on the device within your operating
 * system before detaching the volume. Failure to do so can result in the volume becoming stuck in the <code>busy</code>
 * state while detaching. If this happens, detachment can be delayed indefinitely until you unmount the volume, force
 * detachment, reboot the instance, or all three. If an EBS volume is the root device of an instance, it can't be detached
 * while the instance is running. To detach the root volume, stop the instance
 *
 * first>
 *
 * When a volume with an AWS Marketplace product code is detached from an instance, the product code is no longer
 * associated with the
 *
 * instance>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-detaching-volume.html">Detaching an Amazon EBS Volume</a>
 * in the <i>Amazon Elastic Compute Cloud User
 */
DetachVolumeResponse * Ec2Client::detachVolume(const DetachVolumeRequest &request)
{
    return qobject_cast<DetachVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DetachVpnGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a virtual private gateway from a VPC. You do this if you're planning to turn off the VPC and not use it
 * anymore. You can confirm a virtual private gateway has been completely detached from a VPC by describing the virtual
 * private gateway (any attachments to the virtual private gateway are also
 *
 * described)>
 *
 * You must wait for the attachment's state to switch to <code>detached</code> before you can delete the VPC or attach a
 * different VPC to the virtual private
 */
DetachVpnGatewayResponse * Ec2Client::detachVpnGateway(const DetachVpnGatewayRequest &request)
{
    return qobject_cast<DetachVpnGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DisableVgwRoutePropagationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables a virtual private gateway (VGW) from propagating routes to a specified route table of a
 */
DisableVgwRoutePropagationResponse * Ec2Client::disableVgwRoutePropagation(const DisableVgwRoutePropagationRequest &request)
{
    return qobject_cast<DisableVgwRoutePropagationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DisableVpcClassicLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables ClassicLink for a VPC. You cannot disable ClassicLink for a VPC that has EC2-Classic instances linked to
 */
DisableVpcClassicLinkResponse * Ec2Client::disableVpcClassicLink(const DisableVpcClassicLinkRequest &request)
{
    return qobject_cast<DisableVpcClassicLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DisableVpcClassicLinkDnsSupportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables ClassicLink DNS support for a VPC. If disabled, DNS hostnames resolve to public IP addresses when addressed
 * between a linked EC2-Classic instance and instances in the VPC to which it's linked. For more information about
 * ClassicLink, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a> in
 * the <i>Amazon Elastic Compute Cloud User
 */
DisableVpcClassicLinkDnsSupportResponse * Ec2Client::disableVpcClassicLinkDnsSupport(const DisableVpcClassicLinkDnsSupportRequest &request)
{
    return qobject_cast<DisableVpcClassicLinkDnsSupportResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DisassociateAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an Elastic IP address from the instance or network interface it's associated
 *
 * with>
 *
 * An Elastic IP address is for use in either the EC2-Classic platform or in a VPC. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP Addresses</a> in the
 * <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * This is an idempotent operation. If you perform the operation more than once, Amazon EC2 doesn't return an
 */
DisassociateAddressResponse * Ec2Client::disassociateAddress(const DisassociateAddressRequest &request)
{
    return qobject_cast<DisassociateAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DisassociateIamInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an IAM instance profile from a running or stopped
 *
 * instance>
 *
 * Use <a>DescribeIamInstanceProfileAssociations</a> to get the association
 */
DisassociateIamInstanceProfileResponse * Ec2Client::disassociateIamInstanceProfile(const DisassociateIamInstanceProfileRequest &request)
{
    return qobject_cast<DisassociateIamInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DisassociateRouteTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a subnet from a route
 *
 * table>
 *
 * After you perform this action, the subnet no longer uses the routes in the route table. Instead, it uses the routes in
 * the VPC's main route table. For more information about route tables, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route Tables</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
DisassociateRouteTableResponse * Ec2Client::disassociateRouteTable(const DisassociateRouteTableRequest &request)
{
    return qobject_cast<DisassociateRouteTableResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DisassociateSubnetCidrBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a CIDR block from a subnet. Currently, you can disassociate an IPv6 CIDR block only. You must detach or
 * delete all gateways and resources that are associated with the CIDR block before you can disassociate it.
 */
DisassociateSubnetCidrBlockResponse * Ec2Client::disassociateSubnetCidrBlock(const DisassociateSubnetCidrBlockRequest &request)
{
    return qobject_cast<DisassociateSubnetCidrBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * DisassociateVpcCidrBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a CIDR block from a VPC. To disassociate the CIDR block, you must specify its association ID. You can get
 * the association ID by using <a>DescribeVpcs</a>. You must detach or delete all gateways and resources that are
 * associated with the CIDR block before you can disassociate it.
 *
 * </p
 *
 * You cannot disassociate the CIDR block with which you originally created the VPC (the primary CIDR
 */
DisassociateVpcCidrBlockResponse * Ec2Client::disassociateVpcCidrBlock(const DisassociateVpcCidrBlockRequest &request)
{
    return qobject_cast<DisassociateVpcCidrBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * EnableVgwRoutePropagationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables a virtual private gateway (VGW) to propagate routes to the specified route table of a
 */
EnableVgwRoutePropagationResponse * Ec2Client::enableVgwRoutePropagation(const EnableVgwRoutePropagationRequest &request)
{
    return qobject_cast<EnableVgwRoutePropagationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * EnableVolumeIOResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables I/O operations for a volume that had I/O operations disabled because the data on the volume was potentially
 */
EnableVolumeIOResponse * Ec2Client::enableVolumeIO(const EnableVolumeIORequest &request)
{
    return qobject_cast<EnableVolumeIOResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * EnableVpcClassicLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables a VPC for ClassicLink. You can then link EC2-Classic instances to your ClassicLink-enabled VPC to allow
 * communication over private IP addresses. You cannot enable your VPC for ClassicLink if any of your VPC's route tables
 * have existing routes for address ranges within the <code>10.0.0.0/8</code> IP address range, excluding local routes for
 * VPCs in the <code>10.0.0.0/16</code> and <code>10.1.0.0/16</code> IP address ranges. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a> in the <i>Amazon Elastic
 * Compute Cloud User
 */
EnableVpcClassicLinkResponse * Ec2Client::enableVpcClassicLink(const EnableVpcClassicLinkRequest &request)
{
    return qobject_cast<EnableVpcClassicLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * EnableVpcClassicLinkDnsSupportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables a VPC to support DNS hostname resolution for ClassicLink. If enabled, the DNS hostname of a linked EC2-Classic
 * instance resolves to its private IP address when addressed from an instance in the VPC to which it's linked. Similarly,
 * the DNS hostname of an instance in a VPC resolves to its private IP address when addressed from a linked EC2-Classic
 * instance. For more information about ClassicLink, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-classiclink.html">ClassicLink</a> in the <i>Amazon Elastic
 * Compute Cloud User
 */
EnableVpcClassicLinkDnsSupportResponse * Ec2Client::enableVpcClassicLinkDnsSupport(const EnableVpcClassicLinkDnsSupportRequest &request)
{
    return qobject_cast<EnableVpcClassicLinkDnsSupportResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * GetConsoleOutputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the console output for the specified
 *
 * instance>
 *
 * Instances do not have a physical monitor through which you can view their console output. They also lack physical
 * controls that allow you to power up, reboot, or shut them down. To allow these actions, we provide them through the
 * Amazon EC2 API and command line
 *
 * interface>
 *
 * Instance console output is buffered and posted shortly after instance boot, reboot, and termination. Amazon EC2
 * preserves the most recent 64 KB output, which is available for at least one hour after the most recent
 *
 * post>
 *
 * For Linux instances, the instance console output displays the exact console output that would normally be displayed on a
 * physical monitor attached to a computer. This output is buffered because the instance produces it and then posts it to a
 * store where the instance's owner can retrieve
 *
 * it>
 *
 * For Windows instances, the instance console output includes output from the EC2Config
 */
GetConsoleOutputResponse * Ec2Client::getConsoleOutput(const GetConsoleOutputRequest &request)
{
    return qobject_cast<GetConsoleOutputResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * GetConsoleScreenshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a JPG-format screenshot of a running instance to help with
 *
 * troubleshooting>
 *
 * The returned content is
 */
GetConsoleScreenshotResponse * Ec2Client::getConsoleScreenshot(const GetConsoleScreenshotRequest &request)
{
    return qobject_cast<GetConsoleScreenshotResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * GetHostReservationPurchasePreviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Preview a reservation purchase with configurations that match those of your Dedicated Host. You must have active
 * Dedicated Hosts in your account before you purchase a
 *
 * reservation>
 *
 * This is a preview of the <a>PurchaseHostReservation</a> action and does not result in the offering being
 */
GetHostReservationPurchasePreviewResponse * Ec2Client::getHostReservationPurchasePreview(const GetHostReservationPurchasePreviewRequest &request)
{
    return qobject_cast<GetHostReservationPurchasePreviewResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * GetLaunchTemplateDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the configuration data of the specified instance. You can use this data to create a launch
 */
GetLaunchTemplateDataResponse * Ec2Client::getLaunchTemplateData(const GetLaunchTemplateDataRequest &request)
{
    return qobject_cast<GetLaunchTemplateDataResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * GetPasswordDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the encrypted administrator password for a running Windows
 *
 * instance>
 *
 * The Windows password is generated at boot by the <code>EC2Config</code> service or <code>EC2Launch</code> scripts
 * (Windows Server 2016 and later). This usually only happens the first time an instance is launched. For more information,
 * see <a href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/UsingConfig_WinAMI.html">EC2Config</a> and <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2launch.html">EC2Launch</a> in the Amazon Elastic Compute
 * Cloud User
 *
 * Guide>
 *
 * For the <code>EC2Config</code> service, the password is not generated for rebundled AMIs unless
 * <code>Ec2SetPassword</code> is enabled before
 *
 * bundling>
 *
 * The password is encrypted using the key pair that you specified when you launched the instance. You must provide the
 * corresponding key pair
 *
 * file>
 *
 * When you launch an instance, password generation and encryption may take a few minutes. If you try to retrieve the
 * password before it's available, the output returns an empty string. We recommend that you wait up to 15 minutes after
 * launching an instance before trying to retrieve the generated
 */
GetPasswordDataResponse * Ec2Client::getPasswordData(const GetPasswordDataRequest &request)
{
    return qobject_cast<GetPasswordDataResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * GetReservedInstancesExchangeQuoteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a quote and exchange information for exchanging one or more specified Convertible Reserved Instances for a new
 * Convertible Reserved Instance. If the exchange cannot be performed, the reason is returned in the response. Use
 * <a>AcceptReservedInstancesExchangeQuote</a> to perform the
 */
GetReservedInstancesExchangeQuoteResponse * Ec2Client::getReservedInstancesExchangeQuote(const GetReservedInstancesExchangeQuoteRequest &request)
{
    return qobject_cast<GetReservedInstancesExchangeQuoteResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ImportImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Import single or multi-volume disk images or EBS snapshots into an Amazon Machine Image (AMI). For more information, see
 * <a href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html">Importing a VM as an Image
 * Using VM Import/Export</a> in the <i>VM Import/Export User
 */
ImportImageResponse * Ec2Client::importImage(const ImportImageRequest &request)
{
    return qobject_cast<ImportImageResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ImportInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an import instance task using metadata from the specified disk image. <code>ImportInstance</code> only supports
 * single-volume VMs. To import multi-volume VMs, use <a>ImportImage</a>. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/ec2-cli-vmimport-export.html">Importing a Virtual
 * Machine Using the Amazon EC2
 *
 * CLI</a>>
 *
 * For information about the import manifest referenced by this API action, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM Import
 */
ImportInstanceResponse * Ec2Client::importInstance(const ImportInstanceRequest &request)
{
    return qobject_cast<ImportInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ImportKeyPairResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports the public key from an RSA key pair that you created with a third-party tool. Compare this with
 * <a>CreateKeyPair</a>, in which AWS creates the key pair and gives the keys to you (AWS keeps a copy of the public key).
 * With ImportKeyPair, you create the key pair and give AWS just the public key. The private key is never transferred
 * between you and
 *
 * AWS>
 *
 * For more information about key pairs, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key Pairs</a> in the <i>Amazon Elastic
 * Compute Cloud User
 */
ImportKeyPairResponse * Ec2Client::importKeyPair(const ImportKeyPairRequest &request)
{
    return qobject_cast<ImportKeyPairResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ImportSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports a disk into an EBS
 */
ImportSnapshotResponse * Ec2Client::importSnapshot(const ImportSnapshotRequest &request)
{
    return qobject_cast<ImportSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ImportVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an import volume task using metadata from the specified disk image.For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/CommandLineReference/importing-your-volumes-into-amazon-ebs.html">Importing
 * Disks to Amazon
 *
 * EBS</a>>
 *
 * For information about the import manifest referenced by this API action, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM Import
 */
ImportVolumeResponse * Ec2Client::importVolume(const ImportVolumeRequest &request)
{
    return qobject_cast<ImportVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyFpgaImageAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified attribute of the specified Amazon FPGA Image
 */
ModifyFpgaImageAttributeResponse * Ec2Client::modifyFpgaImageAttribute(const ModifyFpgaImageAttributeRequest &request)
{
    return qobject_cast<ModifyFpgaImageAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyHostsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modify the auto-placement setting of a Dedicated Host. When auto-placement is enabled, AWS will place instances that you
 * launch with a tenancy of <code>host</code>, but without targeting a specific host ID, onto any available Dedicated Host
 * in your account which has auto-placement enabled. When auto-placement is disabled, you need to provide a host ID if you
 * want the instance to launch onto a specific host. If no host ID is provided, the instance will be launched onto a
 * suitable host which has auto-placement
 */
ModifyHostsResponse * Ec2Client::modifyHosts(const ModifyHostsRequest &request)
{
    return qobject_cast<ModifyHostsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyIdFormatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the ID format for the specified resource on a per-region basis. You can specify that resources should receive
 * longer IDs (17-character IDs) when they are
 *
 * created>
 *
 * This request can only be used to modify longer ID settings for resource types that are within the opt-in period.
 * Resources currently in their opt-in period include: <code>bundle</code> | <code>conversion-task</code> |
 * <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
 * <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
 * <code>import-task</code> | <code>internet-gateway</code> | <code>network-acl</code> |
 * <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> |
 * <code>prefix-list</code> | <code>route-table</code> | <code>route-table-association</code> | <code>security-group</code>
 * | <code>subnet</code> | <code>subnet-cidr-block-association</code> | <code>vpc</code> |
 * <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
 * <code>vpn-connection</code> |
 *
 * <code>vpn-gateway</code>>
 *
 * This setting applies to the IAM user who makes the request; it does not apply to the entire AWS account. By default, an
 * IAM user defaults to the same settings as the root user. If you're using this action as the root user, then these
 * settings apply to the entire account, unless an IAM user explicitly overrides these settings for themselves. For more
 * information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource IDs</a> in the
 * <i>Amazon Elastic Compute Cloud User Guide</i>.
 *
 * </p
 *
 * Resources created with longer IDs are visible to all IAM roles and users, regardless of these settings and provided that
 * they have permission to use the relevant <code>Describe</code> command for the resource
 */
ModifyIdFormatResponse * Ec2Client::modifyIdFormat(const ModifyIdFormatRequest &request)
{
    return qobject_cast<ModifyIdFormatResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyIdentityIdFormatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the ID format of a resource for a specified IAM user, IAM role, or the root user for an account; or all IAM
 * users, IAM roles, and the root user for an account. You can specify that resources should receive longer IDs
 * (17-character IDs) when they are created.
 *
 * </p
 *
 * This request can only be used to modify longer ID settings for resource types that are within the opt-in period.
 * Resources currently in their opt-in period include: <code>bundle</code> | <code>conversion-task</code> |
 * <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> |
 * <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> |
 * <code>import-task</code> | <code>internet-gateway</code> | <code>network-acl</code> |
 * <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> |
 * <code>prefix-list</code> | <code>route-table</code> | <code>route-table-association</code> | <code>security-group</code>
 * | <code>subnet</code> | <code>subnet-cidr-block-association</code> | <code>vpc</code> |
 * <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> |
 * <code>vpn-connection</code> | <code>vpn-gateway</code>.
 *
 * </p
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/resource-ids.html">Resource
 * IDs</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.
 *
 * </p
 *
 * This setting applies to the principal specified in the request; it does not apply to the principal that makes the
 * request.
 *
 * </p
 *
 * Resources created with longer IDs are visible to all IAM roles and users, regardless of these settings and provided that
 * they have permission to use the relevant <code>Describe</code> command for the resource
 */
ModifyIdentityIdFormatResponse * Ec2Client::modifyIdentityIdFormat(const ModifyIdentityIdFormatRequest &request)
{
    return qobject_cast<ModifyIdentityIdFormatResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyImageAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified attribute of the specified AMI. You can specify only one attribute at a time. You can use the
 * <code>Attribute</code> parameter to specify the attribute or one of the following parameters: <code>Description</code>,
 * <code>LaunchPermission</code>, or
 *
 * <code>ProductCode</code>>
 *
 * AWS Marketplace product codes cannot be modified. Images with an AWS Marketplace product code cannot be made
 *
 * public>
 *
 * To enable the SriovNetSupport enhanced networking attribute of an image, enable SriovNetSupport on an instance and
 * create an AMI from the
 */
ModifyImageAttributeResponse * Ec2Client::modifyImageAttribute(const ModifyImageAttributeRequest &request)
{
    return qobject_cast<ModifyImageAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyInstanceAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified attribute of the specified instance. You can specify only one attribute at a
 *
 * time>
 *
 * <b>Note: </b>Using this action to change the security groups associated with an elastic network interface (ENI) attached
 * to an instance in a VPC can result in an error if the instance has more than one ENI. To change the security groups
 * associated with an ENI attached to an instance that has multiple ENIs, we recommend that you use the
 * <a>ModifyNetworkInterfaceAttribute</a>
 *
 * action>
 *
 * To modify some attributes, the instance must be stopped. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_ChangingAttributesWhileInstanceStopped.html">Modifying
 * Attributes of a Stopped Instance</a> in the <i>Amazon Elastic Compute Cloud User
 */
ModifyInstanceAttributeResponse * Ec2Client::modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request)
{
    return qobject_cast<ModifyInstanceAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyInstanceCreditSpecificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the credit option for CPU usage on a running or stopped T2 instance. The credit options are
 * <code>standard</code> and
 *
 * <code>unlimited</code>>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/t2-instances.html">T2
 * Instances</a> in the <i>Amazon Elastic Compute Cloud User
 */
ModifyInstanceCreditSpecificationResponse * Ec2Client::modifyInstanceCreditSpecification(const ModifyInstanceCreditSpecificationRequest &request)
{
    return qobject_cast<ModifyInstanceCreditSpecificationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyInstancePlacementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the placement attributes for a specified instance. You can do the
 *
 * following> <ul> <li>
 *
 * Modify the affinity between an instance and a <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-hosts-overview.html">Dedicated Host</a>. When
 * affinity is set to <code>host</code> and the instance is not associated with a specific Dedicated Host, the next time
 * the instance is launched, it is automatically associated with the host on which it lands. If the instance is restarted
 * or rebooted, this relationship
 *
 * persists> </li> <li>
 *
 * Change the Dedicated Host with which an instance is
 *
 * associated> </li> <li>
 *
 * Change the instance tenancy of an instance from <code>host</code> to <code>dedicated</code>, or from
 * <code>dedicated</code> to
 *
 * <code>host</code>> </li> <li>
 *
 * Move an instance to or from a <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">placement
 *
 * group</a>> </li> </ul>
 *
 * At least one attribute for affinity, host ID, tenancy, or placement group name must be specified in the request.
 * Affinity and tenancy can be modified in the same
 *
 * request>
 *
 * To modify the host ID, tenancy, or placement group for an instance, the instance must be in the <code>stopped</code>
 */
ModifyInstancePlacementResponse * Ec2Client::modifyInstancePlacement(const ModifyInstancePlacementRequest &request)
{
    return qobject_cast<ModifyInstancePlacementResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyLaunchTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a launch template. You can specify which version of the launch template to set as the default version. When
 * launching an instance, the default version applies when a launch template version is not
 */
ModifyLaunchTemplateResponse * Ec2Client::modifyLaunchTemplate(const ModifyLaunchTemplateRequest &request)
{
    return qobject_cast<ModifyLaunchTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyNetworkInterfaceAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified network interface attribute. You can specify only one attribute at a
 */
ModifyNetworkInterfaceAttributeResponse * Ec2Client::modifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest &request)
{
    return qobject_cast<ModifyNetworkInterfaceAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyReservedInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the Availability Zone, instance count, instance type, or network platform (EC2-Classic or EC2-VPC) of your
 * Reserved Instances. The Reserved Instances to be modified must be identical, except for Availability Zone, network
 * platform, and instance
 *
 * type>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-modifying.html">Modifying
 * Reserved Instances</a> in the Amazon Elastic Compute Cloud User
 */
ModifyReservedInstancesResponse * Ec2Client::modifyReservedInstances(const ModifyReservedInstancesRequest &request)
{
    return qobject_cast<ModifyReservedInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifySnapshotAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or removes permission settings for the specified snapshot. You may add or remove specified AWS account IDs from a
 * snapshot's list of create volume permissions, but you cannot do both in a single API call. If you need to both add and
 * remove account IDs for a snapshot, you must use multiple API
 *
 * calls> <note>
 *
 * Encrypted snapshots and snapshots with AWS Marketplace product codes cannot be made public. Snapshots encrypted with
 * your default CMK cannot be shared with other
 *
 * accounts> </note>
 *
 * For more information on modifying snapshot permissions, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Sharing Snapshots</a>
 * in the <i>Amazon Elastic Compute Cloud User
 */
ModifySnapshotAttributeResponse * Ec2Client::modifySnapshotAttribute(const ModifySnapshotAttributeRequest &request)
{
    return qobject_cast<ModifySnapshotAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifySpotFleetRequestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified Spot Fleet
 *
 * request>
 *
 * While the Spot Fleet request is being modified, it is in the <code>modifying</code>
 *
 * state>
 *
 * To scale up your Spot Fleet, increase its target capacity. The Spot Fleet launches the additional Spot Instances
 * according to the allocation strategy for the Spot Fleet request. If the allocation strategy is <code>lowestPrice</code>,
 * the Spot Fleet launches instances using the Spot pool with the lowest price. If the allocation strategy is
 * <code>diversified</code>, the Spot Fleet distributes the instances across the Spot
 *
 * pools>
 *
 * To scale down your Spot Fleet, decrease its target capacity. First, the Spot Fleet cancels any open requests that exceed
 * the new target capacity. You can request that the Spot Fleet terminate Spot Instances until the size of the fleet no
 * longer exceeds the new target capacity. If the allocation strategy is <code>lowestPrice</code>, the Spot Fleet
 * terminates the instances with the highest price per unit. If the allocation strategy is <code>diversified</code>, the
 * Spot Fleet terminates instances across the Spot pools. Alternatively, you can request that the Spot Fleet keep the fleet
 * at its current size, but not replace any Spot Instances that are interrupted or that you terminate
 *
 * manually>
 *
 * If you are finished with your Spot Fleet for now, but will use it again later, you can set the target capacity to
 */
ModifySpotFleetRequestResponse * Ec2Client::modifySpotFleetRequest(const ModifySpotFleetRequestRequest &request)
{
    return qobject_cast<ModifySpotFleetRequestResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifySubnetAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a subnet attribute. You can only modify one attribute at a
 */
ModifySubnetAttributeResponse * Ec2Client::modifySubnetAttribute(const ModifySubnetAttributeRequest &request)
{
    return qobject_cast<ModifySubnetAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can modify several parameters of an existing EBS volume, including volume size, volume type, and IOPS capacity. If
 * your EBS volume is attached to a current-generation EC2 instance type, you may be able to apply these changes without
 * stopping the instance or detaching the volume from it. For more information about modifying an EBS volume running Linux,
 * see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html">Modifying the Size, IOPS, or
 * Type of an EBS Volume on Linux</a>. For more information about modifying an EBS volume running Windows, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html">Modifying the Size, IOPS, or Type of
 * an EBS Volume on Windows</a>.
 *
 * </p
 *
 * When you complete a resize operation on your volume, you need to extend the volume's file-system size to take advantage
 * of the new storage capacity. For information about extending a Linux file system, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#recognize-expanded-volume-linux">Extending
 * a Linux File System</a>. For information about extending a Windows file system, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html#recognize-expanded-volume-windows">Extending
 * a Windows File System</a>.
 *
 * </p
 *
 * You can use CloudWatch Events to check the status of a modification to an EBS volume. For information about CloudWatch
 * Events, see the <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events/">Amazon CloudWatch Events User
 * Guide</a>. You can also track the status of a modification using the <a>DescribeVolumesModifications</a> API. For
 * information about tracking status changes using either method, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html#monitoring_mods">Monitoring Volume
 * Modifications</a>.
 *
 * </p <note>
 *
 * With previous-generation instance types, resizing an EBS volume may require detaching and reattaching the volume or
 * stopping and restarting the instance. For more information about modifying an EBS volume running Linux, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-expand-volume.html">Modifying the Size, IOPS, or Type of an
 * EBS Volume on Linux</a>. For more information about modifying an EBS volume running Windows, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ebs-expand-volume.html">Modifying the Size, IOPS, or Type of
 * an EBS Volume on
 *
 * Windows</a>> </note> <note>
 *
 * If you reach the maximum volume modification rate per volume limit, you will need to wait at least six hours before
 * applying further modifications to the affected EBS
 */
ModifyVolumeResponse * Ec2Client::modifyVolume(const ModifyVolumeRequest &request)
{
    return qobject_cast<ModifyVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyVolumeAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a volume
 *
 * attribute>
 *
 * By default, all I/O operations for the volume are suspended when the data on the volume is determined to be potentially
 * inconsistent, to prevent undetectable, latent data corruption. The I/O access to the volume can be resumed by first
 * enabling I/O access and then checking the data consistency on your
 *
 * volume>
 *
 * You can change the default behavior to resume I/O operations. We recommend that you change this only for boot volumes or
 * for volumes that are stateless or
 */
ModifyVolumeAttributeResponse * Ec2Client::modifyVolumeAttribute(const ModifyVolumeAttributeRequest &request)
{
    return qobject_cast<ModifyVolumeAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyVpcAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified attribute of the specified
 */
ModifyVpcAttributeResponse * Ec2Client::modifyVpcAttribute(const ModifyVpcAttributeRequest &request)
{
    return qobject_cast<ModifyVpcAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyVpcEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies attributes of a specified VPC endpoint. The attributes that you can modify depend on the type of VPC endpoint
 * (interface or gateway). For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-endpoints.html">VPC Endpoints</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
ModifyVpcEndpointResponse * Ec2Client::modifyVpcEndpoint(const ModifyVpcEndpointRequest &request)
{
    return qobject_cast<ModifyVpcEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyVpcEndpointConnectionNotificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies a connection notification for VPC endpoint or VPC endpoint service. You can change the SNS topic for the
 * notification, or the events for which to be notified.
 */
ModifyVpcEndpointConnectionNotificationResponse * Ec2Client::modifyVpcEndpointConnectionNotification(const ModifyVpcEndpointConnectionNotificationRequest &request)
{
    return qobject_cast<ModifyVpcEndpointConnectionNotificationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyVpcEndpointServiceConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the attributes of your VPC endpoint service configuration. You can change the Network Load Balancers for your
 * service, and you can specify whether acceptance is required for requests to connect to your endpoint service through an
 * interface VPC
 */
ModifyVpcEndpointServiceConfigurationResponse * Ec2Client::modifyVpcEndpointServiceConfiguration(const ModifyVpcEndpointServiceConfigurationRequest &request)
{
    return qobject_cast<ModifyVpcEndpointServiceConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyVpcEndpointServicePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the permissions for your <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/endpoint-service.html">VPC endpoint service</a>. You can add
 * or remove permissions for service consumers (IAM users, IAM roles, and AWS accounts) to connect to your endpoint
 */
ModifyVpcEndpointServicePermissionsResponse * Ec2Client::modifyVpcEndpointServicePermissions(const ModifyVpcEndpointServicePermissionsRequest &request)
{
    return qobject_cast<ModifyVpcEndpointServicePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyVpcPeeringConnectionOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the VPC peering connection options on one side of a VPC peering connection. You can do the
 *
 * following> <ul> <li>
 *
 * Enable/disable communication over the peering connection between an EC2-Classic instance that's linked to your VPC
 * (using ClassicLink) and instances in the peer
 *
 * VPC> </li> <li>
 *
 * Enable/disable communication over the peering connection between instances in your VPC and an EC2-Classic instance
 * that's linked to the peer
 *
 * VPC> </li> <li>
 *
 * Enable/disable the ability to resolve public DNS hostnames to private IP addresses when queried from instances in the
 * peer
 *
 * VPC> </li> </ul>
 *
 * If the peered VPCs are in different accounts, each owner must initiate a separate request to modify the peering
 * connection options, depending on whether their VPC was the requester or accepter for the VPC peering connection. If the
 * peered VPCs are in the same account, you can modify the requester and accepter options in the same request. To confirm
 * which VPC is the accepter and requester for a VPC peering connection, use the <a>DescribeVpcPeeringConnections</a>
 */
ModifyVpcPeeringConnectionOptionsResponse * Ec2Client::modifyVpcPeeringConnectionOptions(const ModifyVpcPeeringConnectionOptionsRequest &request)
{
    return qobject_cast<ModifyVpcPeeringConnectionOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ModifyVpcTenancyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the instance tenancy attribute of the specified VPC. You can change the instance tenancy attribute of a VPC to
 * <code>default</code> only. You cannot change the instance tenancy attribute to
 *
 * <code>dedicated</code>>
 *
 * After you modify the tenancy of the VPC, any new instances that you launch into the VPC have a tenancy of
 * <code>default</code>, unless you specify otherwise during launch. The tenancy of any existing instances in the VPC is
 * not
 *
 * affected>
 *
 * For more information about Dedicated Instances, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/dedicated-instance.html">Dedicated Instances</a> in the
 * <i>Amazon Elastic Compute Cloud User
 */
ModifyVpcTenancyResponse * Ec2Client::modifyVpcTenancy(const ModifyVpcTenancyRequest &request)
{
    return qobject_cast<ModifyVpcTenancyResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * MonitorInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables detailed monitoring for a running instance. Otherwise, basic monitoring is enabled. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitoring Your Instances and
 * Volumes</a> in the <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * To disable detailed monitoring, see
 */
MonitorInstancesResponse * Ec2Client::monitorInstances(const MonitorInstancesRequest &request)
{
    return qobject_cast<MonitorInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * MoveAddressToVpcResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves an Elastic IP address from the EC2-Classic platform to the EC2-VPC platform. The Elastic IP address must be
 * allocated to your account for more than 24 hours, and it must not be associated with an instance. After the Elastic IP
 * address is moved, it is no longer available for use in the EC2-Classic platform, unless you move it back using the
 * <a>RestoreAddressToClassic</a> request. You cannot move an Elastic IP address that was originally allocated for use in
 * the EC2-VPC platform to the EC2-Classic platform.
 */
MoveAddressToVpcResponse * Ec2Client::moveAddressToVpc(const MoveAddressToVpcRequest &request)
{
    return qobject_cast<MoveAddressToVpcResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * PurchaseHostReservationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Purchase a reservation with configurations that match those of your Dedicated Host. You must have active Dedicated Hosts
 * in your account before you purchase a reservation. This action results in the specified reservation being purchased and
 * charged to your
 */
PurchaseHostReservationResponse * Ec2Client::purchaseHostReservation(const PurchaseHostReservationRequest &request)
{
    return qobject_cast<PurchaseHostReservationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * PurchaseReservedInstancesOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Purchases a Reserved Instance for use with your account. With Reserved Instances, you pay a lower hourly rate compared
 * to On-Demand instance
 *
 * pricing>
 *
 * Use <a>DescribeReservedInstancesOfferings</a> to get a list of Reserved Instance offerings that match your
 * specifications. After you've purchased a Reserved Instance, you can check for your new Reserved Instance with
 *
 * <a>DescribeReservedInstances</a>>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/concepts-on-demand-reserved-instances.html">Reserved
 * Instances</a> and <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ri-market-general.html">Reserved Instance
 * Marketplace</a> in the <i>Amazon Elastic Compute Cloud User
 */
PurchaseReservedInstancesOfferingResponse * Ec2Client::purchaseReservedInstancesOffering(const PurchaseReservedInstancesOfferingRequest &request)
{
    return qobject_cast<PurchaseReservedInstancesOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * PurchaseScheduledInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Purchases one or more Scheduled Instances with the specified
 *
 * schedule>
 *
 * Scheduled Instances enable you to purchase Amazon EC2 compute capacity by the hour for a one-year term. Before you can
 * purchase a Scheduled Instance, you must call <a>DescribeScheduledInstanceAvailability</a> to check for available
 * schedules and obtain a purchase token. After you purchase a Scheduled Instance, you must call
 * <a>RunScheduledInstances</a> during each scheduled time
 *
 * period>
 *
 * After you purchase a Scheduled Instance, you can't cancel, modify, or resell your
 */
PurchaseScheduledInstancesResponse * Ec2Client::purchaseScheduledInstances(const PurchaseScheduledInstancesRequest &request)
{
    return qobject_cast<PurchaseScheduledInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RebootInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Requests a reboot of one or more instances. This operation is asynchronous; it only queues a request to reboot the
 * specified instances. The operation succeeds if the instances are valid and belong to you. Requests to reboot terminated
 * instances are
 *
 * ignored>
 *
 * If an instance does not cleanly shut down within four minutes, Amazon EC2 performs a hard
 *
 * reboot>
 *
 * For more information about troubleshooting, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-console.html">Getting Console Output and Rebooting
 * Instances</a> in the <i>Amazon Elastic Compute Cloud User
 */
RebootInstancesResponse * Ec2Client::rebootInstances(const RebootInstancesRequest &request)
{
    return qobject_cast<RebootInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RegisterImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers an AMI. When you're creating an AMI, this is the final step you must complete before you can launch an
 * instance from the AMI. For more information about creating AMIs, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami.html">Creating Your Own AMIs</a> in the
 * <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>> <note>
 *
 * For Amazon EBS-backed instances, <a>CreateImage</a> creates and registers the AMI in a single request, so you don't have
 * to register the AMI
 *
 * yourself> </note>
 *
 * You can also use <code>RegisterImage</code> to create an Amazon EBS-backed Linux AMI from a snapshot of a root device
 * volume. You specify the snapshot using the block device mapping. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-launch-snapshot.html">Launching a Linux Instance from
 * a Backup</a> in the <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * You can't register an image where a secondary (non-root) snapshot has AWS Marketplace product
 *
 * codes>
 *
 * Some Linux distributions, such as Red Hat Enterprise Linux (RHEL) and SUSE Linux Enterprise Server (SLES), use the EC2
 * billing product code associated with an AMI to verify the subscription status for package updates. Creating an AMI from
 * an EBS snapshot does not maintain this billing code, and subsequent instances launched from such an AMI will not be able
 * to connect to package update infrastructure. To create an AMI that must retain billing codes, see
 *
 * <a>CreateImage</a>>
 *
 * If needed, you can deregister an AMI at any time. Any modifications you make to an AMI backed by an instance store
 * volume invalidates its registration. If you make changes to an image, deregister the previous image and register the new
 */
RegisterImageResponse * Ec2Client::registerImage(const RegisterImageRequest &request)
{
    return qobject_cast<RegisterImageResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RejectVpcEndpointConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects one or more VPC endpoint connection requests to your VPC endpoint
 */
RejectVpcEndpointConnectionsResponse * Ec2Client::rejectVpcEndpointConnections(const RejectVpcEndpointConnectionsRequest &request)
{
    return qobject_cast<RejectVpcEndpointConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RejectVpcPeeringConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects a VPC peering connection request. The VPC peering connection must be in the <code>pending-acceptance</code>
 * state. Use the <a>DescribeVpcPeeringConnections</a> request to view your outstanding VPC peering connection requests. To
 * delete an active VPC peering connection, or to delete a VPC peering connection request that you initiated, use
 */
RejectVpcPeeringConnectionResponse * Ec2Client::rejectVpcPeeringConnection(const RejectVpcPeeringConnectionRequest &request)
{
    return qobject_cast<RejectVpcPeeringConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ReleaseAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Releases the specified Elastic IP
 *
 * address>
 *
 * [EC2-Classic, default VPC] Releasing an Elastic IP address automatically disassociates it from any instance that it's
 * associated with. To disassociate an Elastic IP address without releasing it, use
 *
 * <a>DisassociateAddress</a>>
 *
 * [Nondefault VPC] You must use <a>DisassociateAddress</a> to disassociate the Elastic IP address before you can release
 * it. Otherwise, Amazon EC2 returns an error
 *
 * (<code>InvalidIPAddress.InUse</code>)>
 *
 * After releasing an Elastic IP address, it is released to the IP address pool. Be sure to update your DNS records and any
 * servers or devices that communicate with the address. If you attempt to release an Elastic IP address that you already
 * released, you'll get an <code>AuthFailure</code> error if the address is already allocated to another AWS
 *
 * account>
 *
 * [EC2-VPC] After you release an Elastic IP address for use in a VPC, you might be able to recover it. For more
 * information, see
 */
ReleaseAddressResponse * Ec2Client::releaseAddress(const ReleaseAddressRequest &request)
{
    return qobject_cast<ReleaseAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ReleaseHostsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * When you no longer want to use an On-Demand Dedicated Host it can be released. On-Demand billing is stopped and the host
 * goes into <code>released</code> state. The host ID of Dedicated Hosts that have been released can no longer be specified
 * in another request, e.g., ModifyHosts. You must stop or terminate all instances on a host before it can be
 *
 * released>
 *
 * When Dedicated Hosts are released, it make take some time for them to stop counting toward your limit and you may
 * receive capacity errors when trying to allocate new Dedicated hosts. Try waiting a few minutes, and then try
 *
 * again>
 *
 * Released hosts will still appear in a <a>DescribeHosts</a>
 */
ReleaseHostsResponse * Ec2Client::releaseHosts(const ReleaseHostsRequest &request)
{
    return qobject_cast<ReleaseHostsResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ReplaceIamInstanceProfileAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces an IAM instance profile for the specified running instance. You can use this action to change the IAM instance
 * profile that's associated with an instance without having to disassociate the existing IAM instance profile
 *
 * first>
 *
 * Use <a>DescribeIamInstanceProfileAssociations</a> to get the association
 */
ReplaceIamInstanceProfileAssociationResponse * Ec2Client::replaceIamInstanceProfileAssociation(const ReplaceIamInstanceProfileAssociationRequest &request)
{
    return qobject_cast<ReplaceIamInstanceProfileAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ReplaceNetworkAclAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes which network ACL a subnet is associated with. By default when you create a subnet, it's automatically
 * associated with the default network ACL. For more information about network ACLs, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network ACLs</a> in the <i>Amazon Virtual
 * Private Cloud User
 *
 * Guide</i>>
 *
 * This is an idempotent
 */
ReplaceNetworkAclAssociationResponse * Ec2Client::replaceNetworkAclAssociation(const ReplaceNetworkAclAssociationRequest &request)
{
    return qobject_cast<ReplaceNetworkAclAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ReplaceNetworkAclEntryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces an entry (rule) in a network ACL. For more information about network ACLs, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_ACLs.html">Network ACLs</a> in the <i>Amazon Virtual
 * Private Cloud User
 */
ReplaceNetworkAclEntryResponse * Ec2Client::replaceNetworkAclEntry(const ReplaceNetworkAclEntryRequest &request)
{
    return qobject_cast<ReplaceNetworkAclEntryResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ReplaceRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces an existing route within a route table in a VPC. You must provide only one of the following: Internet gateway
 * or virtual private gateway, NAT instance, NAT gateway, VPC peering connection, network interface, or egress-only
 * Internet
 *
 * gateway>
 *
 * For more information about route tables, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route Tables</a> in the <i>Amazon
 * Virtual Private Cloud User
 */
ReplaceRouteResponse * Ec2Client::replaceRoute(const ReplaceRouteRequest &request)
{
    return qobject_cast<ReplaceRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ReplaceRouteTableAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the route table associated with a given subnet in a VPC. After the operation completes, the subnet uses the
 * routes in the new route table it's associated with. For more information about route tables, see <a
 * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_Route_Tables.html">Route Tables</a> in the <i>Amazon
 * Virtual Private Cloud User
 *
 * Guide</i>>
 *
 * You can also use ReplaceRouteTableAssociation to change which table is the main route table in the VPC. You just specify
 * the main route table's association ID and the route table to be the new main route
 */
ReplaceRouteTableAssociationResponse * Ec2Client::replaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest &request)
{
    return qobject_cast<ReplaceRouteTableAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ReportInstanceStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits feedback about the status of an instance. The instance must be in the <code>running</code> state. If your
 * experience with the instance differs from the instance status returned by <a>DescribeInstanceStatus</a>, use
 * <a>ReportInstanceStatus</a> to report your experience with the instance. Amazon EC2 collects this information to improve
 * the accuracy of status
 *
 * checks>
 *
 * Use of this action does not change the value returned by
 */
ReportInstanceStatusResponse * Ec2Client::reportInstanceStatus(const ReportInstanceStatusRequest &request)
{
    return qobject_cast<ReportInstanceStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RequestSpotFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Spot Fleet
 *
 * request>
 *
 * You can submit a single request that includes multiple launch specifications that vary by instance type, AMI,
 * Availability Zone, or
 *
 * subnet>
 *
 * By default, the Spot Fleet requests Spot Instances in the Spot pool where the price per unit is the lowest. Each launch
 * specification can include its own instance weighting that reflects the value of the instance type to your application
 *
 * workload>
 *
 * Alternatively, you can specify that the Spot Fleet distribute the target capacity across the Spot pools included in its
 * launch specifications. By ensuring that the Spot Instances in your Spot Fleet are in different Spot pools, you can
 * improve the availability of your
 *
 * fleet>
 *
 * You can specify tags for the Spot Instances. You cannot tag other resource types in a Spot Fleet request; only the
 * <code>instance</code> resource type is
 *
 * supported>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html">Spot
 * Fleet Requests</a> in the <i>Amazon Elastic Compute Cloud User
 */
RequestSpotFleetResponse * Ec2Client::requestSpotFleet(const RequestSpotFleetRequest &request)
{
    return qobject_cast<RequestSpotFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RequestSpotInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Spot Instance request. Spot Instances are instances that Amazon EC2 launches when the maximum price that you
 * specify exceeds the current Spot price. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-requests.html">Spot Instance Requests</a> in the <i>Amazon
 * Elastic Compute Cloud User
 */
RequestSpotInstancesResponse * Ec2Client::requestSpotInstances(const RequestSpotInstancesRequest &request)
{
    return qobject_cast<RequestSpotInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ResetFpgaImageAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets the specified attribute of the specified Amazon FPGA Image (AFI) to its default value. You can only reset the
 * load permission
 */
ResetFpgaImageAttributeResponse * Ec2Client::resetFpgaImageAttribute(const ResetFpgaImageAttributeRequest &request)
{
    return qobject_cast<ResetFpgaImageAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ResetImageAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets an attribute of an AMI to its default
 *
 * value> <note>
 *
 * The productCodes attribute can't be
 */
ResetImageAttributeResponse * Ec2Client::resetImageAttribute(const ResetImageAttributeRequest &request)
{
    return qobject_cast<ResetImageAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ResetInstanceAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets an attribute of an instance to its default value. To reset the <code>kernel</code> or <code>ramdisk</code>, the
 * instance must be in a stopped state. To reset the <code>sourceDestCheck</code>, the instance can be either running or
 *
 * stopped>
 *
 * The <code>sourceDestCheck</code> attribute controls whether source/destination checking is enabled. The default value is
 * <code>true</code>, which means checking is enabled. This value must be <code>false</code> for a NAT instance to perform
 * NAT. For more information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
 * Instances</a> in the <i>Amazon Virtual Private Cloud User
 */
ResetInstanceAttributeResponse * Ec2Client::resetInstanceAttribute(const ResetInstanceAttributeRequest &request)
{
    return qobject_cast<ResetInstanceAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ResetNetworkInterfaceAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets a network interface attribute. You can specify only one attribute at a
 */
ResetNetworkInterfaceAttributeResponse * Ec2Client::resetNetworkInterfaceAttribute(const ResetNetworkInterfaceAttributeRequest &request)
{
    return qobject_cast<ResetNetworkInterfaceAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * ResetSnapshotAttributeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets permission settings for the specified
 *
 * snapshot>
 *
 * For more information on modifying snapshot permissions, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-modifying-snapshot-permissions.html">Sharing Snapshots</a>
 * in the <i>Amazon Elastic Compute Cloud User
 */
ResetSnapshotAttributeResponse * Ec2Client::resetSnapshotAttribute(const ResetSnapshotAttributeRequest &request)
{
    return qobject_cast<ResetSnapshotAttributeResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RestoreAddressToClassicResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores an Elastic IP address that was previously moved to the EC2-VPC platform back to the EC2-Classic platform. You
 * cannot move an Elastic IP address that was originally allocated for use in EC2-VPC. The Elastic IP address must not be
 * associated with an instance or network
 */
RestoreAddressToClassicResponse * Ec2Client::restoreAddressToClassic(const RestoreAddressToClassicRequest &request)
{
    return qobject_cast<RestoreAddressToClassicResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RevokeSecurityGroupEgressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * [EC2-VPC only] Removes one or more egress rules from a security group for EC2-VPC. This action doesn't apply to security
 * groups for use in EC2-Classic. To remove a rule, the values that you specify (for example, ports) must match the
 * existing rule's values
 *
 * exactly>
 *
 * Each rule consists of the protocol and the IPv4 or IPv6 CIDR range or source security group. For the TCP and UDP
 * protocols, you must also specify the destination port or range of ports. For the ICMP protocol, you must also specify
 * the ICMP type and code. If the security group rule has a description, you do not have to specify the description to
 * revoke the
 *
 * rule>
 *
 * Rule changes are propagated to instances within the security group as quickly as possible. However, a small delay might
 */
RevokeSecurityGroupEgressResponse * Ec2Client::revokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest &request)
{
    return qobject_cast<RevokeSecurityGroupEgressResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RevokeSecurityGroupIngressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more ingress rules from a security group. To remove a rule, the values that you specify (for example,
 * ports) must match the existing rule's values
 *
 * exactly> <note>
 *
 * [EC2-Classic security groups only] If the values you specify do not match the existing rule's values, no error is
 * returned. Use <a>DescribeSecurityGroups</a> to verify that the rule has been
 *
 * removed> </note>
 *
 * Each rule consists of the protocol and the CIDR range or source security group. For the TCP and UDP protocols, you must
 * also specify the destination port or range of ports. For the ICMP protocol, you must also specify the ICMP type and
 * code. If the security group rule has a description, you do not have to specify the description to revoke the
 *
 * rule>
 *
 * Rule changes are propagated to instances within the security group as quickly as possible. However, a small delay might
 */
RevokeSecurityGroupIngressResponse * Ec2Client::revokeSecurityGroupIngress(const RevokeSecurityGroupIngressRequest &request)
{
    return qobject_cast<RevokeSecurityGroupIngressResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RunInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Launches the specified number of instances using an AMI for which you have permissions.
 *
 * </p
 *
 * You can specify a number of options, or leave the default options. The following rules
 *
 * apply> <ul> <li>
 *
 * [EC2-VPC] If you don't specify a subnet ID, we choose a default subnet from your default VPC for you. If you don't have
 * a default VPC, you must specify a subnet ID in the
 *
 * request> </li> <li>
 *
 * [EC2-Classic] If don't specify an Availability Zone, we choose one for
 *
 * you> </li> <li>
 *
 * Some instance types must be launched into a VPC. If you do not have a default VPC, or if you do not specify a subnet ID,
 * the request fails. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-vpc.html#vpc-only-instance-types">Instance Types
 * Available Only in a
 *
 * VPC</a>> </li> <li>
 *
 * [EC2-VPC] All instances have a network interface with a primary private IPv4 address. If you don't specify this address,
 * we choose one from the IPv4 range of your
 *
 * subnet> </li> <li>
 *
 * Not all instance types support IPv6 addresses. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
 *
 * Types</a>> </li> <li>
 *
 * If you don't specify a security group ID, we use the default security group. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-network-security.html">Security
 *
 * Groups</a>> </li> <li>
 *
 * If any of the AMIs have a product code attached for which the user has not subscribed, the request
 *
 * fails> </li> </ul>
 *
 * You can create a <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">launch
 * template</a>, which is a resource that contains the parameters to launch an instance. When you launch an instance using
 * <a>RunInstances</a>, you can specify the launch template instead of specifying the launch
 *
 * parameters>
 *
 * To ensure faster instance launches, break up large requests into smaller batches. For example, create five separate
 * launch requests for 100 instances each instead of one launch request for 500
 *
 * instances>
 *
 * An instance is ready for you to use when it's in the <code>running</code> state. You can check the state of your
 * instance using <a>DescribeInstances</a>. You can tag instances and EBS volumes during launch, after launch, or both. For
 * more information, see <a>CreateTags</a> and <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging Your Amazon EC2
 *
 * Resources</a>>
 *
 * Linux instances have access to the public key of the key pair at boot. You can use this key to provide secure access to
 * the instance. Amazon EC2 public images use this feature to provide secure access without passwords. For more
 * information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-key-pairs.html">Key Pairs</a> in the
 * <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * For troubleshooting, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_InstanceStraightToTerminated.html">What To Do If An
 * Instance Immediately Terminates</a>, and <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesConnecting.html">Troubleshooting
 * Connecting to Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
 */
RunInstancesResponse * Ec2Client::runInstances(const RunInstancesRequest &request)
{
    return qobject_cast<RunInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * RunScheduledInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Launches the specified Scheduled
 *
 * Instances>
 *
 * Before you can launch a Scheduled Instance, you must purchase it and obtain an identifier using
 *
 * <a>PurchaseScheduledInstances</a>>
 *
 * You must launch a Scheduled Instance during its scheduled time period. You can't stop or reboot a Scheduled Instance,
 * but you can terminate it as needed. If you terminate a Scheduled Instance before the current scheduled time period ends,
 * you can launch it again after a few minutes. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-scheduled-instances.html">Scheduled Instances</a> in the
 * <i>Amazon Elastic Compute Cloud User
 */
RunScheduledInstancesResponse * Ec2Client::runScheduledInstances(const RunScheduledInstancesRequest &request)
{
    return qobject_cast<RunScheduledInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * StartInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an Amazon EBS-backed instance that you've previously
 *
 * stopped>
 *
 * Instances that use Amazon EBS volumes as their root devices can be quickly stopped and started. When an instance is
 * stopped, the compute resources are released and you are not billed for instance usage. However, your root partition
 * Amazon EBS volume remains and continues to persist your data, and you are charged for Amazon EBS volume usage. You can
 * restart your instance at any time. Every time you start your Windows instance, Amazon EC2 charges you for a full
 * instance hour. If you stop and restart your Windows instance, a new instance hour begins and Amazon EC2 charges you for
 * another full instance hour even if you are still within the same 60-minute period when it was stopped. Every time you
 * start your Linux instance, Amazon EC2 charges a one-minute minimum for instance usage, and thereafter charges per second
 * for instance
 *
 * usage>
 *
 * Before stopping an instance, make sure it is in a state from which it can be restarted. Stopping an instance does not
 * preserve data stored in
 *
 * RAM>
 *
 * Performing this operation on an instance that uses an instance store as its root device returns an
 *
 * error>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html">Stopping
 * Instances</a> in the <i>Amazon Elastic Compute Cloud User
 */
StartInstancesResponse * Ec2Client::startInstances(const StartInstancesRequest &request)
{
    return qobject_cast<StartInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * StopInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an Amazon EBS-backed
 *
 * instance>
 *
 * We don't charge usage for a stopped instance, or data transfer fees; however, your root partition Amazon EBS volume
 * remains and continues to persist your data, and you are charged for Amazon EBS volume usage. Every time you start your
 * Windows instance, Amazon EC2 charges you for a full instance hour. If you stop and restart your Windows instance, a new
 * instance hour begins and Amazon EC2 charges you for another full instance hour even if you are still within the same
 * 60-minute period when it was stopped. Every time you start your Linux instance, Amazon EC2 charges a one-minute minimum
 * for instance usage, and thereafter charges per second for instance
 *
 * usage>
 *
 * You can't start or stop Spot Instances, and you can't stop instance store-backed
 *
 * instances>
 *
 * When you stop an instance, we shut it down. You can restart your instance at any time. Before stopping an instance, make
 * sure it is in a state from which it can be restarted. Stopping an instance does not preserve data stored in
 *
 * RAM>
 *
 * Stopping an instance is different to rebooting or terminating it. For example, when you stop an instance, the root
 * device and any other devices attached to the instance persist. When you terminate an instance, the root device and any
 * other devices attached during the instance launch are automatically deleted. For more information about the differences
 * between rebooting, stopping, and terminating instances, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance Lifecycle</a> in the
 * <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * When you stop an instance, we attempt to shut it down forcibly after a short while. If your instance appears stuck in
 * the stopping state after a period of time, there may be an issue with the underlying host computer. For more
 * information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesStopping.html">Troubleshooting Stopping
 * Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
 */
StopInstancesResponse * Ec2Client::stopInstances(const StopInstancesRequest &request)
{
    return qobject_cast<StopInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * TerminateInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Shuts down one or more instances. This operation is idempotent; if you terminate an instance more than once, each call
 * succeeds.
 *
 * </p
 *
 * If you specify multiple instances and the request fails (for example, because of a single incorrect instance ID), none
 * of the instances are
 *
 * terminated>
 *
 * Terminated instances remain visible after termination (for approximately one
 *
 * hour)>
 *
 * By default, Amazon EC2 deletes all EBS volumes that were attached when the instance launched. Volumes attached after
 * instance launch continue
 *
 * running>
 *
 * You can stop, start, and terminate EBS-backed instances. You can only terminate instance store-backed instances. What
 * happens to an instance differs if you stop it or terminate it. For example, when you stop an instance, the root device
 * and any other devices attached to the instance persist. When you terminate an instance, any attached EBS volumes with
 * the <code>DeleteOnTermination</code> block device mapping parameter set to <code>true</code> are automatically deleted.
 * For more information about the differences between stopping and terminating instances, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-lifecycle.html">Instance Lifecycle</a> in the
 * <i>Amazon Elastic Compute Cloud User
 *
 * Guide</i>>
 *
 * For more information about troubleshooting, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/TroubleshootingInstancesShuttingDown.html">Troubleshooting
 * Terminating Your Instance</a> in the <i>Amazon Elastic Compute Cloud User
 */
TerminateInstancesResponse * Ec2Client::terminateInstances(const TerminateInstancesRequest &request)
{
    return qobject_cast<TerminateInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * UnassignIpv6AddressesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unassigns one or more IPv6 addresses from a network
 */
UnassignIpv6AddressesResponse * Ec2Client::unassignIpv6Addresses(const UnassignIpv6AddressesRequest &request)
{
    return qobject_cast<UnassignIpv6AddressesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * UnassignPrivateIpAddressesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unassigns one or more secondary private IP addresses from a network
 */
UnassignPrivateIpAddressesResponse * Ec2Client::unassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest &request)
{
    return qobject_cast<UnassignPrivateIpAddressesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * UnmonitorInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables detailed monitoring for a running instance. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-cloudwatch.html">Monitoring Your Instances and
 * Volumes</a> in the <i>Amazon Elastic Compute Cloud User
 */
UnmonitorInstancesResponse * Ec2Client::unmonitorInstances(const UnmonitorInstancesRequest &request)
{
    return qobject_cast<UnmonitorInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * UpdateSecurityGroupRuleDescriptionsEgressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * [EC2-VPC only] Updates the description of an egress (outbound) security group rule. You can replace an existing
 * description, or add a description to a rule that did not have one
 *
 * previously>
 *
 * You specify the description as part of the IP permissions structure. You can remove a description for a security group
 * rule by omitting the description parameter in the
 */
UpdateSecurityGroupRuleDescriptionsEgressResponse * Ec2Client::updateSecurityGroupRuleDescriptionsEgress(const UpdateSecurityGroupRuleDescriptionsEgressRequest &request)
{
    return qobject_cast<UpdateSecurityGroupRuleDescriptionsEgressResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2Client service, and returns a pointer to an
 * UpdateSecurityGroupRuleDescriptionsIngressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description of an ingress (inbound) security group rule. You can replace an existing description, or add a
 * description to a rule that did not have one
 *
 * previously>
 *
 * You specify the description as part of the IP permissions structure. You can remove a description for a security group
 * rule by omitting the description parameter in the
 */
UpdateSecurityGroupRuleDescriptionsIngressResponse * Ec2Client::updateSecurityGroupRuleDescriptionsIngress(const UpdateSecurityGroupRuleDescriptionsIngressRequest &request)
{
    return qobject_cast<UpdateSecurityGroupRuleDescriptionsIngressResponse *>(send(request));
}

/*!
 * \class QtAws::EC2::Ec2ClientPrivate
 * \brief The Ec2ClientPrivate class provides private implementation for Ec2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a Ec2ClientPrivate object with public implementation \a q.
 */
Ec2ClientPrivate::Ec2ClientPrivate(Ec2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace EC2
} // namespace QtAws
