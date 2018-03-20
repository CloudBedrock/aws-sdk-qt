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

#ifndef QTAWS_ECRCLIENT_H
#define QTAWS_ECRCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace ECR {

class EcrClientPrivate;
class BatchCheckLayerAvailabilityResponse;
class BatchDeleteImageResponse;
class BatchGetImageResponse;
class CompleteLayerUploadResponse;
class CreateRepositoryResponse;
class DeleteLifecyclePolicyResponse;
class DeleteRepositoryResponse;
class DeleteRepositoryPolicyResponse;
class DescribeImagesResponse;
class DescribeRepositoriesResponse;
class GetAuthorizationTokenResponse;
class GetDownloadUrlForLayerResponse;
class GetLifecyclePolicyResponse;
class GetLifecyclePolicyPreviewResponse;
class GetRepositoryPolicyResponse;
class InitiateLayerUploadResponse;
class ListImagesResponse;
class PutImageResponse;
class PutLifecyclePolicyResponse;
class SetRepositoryPolicyResponse;
class StartLifecyclePolicyPreviewResponse;
class UploadLayerPartResponse;

class QTAWS_EXPORT EcrClient : public AwsAbstractClient {
    Q_OBJECT

public:
    EcrClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EcrClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchCheckLayerAvailabilityResponse * batchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest &request);
    BatchDeleteImageResponse * batchDeleteImage(const BatchDeleteImageRequest &request);
    BatchGetImageResponse * batchGetImage(const BatchGetImageRequest &request);
    CompleteLayerUploadResponse * completeLayerUpload(const CompleteLayerUploadRequest &request);
    CreateRepositoryResponse * createRepository(const CreateRepositoryRequest &request);
    DeleteLifecyclePolicyResponse * deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request);
    DeleteRepositoryResponse * deleteRepository(const DeleteRepositoryRequest &request);
    DeleteRepositoryPolicyResponse * deleteRepositoryPolicy(const DeleteRepositoryPolicyRequest &request);
    DescribeImagesResponse * describeImages(const DescribeImagesRequest &request);
    DescribeRepositoriesResponse * describeRepositories(const DescribeRepositoriesRequest &request);
    GetAuthorizationTokenResponse * getAuthorizationToken(const GetAuthorizationTokenRequest &request);
    GetDownloadUrlForLayerResponse * getDownloadUrlForLayer(const GetDownloadUrlForLayerRequest &request);
    GetLifecyclePolicyResponse * getLifecyclePolicy(const GetLifecyclePolicyRequest &request);
    GetLifecyclePolicyPreviewResponse * getLifecyclePolicyPreview(const GetLifecyclePolicyPreviewRequest &request);
    GetRepositoryPolicyResponse * getRepositoryPolicy(const GetRepositoryPolicyRequest &request);
    InitiateLayerUploadResponse * initiateLayerUpload(const InitiateLayerUploadRequest &request);
    ListImagesResponse * listImages(const ListImagesRequest &request);
    PutImageResponse * putImage(const PutImageRequest &request);
    PutLifecyclePolicyResponse * putLifecyclePolicy(const PutLifecyclePolicyRequest &request);
    SetRepositoryPolicyResponse * setRepositoryPolicy(const SetRepositoryPolicyRequest &request);
    StartLifecyclePolicyPreviewResponse * startLifecyclePolicyPreview(const StartLifecyclePolicyPreviewRequest &request);
    UploadLayerPartResponse * uploadLayerPart(const UploadLayerPartRequest &request);

private:
    Q_DECLARE_PRIVATE(EcrClient)
    Q_DISABLE_COPY(EcrClient)

};

} // namespace ECR
} // namespace AWS

#endif
