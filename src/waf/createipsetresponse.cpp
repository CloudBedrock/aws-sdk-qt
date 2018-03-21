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

#include "createipsetresponse.h"
#include "createipsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  CreateIPSetResponse
 *
 * @brief  Handles WAF CreateIPSet responses.
 *
 * @see    WAFClient::createIPSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateIPSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new CreateIPSetResponsePrivate(this), parent)
{
    setRequest(new CreateIPSetRequest(request));
    setReply(reply);
}

const CreateIPSetRequest * CreateIPSetResponse::request() const
{
    Q_D(const CreateIPSetResponse);
    return static_cast<const CreateIPSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF CreateIPSet response.
 *
 * @param  response  Response to parse.
 */
void CreateIPSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateIPSetResponsePrivate
 *
 * @brief  Private implementation for CreateIPSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateIPSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateIPSetResponse instance.
 */
CreateIPSetResponsePrivate::CreateIPSetResponsePrivate(
    CreateIPSetQueueResponse * const q) : CreateIPSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF CreateIPSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateIPSetResponsePrivate::CreateIPSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIPSetResponse"));
    /// @todo
}
