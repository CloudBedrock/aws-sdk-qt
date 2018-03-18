/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_EC2CLIENT_H
#define QTAWS_EC2CLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace EC2 {

class Ec2ClientPrivate;

class QTAWS_EXPORT Ec2Client : public AwsAbstractClient {
    Q_OBJECT

public:
    Ec2Client(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Ec2Client(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptReservedInstancesExchangeQuoteResponse * acceptReservedInstancesExchangeQuote(const AcceptReservedInstancesExchangeQuoteRequest &request);
    AcceptVpcEndpointConnectionsResponse * acceptVpcEndpointConnections(const AcceptVpcEndpointConnectionsRequest &request);
    AcceptVpcPeeringConnectionResponse * acceptVpcPeeringConnection(const AcceptVpcPeeringConnectionRequest &request);
    AllocateAddressResponse * allocateAddress(const AllocateAddressRequest &request);
    AllocateHostsResponse * allocateHosts(const AllocateHostsRequest &request);
    AssignIpv6AddressesResponse * assignIpv6Addresses(const AssignIpv6AddressesRequest &request);
    AssignPrivateIpAddressesResponse * assignPrivateIpAddresses(const AssignPrivateIpAddressesRequest &request);
    AssociateAddressResponse * associateAddress(const AssociateAddressRequest &request);
    AssociateDhcpOptionsResponse * associateDhcpOptions(const AssociateDhcpOptionsRequest &request);
    AssociateIamInstanceProfileResponse * associateIamInstanceProfile(const AssociateIamInstanceProfileRequest &request);
    AssociateRouteTableResponse * associateRouteTable(const AssociateRouteTableRequest &request);
    AssociateSubnetCidrBlockResponse * associateSubnetCidrBlock(const AssociateSubnetCidrBlockRequest &request);
    AssociateVpcCidrBlockResponse * associateVpcCidrBlock(const AssociateVpcCidrBlockRequest &request);
    AttachClassicLinkVpcResponse * attachClassicLinkVpc(const AttachClassicLinkVpcRequest &request);
    AttachInternetGatewayResponse * attachInternetGateway(const AttachInternetGatewayRequest &request);
    AttachNetworkInterfaceResponse * attachNetworkInterface(const AttachNetworkInterfaceRequest &request);
    AttachVolumeResponse * attachVolume(const AttachVolumeRequest &request);
    AttachVpnGatewayResponse * attachVpnGateway(const AttachVpnGatewayRequest &request);
    AuthorizeSecurityGroupEgressResponse * authorizeSecurityGroupEgress(const AuthorizeSecurityGroupEgressRequest &request);
    AuthorizeSecurityGroupIngressResponse * authorizeSecurityGroupIngress(const AuthorizeSecurityGroupIngressRequest &request);
    BundleInstanceResponse * bundleInstance(const BundleInstanceRequest &request);
    CancelBundleTaskResponse * cancelBundleTask(const CancelBundleTaskRequest &request);
    CancelConversionTaskResponse * cancelConversionTask(const CancelConversionTaskRequest &request);
    CancelExportTaskResponse * cancelExportTask(const CancelExportTaskRequest &request);
    CancelImportTaskResponse * cancelImportTask(const CancelImportTaskRequest &request);
    CancelReservedInstancesListingResponse * cancelReservedInstancesListing(const CancelReservedInstancesListingRequest &request);
    CancelSpotFleetRequestsResponse * cancelSpotFleetRequests(const CancelSpotFleetRequestsRequest &request);
    CancelSpotInstanceRequestsResponse * cancelSpotInstanceRequests(const CancelSpotInstanceRequestsRequest &request);
    ConfirmProductInstanceResponse * confirmProductInstance(const ConfirmProductInstanceRequest &request);
    CopyFpgaImageResponse * copyFpgaImage(const CopyFpgaImageRequest &request);
    CopyImageResponse * copyImage(const CopyImageRequest &request);
    CopySnapshotResponse * copySnapshot(const CopySnapshotRequest &request);
    CreateCustomerGatewayResponse * createCustomerGateway(const CreateCustomerGatewayRequest &request);
    CreateDefaultSubnetResponse * createDefaultSubnet(const CreateDefaultSubnetRequest &request);
    CreateDefaultVpcResponse * createDefaultVpc(const CreateDefaultVpcRequest &request);
    CreateDhcpOptionsResponse * createDhcpOptions(const CreateDhcpOptionsRequest &request);
    CreateEgressOnlyInternetGatewayResponse * createEgressOnlyInternetGateway(const CreateEgressOnlyInternetGatewayRequest &request);
    CreateFlowLogsResponse * createFlowLogs(const CreateFlowLogsRequest &request);
    CreateFpgaImageResponse * createFpgaImage(const CreateFpgaImageRequest &request);
    CreateImageResponse * createImage(const CreateImageRequest &request);
    CreateInstanceExportTaskResponse * createInstanceExportTask(const CreateInstanceExportTaskRequest &request);
    CreateInternetGatewayResponse * createInternetGateway(const CreateInternetGatewayRequest &request);
    CreateKeyPairResponse * createKeyPair(const CreateKeyPairRequest &request);
    CreateLaunchTemplateResponse * createLaunchTemplate(const CreateLaunchTemplateRequest &request);
    CreateLaunchTemplateVersionResponse * createLaunchTemplateVersion(const CreateLaunchTemplateVersionRequest &request);
    CreateNatGatewayResponse * createNatGateway(const CreateNatGatewayRequest &request);
    CreateNetworkAclResponse * createNetworkAcl(const CreateNetworkAclRequest &request);
    CreateNetworkAclEntryResponse * createNetworkAclEntry(const CreateNetworkAclEntryRequest &request);
    CreateNetworkInterfaceResponse * createNetworkInterface(const CreateNetworkInterfaceRequest &request);
    CreateNetworkInterfacePermissionResponse * createNetworkInterfacePermission(const CreateNetworkInterfacePermissionRequest &request);
    CreatePlacementGroupResponse * createPlacementGroup(const CreatePlacementGroupRequest &request);
    CreateReservedInstancesListingResponse * createReservedInstancesListing(const CreateReservedInstancesListingRequest &request);
    CreateRouteResponse * createRoute(const CreateRouteRequest &request);
    CreateRouteTableResponse * createRouteTable(const CreateRouteTableRequest &request);
    CreateSecurityGroupResponse * createSecurityGroup(const CreateSecurityGroupRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    CreateSpotDatafeedSubscriptionResponse * createSpotDatafeedSubscription(const CreateSpotDatafeedSubscriptionRequest &request);
    CreateSubnetResponse * createSubnet(const CreateSubnetRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    CreateVolumeResponse * createVolume(const CreateVolumeRequest &request);
    CreateVpcResponse * createVpc(const CreateVpcRequest &request);
    CreateVpcEndpointResponse * createVpcEndpoint(const CreateVpcEndpointRequest &request);
    CreateVpcEndpointConnectionNotificationResponse * createVpcEndpointConnectionNotification(const CreateVpcEndpointConnectionNotificationRequest &request);
    CreateVpcEndpointServiceConfigurationResponse * createVpcEndpointServiceConfiguration(const CreateVpcEndpointServiceConfigurationRequest &request);
    CreateVpcPeeringConnectionResponse * createVpcPeeringConnection(const CreateVpcPeeringConnectionRequest &request);
    CreateVpnConnectionResponse * createVpnConnection(const CreateVpnConnectionRequest &request);
    CreateVpnConnectionRouteResponse * createVpnConnectionRoute(const CreateVpnConnectionRouteRequest &request);
    CreateVpnGatewayResponse * createVpnGateway(const CreateVpnGatewayRequest &request);
    DeleteCustomerGatewayResponse * deleteCustomerGateway(const DeleteCustomerGatewayRequest &request);
    DeleteDhcpOptionsResponse * deleteDhcpOptions(const DeleteDhcpOptionsRequest &request);
    DeleteEgressOnlyInternetGatewayResponse * deleteEgressOnlyInternetGateway(const DeleteEgressOnlyInternetGatewayRequest &request);
    DeleteFlowLogsResponse * deleteFlowLogs(const DeleteFlowLogsRequest &request);
    DeleteFpgaImageResponse * deleteFpgaImage(const DeleteFpgaImageRequest &request);
    DeleteInternetGatewayResponse * deleteInternetGateway(const DeleteInternetGatewayRequest &request);
    DeleteKeyPairResponse * deleteKeyPair(const DeleteKeyPairRequest &request);
    DeleteLaunchTemplateResponse * deleteLaunchTemplate(const DeleteLaunchTemplateRequest &request);
    DeleteLaunchTemplateVersionsResponse * deleteLaunchTemplateVersions(const DeleteLaunchTemplateVersionsRequest &request);
    DeleteNatGatewayResponse * deleteNatGateway(const DeleteNatGatewayRequest &request);
    DeleteNetworkAclResponse * deleteNetworkAcl(const DeleteNetworkAclRequest &request);
    DeleteNetworkAclEntryResponse * deleteNetworkAclEntry(const DeleteNetworkAclEntryRequest &request);
    DeleteNetworkInterfaceResponse * deleteNetworkInterface(const DeleteNetworkInterfaceRequest &request);
    DeleteNetworkInterfacePermissionResponse * deleteNetworkInterfacePermission(const DeleteNetworkInterfacePermissionRequest &request);
    DeletePlacementGroupResponse * deletePlacementGroup(const DeletePlacementGroupRequest &request);
    DeleteRouteResponse * deleteRoute(const DeleteRouteRequest &request);
    DeleteRouteTableResponse * deleteRouteTable(const DeleteRouteTableRequest &request);
    DeleteSecurityGroupResponse * deleteSecurityGroup(const DeleteSecurityGroupRequest &request);
    DeleteSnapshotResponse * deleteSnapshot(const DeleteSnapshotRequest &request);
    DeleteSpotDatafeedSubscriptionResponse * deleteSpotDatafeedSubscription(const DeleteSpotDatafeedSubscriptionRequest &request);
    DeleteSubnetResponse * deleteSubnet(const DeleteSubnetRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DeleteVolumeResponse * deleteVolume(const DeleteVolumeRequest &request);
    DeleteVpcResponse * deleteVpc(const DeleteVpcRequest &request);
    DeleteVpcEndpointConnectionNotificationsResponse * deleteVpcEndpointConnectionNotifications(const DeleteVpcEndpointConnectionNotificationsRequest &request);
    DeleteVpcEndpointServiceConfigurationsResponse * deleteVpcEndpointServiceConfigurations(const DeleteVpcEndpointServiceConfigurationsRequest &request);
    DeleteVpcEndpointsResponse * deleteVpcEndpoints(const DeleteVpcEndpointsRequest &request);
    DeleteVpcPeeringConnectionResponse * deleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest &request);
    DeleteVpnConnectionResponse * deleteVpnConnection(const DeleteVpnConnectionRequest &request);
    DeleteVpnConnectionRouteResponse * deleteVpnConnectionRoute(const DeleteVpnConnectionRouteRequest &request);
    DeleteVpnGatewayResponse * deleteVpnGateway(const DeleteVpnGatewayRequest &request);
    DeregisterImageResponse * deregisterImage(const DeregisterImageRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes(const DescribeAccountAttributesRequest &request);
    DescribeAddressesResponse * describeAddresses(const DescribeAddressesRequest &request);
    DescribeAggregateIdFormatResponse * describeAggregateIdFormat(const DescribeAggregateIdFormatRequest &request);
    DescribeAvailabilityZonesResponse * describeAvailabilityZones(const DescribeAvailabilityZonesRequest &request);
    DescribeBundleTasksResponse * describeBundleTasks(const DescribeBundleTasksRequest &request);
    DescribeClassicLinkInstancesResponse * describeClassicLinkInstances(const DescribeClassicLinkInstancesRequest &request);
    DescribeConversionTasksResponse * describeConversionTasks(const DescribeConversionTasksRequest &request);
    DescribeCustomerGatewaysResponse * describeCustomerGateways(const DescribeCustomerGatewaysRequest &request);
    DescribeDhcpOptionsResponse * describeDhcpOptions(const DescribeDhcpOptionsRequest &request);
    DescribeEgressOnlyInternetGatewaysResponse * describeEgressOnlyInternetGateways(const DescribeEgressOnlyInternetGatewaysRequest &request);
    DescribeElasticGpusResponse * describeElasticGpus(const DescribeElasticGpusRequest &request);
    DescribeExportTasksResponse * describeExportTasks(const DescribeExportTasksRequest &request);
    DescribeFlowLogsResponse * describeFlowLogs(const DescribeFlowLogsRequest &request);
    DescribeFpgaImageAttributeResponse * describeFpgaImageAttribute(const DescribeFpgaImageAttributeRequest &request);
    DescribeFpgaImagesResponse * describeFpgaImages(const DescribeFpgaImagesRequest &request);
    DescribeHostReservationOfferingsResponse * describeHostReservationOfferings(const DescribeHostReservationOfferingsRequest &request);
    DescribeHostReservationsResponse * describeHostReservations(const DescribeHostReservationsRequest &request);
    DescribeHostsResponse * describeHosts(const DescribeHostsRequest &request);
    DescribeIamInstanceProfileAssociationsResponse * describeIamInstanceProfileAssociations(const DescribeIamInstanceProfileAssociationsRequest &request);
    DescribeIdFormatResponse * describeIdFormat(const DescribeIdFormatRequest &request);
    DescribeIdentityIdFormatResponse * describeIdentityIdFormat(const DescribeIdentityIdFormatRequest &request);
    DescribeImageAttributeResponse * describeImageAttribute(const DescribeImageAttributeRequest &request);
    DescribeImagesResponse * describeImages(const DescribeImagesRequest &request);
    DescribeImportImageTasksResponse * describeImportImageTasks(const DescribeImportImageTasksRequest &request);
    DescribeImportSnapshotTasksResponse * describeImportSnapshotTasks(const DescribeImportSnapshotTasksRequest &request);
    DescribeInstanceAttributeResponse * describeInstanceAttribute(const DescribeInstanceAttributeRequest &request);
    DescribeInstanceCreditSpecificationsResponse * describeInstanceCreditSpecifications(const DescribeInstanceCreditSpecificationsRequest &request);
    DescribeInstanceStatusResponse * describeInstanceStatus(const DescribeInstanceStatusRequest &request);
    DescribeInstancesResponse * describeInstances(const DescribeInstancesRequest &request);
    DescribeInternetGatewaysResponse * describeInternetGateways(const DescribeInternetGatewaysRequest &request);
    DescribeKeyPairsResponse * describeKeyPairs(const DescribeKeyPairsRequest &request);
    DescribeLaunchTemplateVersionsResponse * describeLaunchTemplateVersions(const DescribeLaunchTemplateVersionsRequest &request);
    DescribeLaunchTemplatesResponse * describeLaunchTemplates(const DescribeLaunchTemplatesRequest &request);
    DescribeMovingAddressesResponse * describeMovingAddresses(const DescribeMovingAddressesRequest &request);
    DescribeNatGatewaysResponse * describeNatGateways(const DescribeNatGatewaysRequest &request);
    DescribeNetworkAclsResponse * describeNetworkAcls(const DescribeNetworkAclsRequest &request);
    DescribeNetworkInterfaceAttributeResponse * describeNetworkInterfaceAttribute(const DescribeNetworkInterfaceAttributeRequest &request);
    DescribeNetworkInterfacePermissionsResponse * describeNetworkInterfacePermissions(const DescribeNetworkInterfacePermissionsRequest &request);
    DescribeNetworkInterfacesResponse * describeNetworkInterfaces(const DescribeNetworkInterfacesRequest &request);
    DescribePlacementGroupsResponse * describePlacementGroups(const DescribePlacementGroupsRequest &request);
    DescribePrefixListsResponse * describePrefixLists(const DescribePrefixListsRequest &request);
    DescribePrincipalIdFormatResponse * describePrincipalIdFormat(const DescribePrincipalIdFormatRequest &request);
    DescribeRegionsResponse * describeRegions(const DescribeRegionsRequest &request);
    DescribeReservedInstancesResponse * describeReservedInstances(const DescribeReservedInstancesRequest &request);
    DescribeReservedInstancesListingsResponse * describeReservedInstancesListings(const DescribeReservedInstancesListingsRequest &request);
    DescribeReservedInstancesModificationsResponse * describeReservedInstancesModifications(const DescribeReservedInstancesModificationsRequest &request);
    DescribeReservedInstancesOfferingsResponse * describeReservedInstancesOfferings(const DescribeReservedInstancesOfferingsRequest &request);
    DescribeRouteTablesResponse * describeRouteTables(const DescribeRouteTablesRequest &request);
    DescribeScheduledInstanceAvailabilityResponse * describeScheduledInstanceAvailability(const DescribeScheduledInstanceAvailabilityRequest &request);
    DescribeScheduledInstancesResponse * describeScheduledInstances(const DescribeScheduledInstancesRequest &request);
    DescribeSecurityGroupReferencesResponse * describeSecurityGroupReferences(const DescribeSecurityGroupReferencesRequest &request);
    DescribeSecurityGroupsResponse * describeSecurityGroups(const DescribeSecurityGroupsRequest &request);
    DescribeSnapshotAttributeResponse * describeSnapshotAttribute(const DescribeSnapshotAttributeRequest &request);
    DescribeSnapshotsResponse * describeSnapshots(const DescribeSnapshotsRequest &request);
    DescribeSpotDatafeedSubscriptionResponse * describeSpotDatafeedSubscription(const DescribeSpotDatafeedSubscriptionRequest &request);
    DescribeSpotFleetInstancesResponse * describeSpotFleetInstances(const DescribeSpotFleetInstancesRequest &request);
    DescribeSpotFleetRequestHistoryResponse * describeSpotFleetRequestHistory(const DescribeSpotFleetRequestHistoryRequest &request);
    DescribeSpotFleetRequestsResponse * describeSpotFleetRequests(const DescribeSpotFleetRequestsRequest &request);
    DescribeSpotInstanceRequestsResponse * describeSpotInstanceRequests(const DescribeSpotInstanceRequestsRequest &request);
    DescribeSpotPriceHistoryResponse * describeSpotPriceHistory(const DescribeSpotPriceHistoryRequest &request);
    DescribeStaleSecurityGroupsResponse * describeStaleSecurityGroups(const DescribeStaleSecurityGroupsRequest &request);
    DescribeSubnetsResponse * describeSubnets(const DescribeSubnetsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeVolumeAttributeResponse * describeVolumeAttribute(const DescribeVolumeAttributeRequest &request);
    DescribeVolumeStatusResponse * describeVolumeStatus(const DescribeVolumeStatusRequest &request);
    DescribeVolumesResponse * describeVolumes(const DescribeVolumesRequest &request);
    DescribeVolumesModificationsResponse * describeVolumesModifications(const DescribeVolumesModificationsRequest &request);
    DescribeVpcAttributeResponse * describeVpcAttribute(const DescribeVpcAttributeRequest &request);
    DescribeVpcClassicLinkResponse * describeVpcClassicLink(const DescribeVpcClassicLinkRequest &request);
    DescribeVpcClassicLinkDnsSupportResponse * describeVpcClassicLinkDnsSupport(const DescribeVpcClassicLinkDnsSupportRequest &request);
    DescribeVpcEndpointConnectionNotificationsResponse * describeVpcEndpointConnectionNotifications(const DescribeVpcEndpointConnectionNotificationsRequest &request);
    DescribeVpcEndpointConnectionsResponse * describeVpcEndpointConnections(const DescribeVpcEndpointConnectionsRequest &request);
    DescribeVpcEndpointServiceConfigurationsResponse * describeVpcEndpointServiceConfigurations(const DescribeVpcEndpointServiceConfigurationsRequest &request);
    DescribeVpcEndpointServicePermissionsResponse * describeVpcEndpointServicePermissions(const DescribeVpcEndpointServicePermissionsRequest &request);
    DescribeVpcEndpointServicesResponse * describeVpcEndpointServices(const DescribeVpcEndpointServicesRequest &request);
    DescribeVpcEndpointsResponse * describeVpcEndpoints(const DescribeVpcEndpointsRequest &request);
    DescribeVpcPeeringConnectionsResponse * describeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest &request);
    DescribeVpcsResponse * describeVpcs(const DescribeVpcsRequest &request);
    DescribeVpnConnectionsResponse * describeVpnConnections(const DescribeVpnConnectionsRequest &request);
    DescribeVpnGatewaysResponse * describeVpnGateways(const DescribeVpnGatewaysRequest &request);
    DetachClassicLinkVpcResponse * detachClassicLinkVpc(const DetachClassicLinkVpcRequest &request);
    DetachInternetGatewayResponse * detachInternetGateway(const DetachInternetGatewayRequest &request);
    DetachNetworkInterfaceResponse * detachNetworkInterface(const DetachNetworkInterfaceRequest &request);
    DetachVolumeResponse * detachVolume(const DetachVolumeRequest &request);
    DetachVpnGatewayResponse * detachVpnGateway(const DetachVpnGatewayRequest &request);
    DisableVgwRoutePropagationResponse * disableVgwRoutePropagation(const DisableVgwRoutePropagationRequest &request);
    DisableVpcClassicLinkResponse * disableVpcClassicLink(const DisableVpcClassicLinkRequest &request);
    DisableVpcClassicLinkDnsSupportResponse * disableVpcClassicLinkDnsSupport(const DisableVpcClassicLinkDnsSupportRequest &request);
    DisassociateAddressResponse * disassociateAddress(const DisassociateAddressRequest &request);
    DisassociateIamInstanceProfileResponse * disassociateIamInstanceProfile(const DisassociateIamInstanceProfileRequest &request);
    DisassociateRouteTableResponse * disassociateRouteTable(const DisassociateRouteTableRequest &request);
    DisassociateSubnetCidrBlockResponse * disassociateSubnetCidrBlock(const DisassociateSubnetCidrBlockRequest &request);
    DisassociateVpcCidrBlockResponse * disassociateVpcCidrBlock(const DisassociateVpcCidrBlockRequest &request);
    EnableVgwRoutePropagationResponse * enableVgwRoutePropagation(const EnableVgwRoutePropagationRequest &request);
    EnableVolumeIOResponse * enableVolumeIO(const EnableVolumeIORequest &request);
    EnableVpcClassicLinkResponse * enableVpcClassicLink(const EnableVpcClassicLinkRequest &request);
    EnableVpcClassicLinkDnsSupportResponse * enableVpcClassicLinkDnsSupport(const EnableVpcClassicLinkDnsSupportRequest &request);
    GetConsoleOutputResponse * getConsoleOutput(const GetConsoleOutputRequest &request);
    GetConsoleScreenshotResponse * getConsoleScreenshot(const GetConsoleScreenshotRequest &request);
    GetHostReservationPurchasePreviewResponse * getHostReservationPurchasePreview(const GetHostReservationPurchasePreviewRequest &request);
    GetLaunchTemplateDataResponse * getLaunchTemplateData(const GetLaunchTemplateDataRequest &request);
    GetPasswordDataResponse * getPasswordData(const GetPasswordDataRequest &request);
    GetReservedInstancesExchangeQuoteResponse * getReservedInstancesExchangeQuote(const GetReservedInstancesExchangeQuoteRequest &request);
    ImportImageResponse * importImage(const ImportImageRequest &request);
    ImportInstanceResponse * importInstance(const ImportInstanceRequest &request);
    ImportKeyPairResponse * importKeyPair(const ImportKeyPairRequest &request);
    ImportSnapshotResponse * importSnapshot(const ImportSnapshotRequest &request);
    ImportVolumeResponse * importVolume(const ImportVolumeRequest &request);
    ModifyFpgaImageAttributeResponse * modifyFpgaImageAttribute(const ModifyFpgaImageAttributeRequest &request);
    ModifyHostsResponse * modifyHosts(const ModifyHostsRequest &request);
    ModifyIdFormatResponse * modifyIdFormat(const ModifyIdFormatRequest &request);
    ModifyIdentityIdFormatResponse * modifyIdentityIdFormat(const ModifyIdentityIdFormatRequest &request);
    ModifyImageAttributeResponse * modifyImageAttribute(const ModifyImageAttributeRequest &request);
    ModifyInstanceAttributeResponse * modifyInstanceAttribute(const ModifyInstanceAttributeRequest &request);
    ModifyInstanceCreditSpecificationResponse * modifyInstanceCreditSpecification(const ModifyInstanceCreditSpecificationRequest &request);
    ModifyInstancePlacementResponse * modifyInstancePlacement(const ModifyInstancePlacementRequest &request);
    ModifyLaunchTemplateResponse * modifyLaunchTemplate(const ModifyLaunchTemplateRequest &request);
    ModifyNetworkInterfaceAttributeResponse * modifyNetworkInterfaceAttribute(const ModifyNetworkInterfaceAttributeRequest &request);
    ModifyReservedInstancesResponse * modifyReservedInstances(const ModifyReservedInstancesRequest &request);
    ModifySnapshotAttributeResponse * modifySnapshotAttribute(const ModifySnapshotAttributeRequest &request);
    ModifySpotFleetRequestResponse * modifySpotFleetRequest(const ModifySpotFleetRequestRequest &request);
    ModifySubnetAttributeResponse * modifySubnetAttribute(const ModifySubnetAttributeRequest &request);
    ModifyVolumeResponse * modifyVolume(const ModifyVolumeRequest &request);
    ModifyVolumeAttributeResponse * modifyVolumeAttribute(const ModifyVolumeAttributeRequest &request);
    ModifyVpcAttributeResponse * modifyVpcAttribute(const ModifyVpcAttributeRequest &request);
    ModifyVpcEndpointResponse * modifyVpcEndpoint(const ModifyVpcEndpointRequest &request);
    ModifyVpcEndpointConnectionNotificationResponse * modifyVpcEndpointConnectionNotification(const ModifyVpcEndpointConnectionNotificationRequest &request);
    ModifyVpcEndpointServiceConfigurationResponse * modifyVpcEndpointServiceConfiguration(const ModifyVpcEndpointServiceConfigurationRequest &request);
    ModifyVpcEndpointServicePermissionsResponse * modifyVpcEndpointServicePermissions(const ModifyVpcEndpointServicePermissionsRequest &request);
    ModifyVpcPeeringConnectionOptionsResponse * modifyVpcPeeringConnectionOptions(const ModifyVpcPeeringConnectionOptionsRequest &request);
    ModifyVpcTenancyResponse * modifyVpcTenancy(const ModifyVpcTenancyRequest &request);
    MonitorInstancesResponse * monitorInstances(const MonitorInstancesRequest &request);
    MoveAddressToVpcResponse * moveAddressToVpc(const MoveAddressToVpcRequest &request);
    PurchaseHostReservationResponse * purchaseHostReservation(const PurchaseHostReservationRequest &request);
    PurchaseReservedInstancesOfferingResponse * purchaseReservedInstancesOffering(const PurchaseReservedInstancesOfferingRequest &request);
    PurchaseScheduledInstancesResponse * purchaseScheduledInstances(const PurchaseScheduledInstancesRequest &request);
    RebootInstancesResponse * rebootInstances(const RebootInstancesRequest &request);
    RegisterImageResponse * registerImage(const RegisterImageRequest &request);
    RejectVpcEndpointConnectionsResponse * rejectVpcEndpointConnections(const RejectVpcEndpointConnectionsRequest &request);
    RejectVpcPeeringConnectionResponse * rejectVpcPeeringConnection(const RejectVpcPeeringConnectionRequest &request);
    ReleaseAddressResponse * releaseAddress(const ReleaseAddressRequest &request);
    ReleaseHostsResponse * releaseHosts(const ReleaseHostsRequest &request);
    ReplaceIamInstanceProfileAssociationResponse * replaceIamInstanceProfileAssociation(const ReplaceIamInstanceProfileAssociationRequest &request);
    ReplaceNetworkAclAssociationResponse * replaceNetworkAclAssociation(const ReplaceNetworkAclAssociationRequest &request);
    ReplaceNetworkAclEntryResponse * replaceNetworkAclEntry(const ReplaceNetworkAclEntryRequest &request);
    ReplaceRouteResponse * replaceRoute(const ReplaceRouteRequest &request);
    ReplaceRouteTableAssociationResponse * replaceRouteTableAssociation(const ReplaceRouteTableAssociationRequest &request);
    ReportInstanceStatusResponse * reportInstanceStatus(const ReportInstanceStatusRequest &request);
    RequestSpotFleetResponse * requestSpotFleet(const RequestSpotFleetRequest &request);
    RequestSpotInstancesResponse * requestSpotInstances(const RequestSpotInstancesRequest &request);
    ResetFpgaImageAttributeResponse * resetFpgaImageAttribute(const ResetFpgaImageAttributeRequest &request);
    ResetImageAttributeResponse * resetImageAttribute(const ResetImageAttributeRequest &request);
    ResetInstanceAttributeResponse * resetInstanceAttribute(const ResetInstanceAttributeRequest &request);
    ResetNetworkInterfaceAttributeResponse * resetNetworkInterfaceAttribute(const ResetNetworkInterfaceAttributeRequest &request);
    ResetSnapshotAttributeResponse * resetSnapshotAttribute(const ResetSnapshotAttributeRequest &request);
    RestoreAddressToClassicResponse * restoreAddressToClassic(const RestoreAddressToClassicRequest &request);
    RevokeSecurityGroupEgressResponse * revokeSecurityGroupEgress(const RevokeSecurityGroupEgressRequest &request);
    RevokeSecurityGroupIngressResponse * revokeSecurityGroupIngress(const RevokeSecurityGroupIngressRequest &request);
    RunInstancesResponse * runInstances(const RunInstancesRequest &request);
    RunScheduledInstancesResponse * runScheduledInstances(const RunScheduledInstancesRequest &request);
    StartInstancesResponse * startInstances(const StartInstancesRequest &request);
    StopInstancesResponse * stopInstances(const StopInstancesRequest &request);
    TerminateInstancesResponse * terminateInstances(const TerminateInstancesRequest &request);
    UnassignIpv6AddressesResponse * unassignIpv6Addresses(const UnassignIpv6AddressesRequest &request);
    UnassignPrivateIpAddressesResponse * unassignPrivateIpAddresses(const UnassignPrivateIpAddressesRequest &request);
    UnmonitorInstancesResponse * unmonitorInstances(const UnmonitorInstancesRequest &request);
    UpdateSecurityGroupRuleDescriptionsEgressResponse * updateSecurityGroupRuleDescriptionsEgress(const UpdateSecurityGroupRuleDescriptionsEgressRequest &request);
    UpdateSecurityGroupRuleDescriptionsIngressResponse * updateSecurityGroupRuleDescriptionsIngress(const UpdateSecurityGroupRuleDescriptionsIngressRequest &request);

private:
    Q_DECLARE_PRIVATE(Ec2Client)
    Q_DISABLE_COPY(Ec2Client)

};

} // namespace EC2
} // namespace AWS

#endif
