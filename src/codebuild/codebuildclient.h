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

#ifndef QTAWS_CODEBUILDCLIENT_H
#define QTAWS_CODEBUILDCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace CodeBuild {

class CodeBuildClientPrivate;
class BatchDeleteBuildsRequest;
class BatchDeleteBuildsResponse;
class BatchGetBuildsRequest;
class BatchGetBuildsResponse;
class BatchGetProjectsRequest;
class BatchGetProjectsResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class CreateWebhookRequest;
class CreateWebhookResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DeleteWebhookRequest;
class DeleteWebhookResponse;
class InvalidateProjectCacheRequest;
class InvalidateProjectCacheResponse;
class ListBuildsRequest;
class ListBuildsResponse;
class ListBuildsForProjectRequest;
class ListBuildsForProjectResponse;
class ListCuratedEnvironmentImagesRequest;
class ListCuratedEnvironmentImagesResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class StartBuildRequest;
class StartBuildResponse;
class StopBuildRequest;
class StopBuildResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;
class UpdateWebhookRequest;
class UpdateWebhookResponse;

class QTAWS_EXPORT CodeBuildClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CodeBuildClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeBuildClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDeleteBuildsResponse * batchDeleteBuilds(const BatchDeleteBuildsRequest &request);
    BatchGetBuildsResponse * batchGetBuilds(const BatchGetBuildsRequest &request);
    BatchGetProjectsResponse * batchGetProjects(const BatchGetProjectsRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateWebhookResponse * createWebhook(const CreateWebhookRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteWebhookResponse * deleteWebhook(const DeleteWebhookRequest &request);
    InvalidateProjectCacheResponse * invalidateProjectCache(const InvalidateProjectCacheRequest &request);
    ListBuildsResponse * listBuilds(const ListBuildsRequest &request);
    ListBuildsForProjectResponse * listBuildsForProject(const ListBuildsForProjectRequest &request);
    ListCuratedEnvironmentImagesResponse * listCuratedEnvironmentImages(const ListCuratedEnvironmentImagesRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    StartBuildResponse * startBuild(const StartBuildRequest &request);
    StopBuildResponse * stopBuild(const StopBuildRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);
    UpdateWebhookResponse * updateWebhook(const UpdateWebhookRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeBuildClient)
    Q_DISABLE_COPY(CodeBuildClient)

};

} // namespace CodeBuild
} // namespace AWS

#endif
