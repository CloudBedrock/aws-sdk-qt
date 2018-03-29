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

#include "abortenvironmentupdateresponse.h"
#include "abortenvironmentupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  AbortEnvironmentUpdateResponse
 *
 * @brief  Handles ElasticBeanstalk AbortEnvironmentUpdate responses.
 *
 * @see    ElasticBeanstalkClient::abortEnvironmentUpdate
 */

/**
 * @brief  Constructs a new AbortEnvironmentUpdateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AbortEnvironmentUpdateResponse::AbortEnvironmentUpdateResponse(
        const AbortEnvironmentUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new AbortEnvironmentUpdateResponsePrivate(this), parent)
{
    setRequest(new AbortEnvironmentUpdateRequest(request));
    setReply(reply);
}

const AbortEnvironmentUpdateRequest * AbortEnvironmentUpdateResponse::request() const
{
    Q_D(const AbortEnvironmentUpdateResponse);
    return static_cast<const AbortEnvironmentUpdateRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk AbortEnvironmentUpdate response.
 *
 * @param  response  Response to parse.
 */
void AbortEnvironmentUpdateResponse::parseSuccess(QIODevice &response)
{
    Q_D(AbortEnvironmentUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AbortEnvironmentUpdateResponsePrivate
 *
 * @brief  Private implementation for AbortEnvironmentUpdateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AbortEnvironmentUpdateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AbortEnvironmentUpdateResponse instance.
 */
AbortEnvironmentUpdateResponsePrivate::AbortEnvironmentUpdateResponsePrivate(
    AbortEnvironmentUpdateResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk AbortEnvironmentUpdateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AbortEnvironmentUpdateResponsePrivate::AbortEnvironmentUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AbortEnvironmentUpdateResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
