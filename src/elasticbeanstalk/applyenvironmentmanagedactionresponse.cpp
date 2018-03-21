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

#include "applyenvironmentmanagedactionresponse.h"
#include "applyenvironmentmanagedactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  ApplyEnvironmentManagedActionResponse
 *
 * @brief  Handles ElasticBeanstalk ApplyEnvironmentManagedAction responses.
 *
 * @see    ElasticBeanstalkClient::applyEnvironmentManagedAction
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ApplyEnvironmentManagedActionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new ApplyEnvironmentManagedActionResponsePrivate(this), parent)
{
    setRequest(new ApplyEnvironmentManagedActionRequest(request));
    setReply(reply);
}

const ApplyEnvironmentManagedActionRequest * ApplyEnvironmentManagedActionResponse::request() const
{
    Q_D(const ApplyEnvironmentManagedActionResponse);
    return static_cast<const ApplyEnvironmentManagedActionRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk ApplyEnvironmentManagedAction response.
 *
 * @param  response  Response to parse.
 */
void ApplyEnvironmentManagedActionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ApplyEnvironmentManagedActionResponsePrivate
 *
 * @brief  Private implementation for ApplyEnvironmentManagedActionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplyEnvironmentManagedActionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ApplyEnvironmentManagedActionResponse instance.
 */
ApplyEnvironmentManagedActionResponsePrivate::ApplyEnvironmentManagedActionResponsePrivate(
    ApplyEnvironmentManagedActionQueueResponse * const q) : ApplyEnvironmentManagedActionPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk ApplyEnvironmentManagedActionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ApplyEnvironmentManagedActionResponsePrivate::ApplyEnvironmentManagedActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApplyEnvironmentManagedActionResponse"));
    /// @todo
}
