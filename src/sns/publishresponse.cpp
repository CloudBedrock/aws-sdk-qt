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

#include "publishresponse.h"
#include "publishresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  PublishResponse
 *
 * @brief  Handles SNS Publish responses.
 *
 * @see    SNSClient::publish
 */

/**
 * @brief  Constructs a new PublishResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PublishResponse::PublishResponse(
        const PublishRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new PublishResponsePrivate(this), parent)
{
    setRequest(new PublishRequest(request));
    setReply(reply);
}

const PublishRequest * PublishResponse::request() const
{
    Q_D(const PublishResponse);
    return static_cast<const PublishRequest *>(d->request);
}

/**
 * @brief  Parse a SNS Publish response.
 *
 * @param  response  Response to parse.
 */
void PublishResponse::parseSuccess(QIODevice &response)
{
    Q_D(PublishResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PublishResponsePrivate
 *
 * @brief  Private implementation for PublishResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PublishResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PublishResponse instance.
 */
PublishResponsePrivate::PublishResponsePrivate(
    PublishResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS PublishResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PublishResponsePrivate::PublishResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
