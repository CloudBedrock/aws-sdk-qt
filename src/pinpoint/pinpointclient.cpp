/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "pinpointclient.h"
#include "pinpointclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  PinpointClient
 *
 * @brief  Client for Amazon Pinpoint
 *
 */

/**
 * @brief  Constructs a new PinpointClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
PinpointClient::PinpointClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new PinpointClientPrivate(this), parent)
{
    Q_D(PinpointClient);
    d->apiVersion = QStringLiteral("2016-12-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("pinpoint");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint");
    d->serviceName = QStringLiteral("mobiletargeting");
}

/**
 * @brief  Constructs a new PinpointClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
PinpointClient::PinpointClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new PinpointClientPrivate(this), parent)
{
    Q_D(PinpointClient);
    d->apiVersion = QStringLiteral("2016-12-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("pinpoint");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint");
    d->serviceName = QStringLiteral("mobiletargeting");
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAppResponse * PinpointClient::createApp(const CreateAppRequest &request)
{
    return qobject_cast<CreateAppResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCampaignResponse * PinpointClient::createCampaign(const CreateCampaignRequest &request)
{
    return qobject_cast<CreateCampaignResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateExportJobResponse * PinpointClient::createExportJob(const CreateExportJobRequest &request)
{
    return qobject_cast<CreateExportJobResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateImportJobResponse * PinpointClient::createImportJob(const CreateImportJobRequest &request)
{
    return qobject_cast<CreateImportJobResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSegmentResponse * PinpointClient::createSegment(const CreateSegmentRequest &request)
{
    return qobject_cast<CreateSegmentResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAdmChannelResponse * PinpointClient::deleteAdmChannel(const DeleteAdmChannelRequest &request)
{
    return qobject_cast<DeleteAdmChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApnsChannelResponse * PinpointClient::deleteApnsChannel(const DeleteApnsChannelRequest &request)
{
    return qobject_cast<DeleteApnsChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApnsSandboxChannelResponse * PinpointClient::deleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest &request)
{
    return qobject_cast<DeleteApnsSandboxChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApnsVoipChannelResponse * PinpointClient::deleteApnsVoipChannel(const DeleteApnsVoipChannelRequest &request)
{
    return qobject_cast<DeleteApnsVoipChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApnsVoipSandboxChannelResponse * PinpointClient::deleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest &request)
{
    return qobject_cast<DeleteApnsVoipSandboxChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAppResponse * PinpointClient::deleteApp(const DeleteAppRequest &request)
{
    return qobject_cast<DeleteAppResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBaiduChannelResponse * PinpointClient::deleteBaiduChannel(const DeleteBaiduChannelRequest &request)
{
    return qobject_cast<DeleteBaiduChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCampaignResponse * PinpointClient::deleteCampaign(const DeleteCampaignRequest &request)
{
    return qobject_cast<DeleteCampaignResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEmailChannelResponse * PinpointClient::deleteEmailChannel(const DeleteEmailChannelRequest &request)
{
    return qobject_cast<DeleteEmailChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEndpointResponse * PinpointClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEventStreamResponse * PinpointClient::deleteEventStream(const DeleteEventStreamRequest &request)
{
    return qobject_cast<DeleteEventStreamResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGcmChannelResponse * PinpointClient::deleteGcmChannel(const DeleteGcmChannelRequest &request)
{
    return qobject_cast<DeleteGcmChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSegmentResponse * PinpointClient::deleteSegment(const DeleteSegmentRequest &request)
{
    return qobject_cast<DeleteSegmentResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSmsChannelResponse * PinpointClient::deleteSmsChannel(const DeleteSmsChannelRequest &request)
{
    return qobject_cast<DeleteSmsChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAdmChannelResponse * PinpointClient::getAdmChannel(const GetAdmChannelRequest &request)
{
    return qobject_cast<GetAdmChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApnsChannelResponse * PinpointClient::getApnsChannel(const GetApnsChannelRequest &request)
{
    return qobject_cast<GetApnsChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApnsSandboxChannelResponse * PinpointClient::getApnsSandboxChannel(const GetApnsSandboxChannelRequest &request)
{
    return qobject_cast<GetApnsSandboxChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApnsVoipChannelResponse * PinpointClient::getApnsVoipChannel(const GetApnsVoipChannelRequest &request)
{
    return qobject_cast<GetApnsVoipChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApnsVoipSandboxChannelResponse * PinpointClient::getApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest &request)
{
    return qobject_cast<GetApnsVoipSandboxChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAppResponse * PinpointClient::getApp(const GetAppRequest &request)
{
    return qobject_cast<GetAppResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApplicationSettingsResponse * PinpointClient::getApplicationSettings(const GetApplicationSettingsRequest &request)
{
    return qobject_cast<GetApplicationSettingsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAppsResponse * PinpointClient::getApps(const GetAppsRequest &request)
{
    return qobject_cast<GetAppsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBaiduChannelResponse * PinpointClient::getBaiduChannel(const GetBaiduChannelRequest &request)
{
    return qobject_cast<GetBaiduChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignResponse * PinpointClient::getCampaign(const GetCampaignRequest &request)
{
    return qobject_cast<GetCampaignResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignActivitiesResponse * PinpointClient::getCampaignActivities(const GetCampaignActivitiesRequest &request)
{
    return qobject_cast<GetCampaignActivitiesResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignVersionResponse * PinpointClient::getCampaignVersion(const GetCampaignVersionRequest &request)
{
    return qobject_cast<GetCampaignVersionResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignVersionsResponse * PinpointClient::getCampaignVersions(const GetCampaignVersionsRequest &request)
{
    return qobject_cast<GetCampaignVersionsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignsResponse * PinpointClient::getCampaigns(const GetCampaignsRequest &request)
{
    return qobject_cast<GetCampaignsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetEmailChannelResponse * PinpointClient::getEmailChannel(const GetEmailChannelRequest &request)
{
    return qobject_cast<GetEmailChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetEndpointResponse * PinpointClient::getEndpoint(const GetEndpointRequest &request)
{
    return qobject_cast<GetEndpointResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetEventStreamResponse * PinpointClient::getEventStream(const GetEventStreamRequest &request)
{
    return qobject_cast<GetEventStreamResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetExportJobResponse * PinpointClient::getExportJob(const GetExportJobRequest &request)
{
    return qobject_cast<GetExportJobResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetExportJobsResponse * PinpointClient::getExportJobs(const GetExportJobsRequest &request)
{
    return qobject_cast<GetExportJobsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGcmChannelResponse * PinpointClient::getGcmChannel(const GetGcmChannelRequest &request)
{
    return qobject_cast<GetGcmChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetImportJobResponse * PinpointClient::getImportJob(const GetImportJobRequest &request)
{
    return qobject_cast<GetImportJobResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetImportJobsResponse * PinpointClient::getImportJobs(const GetImportJobsRequest &request)
{
    return qobject_cast<GetImportJobsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentResponse * PinpointClient::getSegment(const GetSegmentRequest &request)
{
    return qobject_cast<GetSegmentResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentExportJobsResponse * PinpointClient::getSegmentExportJobs(const GetSegmentExportJobsRequest &request)
{
    return qobject_cast<GetSegmentExportJobsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentImportJobsResponse * PinpointClient::getSegmentImportJobs(const GetSegmentImportJobsRequest &request)
{
    return qobject_cast<GetSegmentImportJobsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentVersionResponse * PinpointClient::getSegmentVersion(const GetSegmentVersionRequest &request)
{
    return qobject_cast<GetSegmentVersionResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentVersionsResponse * PinpointClient::getSegmentVersions(const GetSegmentVersionsRequest &request)
{
    return qobject_cast<GetSegmentVersionsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentsResponse * PinpointClient::getSegments(const GetSegmentsRequest &request)
{
    return qobject_cast<GetSegmentsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSmsChannelResponse * PinpointClient::getSmsChannel(const GetSmsChannelRequest &request)
{
    return qobject_cast<GetSmsChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutEventStreamResponse * PinpointClient::putEventStream(const PutEventStreamRequest &request)
{
    return qobject_cast<PutEventStreamResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendMessagesResponse * PinpointClient::sendMessages(const SendMessagesRequest &request)
{
    return qobject_cast<SendMessagesResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendUsersMessagesResponse * PinpointClient::sendUsersMessages(const SendUsersMessagesRequest &request)
{
    return qobject_cast<SendUsersMessagesResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAdmChannelResponse * PinpointClient::updateAdmChannel(const UpdateAdmChannelRequest &request)
{
    return qobject_cast<UpdateAdmChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApnsChannelResponse * PinpointClient::updateApnsChannel(const UpdateApnsChannelRequest &request)
{
    return qobject_cast<UpdateApnsChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApnsSandboxChannelResponse * PinpointClient::updateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest &request)
{
    return qobject_cast<UpdateApnsSandboxChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApnsVoipChannelResponse * PinpointClient::updateApnsVoipChannel(const UpdateApnsVoipChannelRequest &request)
{
    return qobject_cast<UpdateApnsVoipChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApnsVoipSandboxChannelResponse * PinpointClient::updateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest &request)
{
    return qobject_cast<UpdateApnsVoipSandboxChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApplicationSettingsResponse * PinpointClient::updateApplicationSettings(const UpdateApplicationSettingsRequest &request)
{
    return qobject_cast<UpdateApplicationSettingsResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateBaiduChannelResponse * PinpointClient::updateBaiduChannel(const UpdateBaiduChannelRequest &request)
{
    return qobject_cast<UpdateBaiduChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCampaignResponse * PinpointClient::updateCampaign(const UpdateCampaignRequest &request)
{
    return qobject_cast<UpdateCampaignResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEmailChannelResponse * PinpointClient::updateEmailChannel(const UpdateEmailChannelRequest &request)
{
    return qobject_cast<UpdateEmailChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEndpointResponse * PinpointClient::updateEndpoint(const UpdateEndpointRequest &request)
{
    return qobject_cast<UpdateEndpointResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEndpointsBatchResponse * PinpointClient::updateEndpointsBatch(const UpdateEndpointsBatchRequest &request)
{
    return qobject_cast<UpdateEndpointsBatchResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGcmChannelResponse * PinpointClient::updateGcmChannel(const UpdateGcmChannelRequest &request)
{
    return qobject_cast<UpdateGcmChannelResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSegmentResponse * PinpointClient::updateSegment(const UpdateSegmentRequest &request)
{
    return qobject_cast<UpdateSegmentResponse *>(send(request));
}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSmsChannelResponse * PinpointClient::updateSmsChannel(const UpdateSmsChannelRequest &request)
{
    return qobject_cast<UpdateSmsChannelResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  PinpointClientPrivate
 *
 * @brief  Private implementation for PinpointClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PinpointClientPrivate object.
 *
 * @param  q  Pointer to this object's public PinpointClient instance.
 */
PinpointClientPrivate::PinpointClientPrivate(PinpointClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Pinpoint
} // namespace QtAws
