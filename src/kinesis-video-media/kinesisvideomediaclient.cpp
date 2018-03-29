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

#include "kinesisvideomediaclient.h"
#include "kinesisvideomediaclient_p.h"

#include "core/awssignaturev4.h"
#include "getmediarequest.h"
#include "getmediaresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace KinesisVideoMedia {

/**
 * @class  KinesisVideoMediaClient
 *
 * @brief  Client for Amazon Kinesis Video Streams Media (Kinesis Video Media)
 *
 */

/**
 * @brief  Constructs a new KinesisVideoMediaClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
KinesisVideoMediaClient::KinesisVideoMediaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoMediaClientPrivate(this), parent)
{
    Q_D(KinesisVideoMediaClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams Media");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/**
 * @brief  Constructs a new KinesisVideoMediaClient object.
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
KinesisVideoMediaClient::KinesisVideoMediaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new KinesisVideoMediaClientPrivate(this), parent)
{
    Q_D(KinesisVideoMediaClient);
    d->apiVersion = QStringLiteral("2017-09-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("kinesisvideo");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Video Streams Media");
    d->serviceName = QStringLiteral("kinesisvideo");
}

/**
 * Use this API to retrieve media content from a Kinesis video stream. In the request, you identify stream name or stream
 * Amazon Resource Name (ARN), and the starting chunk. Kinesis Video Streams then returns a stream of chunks in order by
 * fragment
 *
 * number> <note>
 *
 * You must first call the <code>GetDataEndpoint</code> API to get an endpoint to which you can then send the
 * <code>GetMedia</code> requests.
 *
 * </p </note>
 *
 * When you put media data (fragments) on a stream, Kinesis Video Streams stores each incoming fragment and related
 * metadata in what is called a "chunk." For more information, see . The <code>GetMedia</code> API returns a stream of
 * these chunks starting from the chunk that you specify in the request.
 *
 * </p
 *
 * The following limits apply when using the <code>GetMedia</code>
 *
 * API> <ul> <li>
 *
 * A client can call <code>GetMedia</code> up to five times per second per stream.
 *
 * </p </li> <li>
 *
 * Kinesis Video Streams sends media data at a rate of up to 25 megabytes per second (or 200 megabits per second) during a
 * <code>GetMedia</code> session.
 *
 * @param  request Request to send to Amazon Kinesis Video Streams Media.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMediaResponse * KinesisVideoMediaClient::getMedia(const GetMediaRequest &request)
{
    return qobject_cast<GetMediaResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  KinesisVideoMediaClientPrivate
 *
 * @brief  Private implementation for KinesisVideoMediaClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisVideoMediaClientPrivate object.
 *
 * @param  q  Pointer to this object's public KinesisVideoMediaClient instance.
 */
KinesisVideoMediaClientPrivate::KinesisVideoMediaClientPrivate(KinesisVideoMediaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace KinesisVideoMedia
} // namespace QtAws
