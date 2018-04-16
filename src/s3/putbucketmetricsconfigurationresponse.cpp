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

#include "putbucketmetricsconfigurationresponse.h"
#include "putbucketmetricsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketMetricsConfigurationResponse
 *
 * \brief The PutBucketMetricsConfigurationResponse class encapsulates S3 PutBucketMetricsConfiguration responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketMetricsConfiguration
 */

/*!
 * @brief  Constructs a new PutBucketMetricsConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketMetricsConfigurationResponse::PutBucketMetricsConfigurationResponse(
        const PutBucketMetricsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketMetricsConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketMetricsConfigurationRequest(request));
    setReply(reply);
}

const PutBucketMetricsConfigurationRequest * PutBucketMetricsConfigurationResponse::request() const
{
    Q_D(const PutBucketMetricsConfigurationResponse);
    return static_cast<const PutBucketMetricsConfigurationRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 PutBucketMetricsConfiguration response.
 *
 * @param  response  Response to parse.
 */
void PutBucketMetricsConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketMetricsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutBucketMetricsConfigurationResponsePrivate
 *
 * \brief Private implementation for PutBucketMetricsConfigurationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketMetricsConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketMetricsConfigurationResponse instance.
 */
PutBucketMetricsConfigurationResponsePrivate::PutBucketMetricsConfigurationResponsePrivate(
    PutBucketMetricsConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 PutBucketMetricsConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketMetricsConfigurationResponsePrivate::parsePutBucketMetricsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketMetricsConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
