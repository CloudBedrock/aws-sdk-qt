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

#ifndef QTAWS_APPSTREAMCLIENT_H
#define QTAWS_APPSTREAMCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace AppStream {

class AppStreamClientPrivate;
class AssociateFleetResponse;
class CopyImageResponse;
class CreateDirectoryConfigResponse;
class CreateFleetResponse;
class CreateImageBuilderResponse;
class CreateImageBuilderStreamingURLResponse;
class CreateStackResponse;
class CreateStreamingURLResponse;
class DeleteDirectoryConfigResponse;
class DeleteFleetResponse;
class DeleteImageResponse;
class DeleteImageBuilderResponse;
class DeleteStackResponse;
class DescribeDirectoryConfigsResponse;
class DescribeFleetsResponse;
class DescribeImageBuildersResponse;
class DescribeImagesResponse;
class DescribeSessionsResponse;
class DescribeStacksResponse;
class DisassociateFleetResponse;
class ExpireSessionResponse;
class ListAssociatedFleetsResponse;
class ListAssociatedStacksResponse;
class ListTagsForResourceResponse;
class StartFleetResponse;
class StartImageBuilderResponse;
class StopFleetResponse;
class StopImageBuilderResponse;
class TagResourceResponse;
class UntagResourceResponse;
class UpdateDirectoryConfigResponse;
class UpdateFleetResponse;
class UpdateStackResponse;

class QTAWS_EXPORT AppStreamClient : public AwsAbstractClient {
    Q_OBJECT

public:
    AppStreamClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AppStreamClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateFleetResponse * associateFleet(const AssociateFleetRequest &request);
    CopyImageResponse * copyImage(const CopyImageRequest &request);
    CreateDirectoryConfigResponse * createDirectoryConfig(const CreateDirectoryConfigRequest &request);
    CreateFleetResponse * createFleet(const CreateFleetRequest &request);
    CreateImageBuilderResponse * createImageBuilder(const CreateImageBuilderRequest &request);
    CreateImageBuilderStreamingURLResponse * createImageBuilderStreamingURL(const CreateImageBuilderStreamingURLRequest &request);
    CreateStackResponse * createStack(const CreateStackRequest &request);
    CreateStreamingURLResponse * createStreamingURL(const CreateStreamingURLRequest &request);
    DeleteDirectoryConfigResponse * deleteDirectoryConfig(const DeleteDirectoryConfigRequest &request);
    DeleteFleetResponse * deleteFleet(const DeleteFleetRequest &request);
    DeleteImageResponse * deleteImage(const DeleteImageRequest &request);
    DeleteImageBuilderResponse * deleteImageBuilder(const DeleteImageBuilderRequest &request);
    DeleteStackResponse * deleteStack(const DeleteStackRequest &request);
    DescribeDirectoryConfigsResponse * describeDirectoryConfigs(const DescribeDirectoryConfigsRequest &request);
    DescribeFleetsResponse * describeFleets(const DescribeFleetsRequest &request);
    DescribeImageBuildersResponse * describeImageBuilders(const DescribeImageBuildersRequest &request);
    DescribeImagesResponse * describeImages(const DescribeImagesRequest &request);
    DescribeSessionsResponse * describeSessions(const DescribeSessionsRequest &request);
    DescribeStacksResponse * describeStacks(const DescribeStacksRequest &request);
    DisassociateFleetResponse * disassociateFleet(const DisassociateFleetRequest &request);
    ExpireSessionResponse * expireSession(const ExpireSessionRequest &request);
    ListAssociatedFleetsResponse * listAssociatedFleets(const ListAssociatedFleetsRequest &request);
    ListAssociatedStacksResponse * listAssociatedStacks(const ListAssociatedStacksRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartFleetResponse * startFleet(const StartFleetRequest &request);
    StartImageBuilderResponse * startImageBuilder(const StartImageBuilderRequest &request);
    StopFleetResponse * stopFleet(const StopFleetRequest &request);
    StopImageBuilderResponse * stopImageBuilder(const StopImageBuilderRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDirectoryConfigResponse * updateDirectoryConfig(const UpdateDirectoryConfigRequest &request);
    UpdateFleetResponse * updateFleet(const UpdateFleetRequest &request);
    UpdateStackResponse * updateStack(const UpdateStackRequest &request);

private:
    Q_DECLARE_PRIVATE(AppStreamClient)
    Q_DISABLE_COPY(AppStreamClient)

};

} // namespace AppStream
} // namespace AWS

#endif
