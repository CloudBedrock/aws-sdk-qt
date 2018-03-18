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

#ifndef QTAWS_WORKDOCSCLIENT_H
#define QTAWS_WORKDOCSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace WorkDocs {

class WorkDocsClientPrivate;

class QTAWS_EXPORT WorkDocsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    WorkDocsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    WorkDocsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AbortDocumentVersionUploadResponse * abortDocumentVersionUpload(const AbortDocumentVersionUploadRequest &request);
    ActivateUserResponse * activateUser(const ActivateUserRequest &request);
    AddResourcePermissionsResponse * addResourcePermissions(const AddResourcePermissionsRequest &request);
    CreateCommentResponse * createComment(const CreateCommentRequest &request);
    CreateCustomMetadataResponse * createCustomMetadata(const CreateCustomMetadataRequest &request);
    CreateFolderResponse * createFolder(const CreateFolderRequest &request);
    CreateLabelsResponse * createLabels(const CreateLabelsRequest &request);
    CreateNotificationSubscriptionResponse * createNotificationSubscription(const CreateNotificationSubscriptionRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeactivateUserResponse * deactivateUser(const DeactivateUserRequest &request);
    DeleteCommentResponse * deleteComment(const DeleteCommentRequest &request);
    DeleteCustomMetadataResponse * deleteCustomMetadata(const DeleteCustomMetadataRequest &request);
    DeleteDocumentResponse * deleteDocument(const DeleteDocumentRequest &request);
    DeleteFolderResponse * deleteFolder(const DeleteFolderRequest &request);
    DeleteFolderContentsResponse * deleteFolderContents(const DeleteFolderContentsRequest &request);
    DeleteLabelsResponse * deleteLabels(const DeleteLabelsRequest &request);
    DeleteNotificationSubscriptionResponse * deleteNotificationSubscription(const DeleteNotificationSubscriptionRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeActivitiesResponse * describeActivities(const DescribeActivitiesRequest &request);
    DescribeCommentsResponse * describeComments(const DescribeCommentsRequest &request);
    DescribeDocumentVersionsResponse * describeDocumentVersions(const DescribeDocumentVersionsRequest &request);
    DescribeFolderContentsResponse * describeFolderContents(const DescribeFolderContentsRequest &request);
    DescribeGroupsResponse * describeGroups(const DescribeGroupsRequest &request);
    DescribeNotificationSubscriptionsResponse * describeNotificationSubscriptions(const DescribeNotificationSubscriptionsRequest &request);
    DescribeResourcePermissionsResponse * describeResourcePermissions(const DescribeResourcePermissionsRequest &request);
    DescribeRootFoldersResponse * describeRootFolders(const DescribeRootFoldersRequest &request);
    DescribeUsersResponse * describeUsers(const DescribeUsersRequest &request);
    GetCurrentUserResponse * getCurrentUser(const GetCurrentUserRequest &request);
    GetDocumentResponse * getDocument(const GetDocumentRequest &request);
    GetDocumentPathResponse * getDocumentPath(const GetDocumentPathRequest &request);
    GetDocumentVersionResponse * getDocumentVersion(const GetDocumentVersionRequest &request);
    GetFolderResponse * getFolder(const GetFolderRequest &request);
    GetFolderPathResponse * getFolderPath(const GetFolderPathRequest &request);
    InitiateDocumentVersionUploadResponse * initiateDocumentVersionUpload(const InitiateDocumentVersionUploadRequest &request);
    RemoveAllResourcePermissionsResponse * removeAllResourcePermissions(const RemoveAllResourcePermissionsRequest &request);
    RemoveResourcePermissionResponse * removeResourcePermission(const RemoveResourcePermissionRequest &request);
    UpdateDocumentResponse * updateDocument(const UpdateDocumentRequest &request);
    UpdateDocumentVersionResponse * updateDocumentVersion(const UpdateDocumentVersionRequest &request);
    UpdateFolderResponse * updateFolder(const UpdateFolderRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(WorkDocsClient)
    Q_DISABLE_COPY(WorkDocsClient)

};

} // namespace WorkDocs
} // namespace AWS

#endif
