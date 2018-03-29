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

#include "appsyncclient.h"
#include "appsyncclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace AppSync {

/**
 * @class  AppSyncClient
 *
 * @brief  Client for AWS AppSync
 *
 * AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 */

/**
 * @brief  Constructs a new AppSyncClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
AppSyncClient::AppSyncClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppSyncClientPrivate(this), parent)
{
    Q_D(AppSyncClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("appsync");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS AppSync");
    d->serviceName = QStringLiteral("appsync");
}

/**
 * @brief  Constructs a new AppSyncClient object.
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
AppSyncClient::AppSyncClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppSyncClientPrivate(this), parent)
{
    Q_D(AppSyncClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("appsync");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS AppSync");
    d->serviceName = QStringLiteral("appsync");
}

/**
 * Creates a unique key that you can distribute to clients who are executing your
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateApiKeyResponse * AppSyncClient::createApiKey(const CreateApiKeyRequest &request)
{
    return qobject_cast<CreateApiKeyResponse *>(send(request));
}

/**
 * Creates a <code>DataSource</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDataSourceResponse * AppSyncClient::createDataSource(const CreateDataSourceRequest &request)
{
    return qobject_cast<CreateDataSourceResponse *>(send(request));
}

/**
 * Creates a <code>GraphqlApi</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGraphqlApiResponse * AppSyncClient::createGraphqlApi(const CreateGraphqlApiRequest &request)
{
    return qobject_cast<CreateGraphqlApiResponse *>(send(request));
}

/**
 * Creates a <code>Resolver</code>
 *
 * object>
 *
 * A resolver converts incoming requests into a format that a data source can understand and converts the data source's
 * responses into
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateResolverResponse * AppSyncClient::createResolver(const CreateResolverRequest &request)
{
    return qobject_cast<CreateResolverResponse *>(send(request));
}

/**
 * Creates a <code>Type</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTypeResponse * AppSyncClient::createType(const CreateTypeRequest &request)
{
    return qobject_cast<CreateTypeResponse *>(send(request));
}

/**
 * Deletes an API
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApiKeyResponse * AppSyncClient::deleteApiKey(const DeleteApiKeyRequest &request)
{
    return qobject_cast<DeleteApiKeyResponse *>(send(request));
}

/**
 * Deletes a <code>DataSource</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDataSourceResponse * AppSyncClient::deleteDataSource(const DeleteDataSourceRequest &request)
{
    return qobject_cast<DeleteDataSourceResponse *>(send(request));
}

/**
 * Deletes a <code>GraphqlApi</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGraphqlApiResponse * AppSyncClient::deleteGraphqlApi(const DeleteGraphqlApiRequest &request)
{
    return qobject_cast<DeleteGraphqlApiResponse *>(send(request));
}

/**
 * Deletes a <code>Resolver</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteResolverResponse * AppSyncClient::deleteResolver(const DeleteResolverRequest &request)
{
    return qobject_cast<DeleteResolverResponse *>(send(request));
}

/**
 * Deletes a <code>Type</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTypeResponse * AppSyncClient::deleteType(const DeleteTypeRequest &request)
{
    return qobject_cast<DeleteTypeResponse *>(send(request));
}

/**
 * Retrieves a <code>DataSource</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDataSourceResponse * AppSyncClient::getDataSource(const GetDataSourceRequest &request)
{
    return qobject_cast<GetDataSourceResponse *>(send(request));
}

/**
 * Retrieves a <code>GraphqlApi</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGraphqlApiResponse * AppSyncClient::getGraphqlApi(const GetGraphqlApiRequest &request)
{
    return qobject_cast<GetGraphqlApiResponse *>(send(request));
}

/**
 * Retrieves the introspection schema for a GraphQL
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIntrospectionSchemaResponse * AppSyncClient::getIntrospectionSchema(const GetIntrospectionSchemaRequest &request)
{
    return qobject_cast<GetIntrospectionSchemaResponse *>(send(request));
}

/**
 * Retrieves a <code>Resolver</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetResolverResponse * AppSyncClient::getResolver(const GetResolverRequest &request)
{
    return qobject_cast<GetResolverResponse *>(send(request));
}

/**
 * Retrieves the current status of a schema creation
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSchemaCreationStatusResponse * AppSyncClient::getSchemaCreationStatus(const GetSchemaCreationStatusRequest &request)
{
    return qobject_cast<GetSchemaCreationStatusResponse *>(send(request));
}

/**
 * Retrieves a <code>Type</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTypeResponse * AppSyncClient::getType(const GetTypeRequest &request)
{
    return qobject_cast<GetTypeResponse *>(send(request));
}

/**
 * Lists the API keys for a given
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListApiKeysResponse * AppSyncClient::listApiKeys(const ListApiKeysRequest &request)
{
    return qobject_cast<ListApiKeysResponse *>(send(request));
}

/**
 * Lists the data sources for a given
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDataSourcesResponse * AppSyncClient::listDataSources(const ListDataSourcesRequest &request)
{
    return qobject_cast<ListDataSourcesResponse *>(send(request));
}

/**
 * Lists your GraphQL
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGraphqlApisResponse * AppSyncClient::listGraphqlApis(const ListGraphqlApisRequest &request)
{
    return qobject_cast<ListGraphqlApisResponse *>(send(request));
}

/**
 * Lists the resolvers for a given API and
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResolversResponse * AppSyncClient::listResolvers(const ListResolversRequest &request)
{
    return qobject_cast<ListResolversResponse *>(send(request));
}

/**
 * Lists the types for a given
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTypesResponse * AppSyncClient::listTypes(const ListTypesRequest &request)
{
    return qobject_cast<ListTypesResponse *>(send(request));
}

/**
 * Adds a new schema to your GraphQL
 *
 * API>
 *
 * This operation is asynchronous. Use to determine when it has
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartSchemaCreationResponse * AppSyncClient::startSchemaCreation(const StartSchemaCreationRequest &request)
{
    return qobject_cast<StartSchemaCreationResponse *>(send(request));
}

/**
 * Updates an API
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApiKeyResponse * AppSyncClient::updateApiKey(const UpdateApiKeyRequest &request)
{
    return qobject_cast<UpdateApiKeyResponse *>(send(request));
}

/**
 * Updates a <code>DataSource</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDataSourceResponse * AppSyncClient::updateDataSource(const UpdateDataSourceRequest &request)
{
    return qobject_cast<UpdateDataSourceResponse *>(send(request));
}

/**
 * Updates a <code>GraphqlApi</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGraphqlApiResponse * AppSyncClient::updateGraphqlApi(const UpdateGraphqlApiRequest &request)
{
    return qobject_cast<UpdateGraphqlApiResponse *>(send(request));
}

/**
 * Updates a <code>Resolver</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateResolverResponse * AppSyncClient::updateResolver(const UpdateResolverRequest &request)
{
    return qobject_cast<UpdateResolverResponse *>(send(request));
}

/**
 * Updates a <code>Type</code>
 *
 * @param  request Request to send to AWS AppSync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTypeResponse * AppSyncClient::updateType(const UpdateTypeRequest &request)
{
    return qobject_cast<UpdateTypeResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  AppSyncClientPrivate
 *
 * @brief  Private implementation for AppSyncClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AppSyncClientPrivate object.
 *
 * @param  q  Pointer to this object's public AppSyncClient instance.
 */
AppSyncClientPrivate::AppSyncClientPrivate(AppSyncClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AppSync
} // namespace QtAws
