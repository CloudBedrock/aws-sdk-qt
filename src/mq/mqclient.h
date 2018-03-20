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

#ifndef QTAWS_MQCLIENT_H
#define QTAWS_MQCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace MQ {

class MqClientPrivate;
class CreateBrokerResponse;
class CreateConfigurationResponse;
class CreateUserResponse;
class DeleteBrokerResponse;
class DeleteUserResponse;
class DescribeBrokerResponse;
class DescribeConfigurationResponse;
class DescribeConfigurationRevisionResponse;
class DescribeUserResponse;
class ListBrokersResponse;
class ListConfigurationRevisionsResponse;
class ListConfigurationsResponse;
class ListUsersResponse;
class RebootBrokerResponse;
class UpdateBrokerResponse;
class UpdateConfigurationResponse;
class UpdateUserResponse;

class QTAWS_EXPORT MqClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MqClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MqClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBrokerResponse * createBroker(const CreateBrokerRequest &request);
    CreateConfigurationResponse * createConfiguration(const CreateConfigurationRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteBrokerResponse * deleteBroker(const DeleteBrokerRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeBrokerResponse * describeBroker(const DescribeBrokerRequest &request);
    DescribeConfigurationResponse * describeConfiguration(const DescribeConfigurationRequest &request);
    DescribeConfigurationRevisionResponse * describeConfigurationRevision(const DescribeConfigurationRevisionRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    ListBrokersResponse * listBrokers(const ListBrokersRequest &request);
    ListConfigurationRevisionsResponse * listConfigurationRevisions(const ListConfigurationRevisionsRequest &request);
    ListConfigurationsResponse * listConfigurations(const ListConfigurationsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    RebootBrokerResponse * rebootBroker(const RebootBrokerRequest &request);
    UpdateBrokerResponse * updateBroker(const UpdateBrokerRequest &request);
    UpdateConfigurationResponse * updateConfiguration(const UpdateConfigurationRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(MqClient)
    Q_DISABLE_COPY(MqClient)

};

} // namespace MQ
} // namespace AWS

#endif
