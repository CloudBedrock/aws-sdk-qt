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

#ifndef QTAWS_MARKETPLACEMETERINGCLIENT_H
#define QTAWS_MARKETPLACEMETERINGCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace MarketplaceMetering {

class MarketplaceMeteringClientPrivate;
class BatchMeterUsageRequest;
class BatchMeterUsageResponse;
class MeterUsageRequest;
class MeterUsageResponse;
class ResolveCustomerRequest;
class ResolveCustomerResponse;

class QTAWS_EXPORT MarketplaceMeteringClient : public AwsAbstractClient {
    Q_OBJECT

public:
    MarketplaceMeteringClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MarketplaceMeteringClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchMeterUsageResponse * batchMeterUsage(const BatchMeterUsageRequest &request);
    MeterUsageResponse * meterUsage(const MeterUsageRequest &request);
    ResolveCustomerResponse * resolveCustomer(const ResolveCustomerRequest &request);

private:
    Q_DECLARE_PRIVATE(MarketplaceMeteringClient)
    Q_DISABLE_COPY(MarketplaceMeteringClient)

};

} // namespace MarketplaceMetering
} // namespace AWS

#endif
