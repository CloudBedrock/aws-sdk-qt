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

#include "setstatusresponse.h"
#include "setstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/**
 * @class  SetStatusResponse
 *
 * @brief  Handles DataPipeline SetStatus responses.
 *
 * @see    DataPipelineClient::setStatus
 */

/**
 * @brief  Constructs a new SetStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetStatusResponse::SetStatusResponse(
        const SetStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SetStatusResponse(new SetStatusResponsePrivate(this), parent)
{
    setRequest(new SetStatusRequest(request));
    setReply(reply);
}

const SetStatusRequest * SetStatusResponse::request() const
{
    Q_D(const SetStatusResponse);
    return static_cast<const SetStatusRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline SetStatus response.
 *
 * @param  response  Response to parse.
 */
void SetStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetStatusResponsePrivate
 *
 * @brief  Private implementation for SetStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetStatusResponse instance.
 */
SetStatusResponsePrivate::SetStatusResponsePrivate(
    SetStatusResponse * const q) : DataPipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline SetStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetStatusResponsePrivate::parseSetStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetStatusResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace QtAws
