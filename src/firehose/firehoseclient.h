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

#ifndef QTAWS_FIREHOSECLIENT_H
#define QTAWS_FIREHOSECLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Firehose {

class FirehoseClientPrivate;

class QTAWS_EXPORT FirehoseClient : public AwsAbstractClient {
    Q_OBJECT

public:
    FirehoseClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    FirehoseClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDeliveryStreamResponse * createDeliveryStream(const CreateDeliveryStreamRequest &request);
    DeleteDeliveryStreamResponse * deleteDeliveryStream(const DeleteDeliveryStreamRequest &request);
    DescribeDeliveryStreamResponse * describeDeliveryStream(const DescribeDeliveryStreamRequest &request);
    ListDeliveryStreamsResponse * listDeliveryStreams(const ListDeliveryStreamsRequest &request);
    PutRecordResponse * putRecord(const PutRecordRequest &request);
    PutRecordBatchResponse * putRecordBatch(const PutRecordBatchRequest &request);
    UpdateDestinationResponse * updateDestination(const UpdateDestinationRequest &request);

private:
    Q_DECLARE_PRIVATE(FirehoseClient)
    Q_DISABLE_COPY(FirehoseClient)

};

} // namespace Firehose
} // namespace AWS

#endif
