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

#ifndef QTAWS_TRANSCRIBESERVICECLIENT_H
#define QTAWS_TRANSCRIBESERVICECLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace TranscribeService {

class TranscribeServiceClientPrivate;

class QTAWS_EXPORT TranscribeServiceClient : public AwsAbstractClient {
    Q_OBJECT

public:
    TranscribeServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    TranscribeServiceClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetTranscriptionJobResponse * getTranscriptionJob(const GetTranscriptionJobRequest &request);
    ListTranscriptionJobsResponse * listTranscriptionJobs(const ListTranscriptionJobsRequest &request);
    StartTranscriptionJobResponse * startTranscriptionJob(const StartTranscriptionJobRequest &request);

private:
    Q_DECLARE_PRIVATE(TranscribeServiceClient)
    Q_DISABLE_COPY(TranscribeServiceClient)

};

} // namespace TranscribeService
} // namespace AWS

#endif
