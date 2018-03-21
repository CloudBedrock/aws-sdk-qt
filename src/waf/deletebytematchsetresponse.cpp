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

#include "deletebytematchsetresponse.h"
#include "deletebytematchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  DeleteByteMatchSetResponse
 *
 * @brief  Handles WAF DeleteByteMatchSet responses.
 *
 * @see    WAFClient::deleteByteMatchSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteByteMatchSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new DeleteByteMatchSetResponsePrivate(this), parent)
{
    setRequest(new DeleteByteMatchSetRequest(request));
    setReply(reply);
}

const DeleteByteMatchSetRequest * DeleteByteMatchSetResponse::request() const
{
    Q_D(const DeleteByteMatchSetResponse);
    return static_cast<const DeleteByteMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF DeleteByteMatchSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteByteMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteByteMatchSetResponsePrivate
 *
 * @brief  Private implementation for DeleteByteMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteByteMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteByteMatchSetResponse instance.
 */
DeleteByteMatchSetResponsePrivate::DeleteByteMatchSetResponsePrivate(
    DeleteByteMatchSetQueueResponse * const q) : DeleteByteMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF DeleteByteMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteByteMatchSetResponsePrivate::DeleteByteMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteByteMatchSetResponse"));
    /// @todo
}
