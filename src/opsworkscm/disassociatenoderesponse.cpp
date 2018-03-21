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

#include "disassociatenoderesponse.h"
#include "disassociatenoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  DisassociateNodeResponse
 *
 * @brief  Handles OpsWorksCM DisassociateNode responses.
 *
 * @see    OpsWorksCMClient::disassociateNode
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateNodeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new DisassociateNodeResponsePrivate(this), parent)
{
    setRequest(new DisassociateNodeRequest(request));
    setReply(reply);
}

const DisassociateNodeRequest * DisassociateNodeResponse::request() const
{
    Q_D(const DisassociateNodeResponse);
    return static_cast<const DisassociateNodeRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM DisassociateNode response.
 *
 * @param  response  Response to parse.
 */
void DisassociateNodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateNodeResponsePrivate
 *
 * @brief  Private implementation for DisassociateNodeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateNodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateNodeResponse instance.
 */
DisassociateNodeResponsePrivate::DisassociateNodeResponsePrivate(
    DisassociateNodeQueueResponse * const q) : DisassociateNodePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM DisassociateNodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateNodeResponsePrivate::DisassociateNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateNodeResponse"));
    /// @todo
}

} // namespace OpsWorksCM
} // namespace AWS
