/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_WORKSPACESCLIENT_H
#define QTAWS_WORKSPACESCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace WorkSpaces {

class WorkSpacesClientPrivate;

class QTAWS_EXPORT WorkSpacesClient : public AwsAbstractClient {
    Q_OBJECT

public:
    WorkSpacesClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WorkSpacesClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    CreateWorkspacesResponse * createWorkspaces(const CreateWorkspacesRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeWorkspaceBundlesResponse * describeWorkspaceBundles(const DescribeWorkspaceBundlesRequest &request);
    DescribeWorkspaceDirectoriesResponse * describeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest &request);
    DescribeWorkspacesResponse * describeWorkspaces(const DescribeWorkspacesRequest &request);
    DescribeWorkspacesConnectionStatusResponse * describeWorkspacesConnectionStatus(const DescribeWorkspacesConnectionStatusRequest &request);
    ModifyWorkspacePropertiesResponse * modifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest &request);
    RebootWorkspacesResponse * rebootWorkspaces(const RebootWorkspacesRequest &request);
    RebuildWorkspacesResponse * rebuildWorkspaces(const RebuildWorkspacesRequest &request);
    StartWorkspacesResponse * startWorkspaces(const StartWorkspacesRequest &request);
    StopWorkspacesResponse * stopWorkspaces(const StopWorkspacesRequest &request);
    TerminateWorkspacesResponse * terminateWorkspaces(const TerminateWorkspacesRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkSpacesClient)
    Q_DISABLE_COPY(WorkSpacesClient)

};

} // namespace WorkSpaces
} // namespace AWS

#endif
