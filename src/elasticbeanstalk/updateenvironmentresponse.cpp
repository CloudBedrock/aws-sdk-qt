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

#include "updateenvironmentresponse.h"
#include "updateenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  UpdateEnvironmentResponse
 *
 * @brief  Handles ElasticBeanstalk UpdateEnvironment responses.
 *
 * @see    ElasticBeanstalkClient::updateEnvironment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateEnvironmentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new UpdateEnvironmentResponsePrivate(this), parent)
{
    setRequest(new UpdateEnvironmentRequest(request));
    setReply(reply);
}

const UpdateEnvironmentRequest * UpdateEnvironmentResponse::request() const
{
    Q_D(const UpdateEnvironmentResponse);
    return static_cast<const UpdateEnvironmentRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk UpdateEnvironment response.
 *
 * @param  response  Response to parse.
 */
void UpdateEnvironmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateEnvironmentResponsePrivate
 *
 * @brief  Private implementation for UpdateEnvironmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEnvironmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateEnvironmentResponse instance.
 */
UpdateEnvironmentResponsePrivate::UpdateEnvironmentResponsePrivate(
    UpdateEnvironmentQueueResponse * const q) : UpdateEnvironmentPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk UpdateEnvironmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateEnvironmentResponsePrivate::UpdateEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEnvironmentResponse"));
    /// @todo
}
