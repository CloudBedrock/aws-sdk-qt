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

#ifndef QTAWS_OPSWORKSCLIENT_H
#define QTAWS_OPSWORKSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace OpsWorks {

class OpsWorksClientPrivate;
class AssignInstanceResponse;
class AssignVolumeResponse;
class AssociateElasticIpResponse;
class AttachElasticLoadBalancerResponse;
class CloneStackResponse;
class CreateAppResponse;
class CreateDeploymentResponse;
class CreateInstanceResponse;
class CreateLayerResponse;
class CreateStackResponse;
class CreateUserProfileResponse;
class DeleteAppResponse;
class DeleteInstanceResponse;
class DeleteLayerResponse;
class DeleteStackResponse;
class DeleteUserProfileResponse;
class DeregisterEcsClusterResponse;
class DeregisterElasticIpResponse;
class DeregisterInstanceResponse;
class DeregisterRdsDbInstanceResponse;
class DeregisterVolumeResponse;
class DescribeAgentVersionsResponse;
class DescribeAppsResponse;
class DescribeCommandsResponse;
class DescribeDeploymentsResponse;
class DescribeEcsClustersResponse;
class DescribeElasticIpsResponse;
class DescribeElasticLoadBalancersResponse;
class DescribeInstancesResponse;
class DescribeLayersResponse;
class DescribeLoadBasedAutoScalingResponse;
class DescribeMyUserProfileResponse;
class DescribeOperatingSystemsResponse;
class DescribePermissionsResponse;
class DescribeRaidArraysResponse;
class DescribeRdsDbInstancesResponse;
class DescribeServiceErrorsResponse;
class DescribeStackProvisioningParametersResponse;
class DescribeStackSummaryResponse;
class DescribeStacksResponse;
class DescribeTimeBasedAutoScalingResponse;
class DescribeUserProfilesResponse;
class DescribeVolumesResponse;
class DetachElasticLoadBalancerResponse;
class DisassociateElasticIpResponse;
class GetHostnameSuggestionResponse;
class GrantAccessResponse;
class ListTagsResponse;
class RebootInstanceResponse;
class RegisterEcsClusterResponse;
class RegisterElasticIpResponse;
class RegisterInstanceResponse;
class RegisterRdsDbInstanceResponse;
class RegisterVolumeResponse;
class SetLoadBasedAutoScalingResponse;
class SetPermissionResponse;
class SetTimeBasedAutoScalingResponse;
class StartInstanceResponse;
class StartStackResponse;
class StopInstanceResponse;
class StopStackResponse;
class TagResourceResponse;
class UnassignInstanceResponse;
class UnassignVolumeResponse;
class UntagResourceResponse;
class UpdateAppResponse;
class UpdateElasticIpResponse;
class UpdateInstanceResponse;
class UpdateLayerResponse;
class UpdateMyUserProfileResponse;
class UpdateRdsDbInstanceResponse;
class UpdateStackResponse;
class UpdateUserProfileResponse;
class UpdateVolumeResponse;

class QTAWS_EXPORT OpsWorksClient : public AwsAbstractClient {
    Q_OBJECT

public:
    OpsWorksClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    OpsWorksClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssignInstanceResponse * assignInstance(const AssignInstanceRequest &request);
    AssignVolumeResponse * assignVolume(const AssignVolumeRequest &request);
    AssociateElasticIpResponse * associateElasticIp(const AssociateElasticIpRequest &request);
    AttachElasticLoadBalancerResponse * attachElasticLoadBalancer(const AttachElasticLoadBalancerRequest &request);
    CloneStackResponse * cloneStack(const CloneStackRequest &request);
    CreateAppResponse * createApp(const CreateAppRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateInstanceResponse * createInstance(const CreateInstanceRequest &request);
    CreateLayerResponse * createLayer(const CreateLayerRequest &request);
    CreateStackResponse * createStack(const CreateStackRequest &request);
    CreateUserProfileResponse * createUserProfile(const CreateUserProfileRequest &request);
    DeleteAppResponse * deleteApp(const DeleteAppRequest &request);
    DeleteInstanceResponse * deleteInstance(const DeleteInstanceRequest &request);
    DeleteLayerResponse * deleteLayer(const DeleteLayerRequest &request);
    DeleteStackResponse * deleteStack(const DeleteStackRequest &request);
    DeleteUserProfileResponse * deleteUserProfile(const DeleteUserProfileRequest &request);
    DeregisterEcsClusterResponse * deregisterEcsCluster(const DeregisterEcsClusterRequest &request);
    DeregisterElasticIpResponse * deregisterElasticIp(const DeregisterElasticIpRequest &request);
    DeregisterInstanceResponse * deregisterInstance(const DeregisterInstanceRequest &request);
    DeregisterRdsDbInstanceResponse * deregisterRdsDbInstance(const DeregisterRdsDbInstanceRequest &request);
    DeregisterVolumeResponse * deregisterVolume(const DeregisterVolumeRequest &request);
    DescribeAgentVersionsResponse * describeAgentVersions(const DescribeAgentVersionsRequest &request);
    DescribeAppsResponse * describeApps(const DescribeAppsRequest &request);
    DescribeCommandsResponse * describeCommands(const DescribeCommandsRequest &request);
    DescribeDeploymentsResponse * describeDeployments(const DescribeDeploymentsRequest &request);
    DescribeEcsClustersResponse * describeEcsClusters(const DescribeEcsClustersRequest &request);
    DescribeElasticIpsResponse * describeElasticIps(const DescribeElasticIpsRequest &request);
    DescribeElasticLoadBalancersResponse * describeElasticLoadBalancers(const DescribeElasticLoadBalancersRequest &request);
    DescribeInstancesResponse * describeInstances(const DescribeInstancesRequest &request);
    DescribeLayersResponse * describeLayers(const DescribeLayersRequest &request);
    DescribeLoadBasedAutoScalingResponse * describeLoadBasedAutoScaling(const DescribeLoadBasedAutoScalingRequest &request);
    DescribeMyUserProfileResponse * describeMyUserProfile();
    DescribeOperatingSystemsResponse * describeOperatingSystems();
    DescribePermissionsResponse * describePermissions(const DescribePermissionsRequest &request);
    DescribeRaidArraysResponse * describeRaidArrays(const DescribeRaidArraysRequest &request);
    DescribeRdsDbInstancesResponse * describeRdsDbInstances(const DescribeRdsDbInstancesRequest &request);
    DescribeServiceErrorsResponse * describeServiceErrors(const DescribeServiceErrorsRequest &request);
    DescribeStackProvisioningParametersResponse * describeStackProvisioningParameters(const DescribeStackProvisioningParametersRequest &request);
    DescribeStackSummaryResponse * describeStackSummary(const DescribeStackSummaryRequest &request);
    DescribeStacksResponse * describeStacks(const DescribeStacksRequest &request);
    DescribeTimeBasedAutoScalingResponse * describeTimeBasedAutoScaling(const DescribeTimeBasedAutoScalingRequest &request);
    DescribeUserProfilesResponse * describeUserProfiles(const DescribeUserProfilesRequest &request);
    DescribeVolumesResponse * describeVolumes(const DescribeVolumesRequest &request);
    DetachElasticLoadBalancerResponse * detachElasticLoadBalancer(const DetachElasticLoadBalancerRequest &request);
    DisassociateElasticIpResponse * disassociateElasticIp(const DisassociateElasticIpRequest &request);
    GetHostnameSuggestionResponse * getHostnameSuggestion(const GetHostnameSuggestionRequest &request);
    GrantAccessResponse * grantAccess(const GrantAccessRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    RebootInstanceResponse * rebootInstance(const RebootInstanceRequest &request);
    RegisterEcsClusterResponse * registerEcsCluster(const RegisterEcsClusterRequest &request);
    RegisterElasticIpResponse * registerElasticIp(const RegisterElasticIpRequest &request);
    RegisterInstanceResponse * registerInstance(const RegisterInstanceRequest &request);
    RegisterRdsDbInstanceResponse * registerRdsDbInstance(const RegisterRdsDbInstanceRequest &request);
    RegisterVolumeResponse * registerVolume(const RegisterVolumeRequest &request);
    SetLoadBasedAutoScalingResponse * setLoadBasedAutoScaling(const SetLoadBasedAutoScalingRequest &request);
    SetPermissionResponse * setPermission(const SetPermissionRequest &request);
    SetTimeBasedAutoScalingResponse * setTimeBasedAutoScaling(const SetTimeBasedAutoScalingRequest &request);
    StartInstanceResponse * startInstance(const StartInstanceRequest &request);
    StartStackResponse * startStack(const StartStackRequest &request);
    StopInstanceResponse * stopInstance(const StopInstanceRequest &request);
    StopStackResponse * stopStack(const StopStackRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UnassignInstanceResponse * unassignInstance(const UnassignInstanceRequest &request);
    UnassignVolumeResponse * unassignVolume(const UnassignVolumeRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAppResponse * updateApp(const UpdateAppRequest &request);
    UpdateElasticIpResponse * updateElasticIp(const UpdateElasticIpRequest &request);
    UpdateInstanceResponse * updateInstance(const UpdateInstanceRequest &request);
    UpdateLayerResponse * updateLayer(const UpdateLayerRequest &request);
    UpdateMyUserProfileResponse * updateMyUserProfile(const UpdateMyUserProfileRequest &request);
    UpdateRdsDbInstanceResponse * updateRdsDbInstance(const UpdateRdsDbInstanceRequest &request);
    UpdateStackResponse * updateStack(const UpdateStackRequest &request);
    UpdateUserProfileResponse * updateUserProfile(const UpdateUserProfileRequest &request);
    UpdateVolumeResponse * updateVolume(const UpdateVolumeRequest &request);

private:
    Q_DECLARE_PRIVATE(OpsWorksClient)
    Q_DISABLE_COPY(OpsWorksClient)

};

} // namespace OpsWorks
} // namespace AWS

#endif
